#include "dsdalsaengine.h"
#include "core/application.h"
#include "core/logging.h"

#include <alsa/asoundlib.h>
#include <arpa/inet.h>   // htonl
#include <cstring>

#include <errno.h>
#include <time.h>

#include <QElapsedTimer>
#include <QThread>

#include <QTimer>
#include <atomic>


namespace {
  int dbg_quota_play_frames     = 3;  // "DSD chunk frames: …"
  int dbg_quota_fetch_refills   = 3;  // "Fetch: L=… R=… file_pos=… remaining…"
  int dbg_quota_fetch_available = 3;  // "Fetch: availL=… availR=… -> got=…"
}

// Bit-reverse 8-bit με προτίμηση σε compiler builtin, αλλιώς 256-entry LUT
#if defined(__has_builtin)
#  if __has_builtin(__builtin_bitreverse8)
static inline uint8_t rev8b(uint8_t x) { return __builtin_bitreverse8(x); }
#  else
// build a 256-entry LUT once (static init), O(1) ανά κλήση
static const uint8_t* kRev8Lut = []() {
  static uint8_t lut[256];
  for (int i = 0; i < 256; ++i) {
    uint8_t x = static_cast<uint8_t>(i);
    x = static_cast<uint8_t>((x >> 4) | (x << 4));
    x = static_cast<uint8_t>(((x & 0xCC) >> 2) | ((x & 0x33) << 2));
    x = static_cast<uint8_t>(((x & 0xAA) >> 1) | ((x & 0x55) << 1));
    lut[i] = x;
  }
  return lut;
}();
static inline uint8_t rev8b(uint8_t x) { return kRev8Lut[x]; }
#  endif
#else
// GCC/Clang χωρίς __has_builtin: πάντα LUT
static const uint8_t* kRev8Lut = []() {
  static uint8_t lut[256];
  for (int i = 0; i < 256; ++i) {
    uint8_t x = static_cast<uint8_t>(i);
    x = static_cast<uint8_t>((x >> 4) | (x << 4));
    x = static_cast<uint8_t>(((x & 0xCC) >> 2) | ((x & 0x33) << 2));
    x = static_cast<uint8_t>(((x & 0xAA) >> 1) | ((x & 0x55) << 1));
    lut[i] = x;
  }
  return lut;
}();
static inline uint8_t rev8b(uint8_t x) { return kRev8Lut[x]; }
#endif

DsdAlsaEngine::DsdAlsaEngine(Application* app, QObject* parent)
	: Engine::Base(), app_(app) {
	Q_UNUSED(parent); 
	// --- periodic UI updates while playing ---
	pos_timer_.setInterval(200);
	pos_timer_.setTimerType(Qt::CoarseTimer);	
	
	connect(&pos_timer_, &QTimer::timeout, this, [this]{
		const auto us = position_nanosec() / 1000;
	 //qLog(Debug) << "DSD tick usec=" << us;  // TEMP: prove timer is alive
		Q_EMIT this->PositionChanged(us);
	}, Qt::QueuedConnection);

	// No fadeout/crossfade in native DSD: let the app quit immediately
	fadeout_enabled_        = false;
	fadeout_pause_enabled_  = false;
	crossfade_enabled_      = false;
	autocrossfade_enabled_  = false;
}

DsdAlsaEngine::~DsdAlsaEngine() {
  Stop(false);
}

bool DsdAlsaEngine::Init() {
	//pos_timer_.setInterval(200);
	//pos_timer_.setTimerType(Qt::CoarseTimer);
	//connect(&pos_timer_, &QTimer::timeout, this, [this]{
	  //Q_EMIT this->PositionChanged(position_nanosec() / 1000);  // microseconds
	//}, Qt::QueuedConnection);
	return true; 
}

// ---- map DSD sample rate (Hz) to ALSA "rate" for DSD_U32_* (fs/32) ----
unsigned int DsdAlsaEngine::MapDsdToAlsaRate(uint64_t dsd_hz) {
  if      (dsd_hz ==  2822400ULL) return  88200;   // DSD64
  else if (dsd_hz ==  5644800ULL) return 176400;   // DSD128
  else if (dsd_hz == 11289600ULL) return 352800;   // DSD256
  else if (dsd_hz == 22579200ULL) return 705600;   // DSD512
  // fallback: round to nearest 88.2k multiple
  if      (dsd_hz <=  2822400ULL) return  88200;
  else if (dsd_hz <=  5644800ULL) return 176400;
  else if (dsd_hz <= 11289600ULL) return 352800;
  return 705600;
}

static inline uint8_t rev8(uint8_t x) {
  x = (x >> 4) | (x << 4);
  x = ((x & 0xCC) >> 2) | ((x & 0x33) << 2);
  x = ((x & 0xAA) >> 1) | ((x & 0x55) << 1);
  return x;
}

// DSF gives 4 bytes (32 one-bit samples) per channel per frame, LSB-first per byte.
// We bit-reverse each byte, then produce a big-endian 32-bit word whose MSB is earliest bit.
uint32_t DsdAlsaEngine::Pack32ToBeWord(const uint8_t* src4) {
  uint32_t b0 = rev8(src4[0]);
  uint32_t b1 = rev8(src4[1]);
  uint32_t b2 = rev8(src4[2]);
  uint32_t b3 = rev8(src4[3]);
  uint32_t v  = (b0 << 24) | (b1 << 16) | (b2 << 8) | b3;  // BE value
  return htonl(v); // ensure BE in memory on little-endian hosts
}

bool DsdAlsaEngine::OpenDevice(uint64_t dsd_rate_hz) {
    alsa_rate_ = MapDsdToAlsaRate(dsd_rate_hz);
    if (alsa_rate_ > 0 && length_nanosec_ > 0) {
        total_alsa_frames_ = (length_nanosec_ * alsa_rate_) / 1000000000ULL;
    }
	// --- open ALSA with timed retry (max ~3.5s, exponential-ish backoff) ---
	int err = 0;
	int tries = 0;
	int sleep_ms = 15;
	QElapsedTimer tt; tt.start();

	for (;;) {
	  err = snd_pcm_open(&pcm_, "hw:1,0", SND_PCM_STREAM_PLAYBACK, 0);
	  if (err == 0) break;
	  if (err != -EBUSY) {
		qLog(Error) << "snd_pcm_open: " << snd_strerror(err);
		return false;
	  }

	  // still busy
	  if (tt.elapsed() > 8000) {
		qLog(Error) << "snd_pcm_open: Device or resource busy";
		return false;
	  }

	  if ((tries++ % 8) == 0)  // log every ~8 tries to avoid log flood
		qLog(Debug) << "snd_pcm_open: busy, retrying…";

	  QThread::msleep(sleep_ms);
	  if (sleep_ms < 100) sleep_ms += 5;  // gentle backoff
	}
	// --- end open retry ---

  if (err < 0) {
    qLog(Error) << "snd_pcm_open:" << snd_strerror(err);
    return false;
  }

  snd_pcm_hw_params_t* hw = nullptr;
  
  snd_pcm_hw_params_malloc(&hw);
  snd_pcm_hw_params_any(pcm_, hw);
  snd_pcm_hw_params_set_access(pcm_, hw, SND_PCM_ACCESS_RW_INTERLEAVED);
  snd_pcm_hw_params_set_channels(pcm_, hw, 2);
  snd_pcm_hw_params_set_format(pcm_, hw, SND_PCM_FORMAT_DSD_U32_BE);

  // generous buffers to avoid underruns
  snd_pcm_uframes_t period = 4096;
  snd_pcm_uframes_t buffer = period * 4;
  snd_pcm_hw_params_set_period_size_near(pcm_, hw, &period, 0);
  snd_pcm_hw_params_set_buffer_size_near(pcm_, hw, &buffer);
  snd_pcm_hw_params_set_rate_near(pcm_, hw, &alsa_rate_, 0);
  err = snd_pcm_hw_params(pcm_, hw);
  snd_pcm_hw_params_free(hw);
  if (err < 0) {
    qLog(Error) << "snd_pcm_hw_params:" << snd_strerror(err);
    snd_pcm_close(pcm_); pcm_ = nullptr;
    return false;
  }

  // Query actual buffer/period chosen by ALSA
  snd_pcm_uframes_t actual_buffer = 0, actual_period = 0;
  snd_pcm_get_params(pcm_, &actual_buffer, &actual_period);

  // Prepare device
  snd_pcm_prepare(pcm_);

  // Software params: start as soon as we have one period; wake on a period
  snd_pcm_sw_params_t* sw = nullptr;
  snd_pcm_sw_params_malloc(&sw);
  snd_pcm_sw_params_current(pcm_, sw);
  snd_pcm_sw_params_set_start_threshold(pcm_, sw, actual_period);
  snd_pcm_sw_params_set_avail_min(pcm_, sw, actual_period);
  snd_pcm_sw_params(pcm_, sw);
  snd_pcm_sw_params_free(sw);

  // Blocking IO
  snd_pcm_nonblock(pcm_, 0);

  qLog(Debug) << "ALSA ready: rate" << alsa_rate_
              << " fmt DSD_U32_BE ch 2"
              << " (buffer=" << actual_buffer
              << ", period=" << actual_period << ")";           
  return true;
}

void DsdAlsaEngine::CloseDevice() {
  if (pcm_) {
    snd_pcm_close(pcm_);
    pcm_ = nullptr;
  }
}

bool DsdAlsaEngine::OpenFile(const QUrl& url) {
	stop_flag_ = false;
	natural_eof_ = false;
	stop_after_request_ = false;
	CloseFile();

	const QString path = url.isLocalFile() ? url.toLocalFile() : url.toString();
	file_.setFileName(path);
	if (!file_.open(QIODevice::ReadOnly)) {
		qLog(Error) << "DSD open failed:" << path;
		return false;
	}

	auto rd_u32_le = [&](qint64 off)->uint32_t {
		unsigned char b[4];
		if (!file_.seek(off) || file_.read(reinterpret_cast<char*>(b), 4) != 4) return 0;
		return uint32_t(b[0]) | (uint32_t(b[1])<<8) | (uint32_t(b[2])<<16) | (uint32_t(b[3])<<24);
	};
	auto rd_u64_le = [&](qint64 off)->uint64_t {
		unsigned char b[8];
		if (!file_.seek(off) || file_.read(reinterpret_cast<char*>(b), 8) != 8) return 0;
		uint64_t v=0; for (int i=7;i>=0;--i) v=(v<<8) | b[i]; return v;
	};

 auto rd_u32_be = [&](qint64 off)->uint32_t {
   unsigned char b[4];
   if (!file_.seek(off) || file_.read(reinterpret_cast<char*>(b), 4) != 4) return 0;
   return (uint32_t(b[0])<<24) | (uint32_t(b[1])<<16) | (uint32_t(b[2])<<8) | uint32_t(b[3]);
 };
 auto rd_u64_be = [&](qint64 off)->uint64_t {
   unsigned char b[8];
   if (!file_.seek(off) || file_.read(reinterpret_cast<char*>(b), 8) != 8) return 0;
   uint64_t v=0; for (int i=0;i<8;++i) v=(v<<8) | b[i]; return v;
 };
	
	auto rd_id4 = [&](qint64 off, char id[4])->bool {
		if (!file_.seek(off)) return false;
		return file_.read(id, 4) == 4;
	};

	const qint64 fsize = file_.size();
	if (fsize < 64) { qLog(Error) << "DSF too small"; return false; }
	
  // Must start with "DSD "
 // Header
 char id[4];
 if (!rd_id4(0, id)) { qLog(Error) << "OpenFile: failed to read header"; return false; }

   // =======================
   // DFF (DSDIFF) container
   // =======================
  if (std::memcmp(id, "FRM8", 4) == 0) {
    const uint64_t frm8_size = rd_u64_be(4);
    const qint64 frm8_end = (qint64)frm8_size + 12; // 12: 'FRM8'+size; form 'DSD ' is at 12..15
    if (frm8_end > fsize) {
      qLog(Error) << "DFF: FRM8 size beyond file";
      return false;
    }

    char form[4]; if (!rd_id4(12, form) || std::memcmp(form, "DSD ", 4) != 0) {
      qLog(Error) << "DFF: FRM8 form is not 'DSD '";
      return false;
    }

    // Walk chunks to find PROP (with FS/CHNL/CMPR) and DSD (audio)
    qint64 off = 16;  // 12 ('FRM8'+size) + 4 ('DSD ') → first chunk header starts here
    bool have_prop=false, have_dsd=false;


   
   uint32_t srate = 0;
   uint32_t ch_num = 0;
   bool cmpr_ok = false;

   while (off + 12 <= frm8_end) {
     char cid[4]; if (!rd_id4(off, cid)) break;
     const uint64_t csize = rd_u64_be(off + 4);           // PAYLOAD bytes (no header)
     const qint64 chunk_data_off = off + 12;
     const qint64 chunk_end = chunk_data_off + (qint64)csize;
     if (chunk_end > frm8_end) {
       qLog(Error) << "DFF: corrupt chunk at" << off;
       return false;
     }
     if (std::memcmp(cid, "PROP", 4) == 0) {
       // property chunk: contains sub-chunks
       qint64 p = chunk_data_off;
       const qint64 prop_end = chunk_end;
       // first 4 bytes: prop type 'SND '
       char ptype[4]; if (!rd_id4(p, ptype)) { qLog(Error) << "DFF: PROP no type"; return false; }
       p += 4;
       while (p + 12 <= prop_end) {
         char pid[4]; if (!rd_id4(p, pid)) break;
         const uint64_t psz = rd_u64_be(p + 4);           // PAYLOAD bytes
         const qint64 sub_data_off = p + 12;
         const qint64 sub_end = sub_data_off + (qint64)psz;
         if (sub_end > prop_end) break;
         if (std::memcmp(pid, "FS  ", 4) == 0) {
           srate = rd_u32_be(sub_data_off);           
         } else if (std::memcmp(pid, "CHNL", 4) == 0) {
           // 2 bytes: number of channels (BE)
           unsigned char hdr[2];
           if (file_.seek(sub_data_off) && file_.read(reinterpret_cast<char*>(hdr), 2) == 2) {
             ch_num = (uint32_t(hdr[0])<<8) | uint32_t(hdr[1]);
           }
         } else if (std::memcmp(pid, "CMPR", 4) == 0) {
           char cmpr[4]; if (rd_id4(sub_data_off, cmpr) && std::memcmp(cmpr, "DSD ", 4) == 0) cmpr_ok = true;
         }
         p = sub_end;   // advance by header(12) + payload
       }
       have_prop = true;
     } else if (std::memcmp(cid, "DSD ", 4) == 0) {
       data_offset_ = chunk_data_off;           // after id+size
       data_bytes_  = (qint64)csize;            // PAYLOAD bytes
       have_dsd = true;
     }
     off = chunk_end;                           // advance by header(12) + payload
     if (have_prop && have_dsd) break;
   }

   if (!have_prop || !have_dsd) { qLog(Error) << "DFF: missing PROP or DSD chunk"; return false; }
   if (!cmpr_ok)                { qLog(Error) << "DFF: compressed (DST) not supported"; return false; }
   if (ch_num == 0) ch_num = 2;
   if (ch_num != 2) { qLog(Error) << "DFF: only stereo supported, got channels =" << ch_num; return false; }

   dsd_rate_hz_ = srate;
   channels_ = ch_num;
   block_size_per_channel_ = 0;   // flag: DFF path (interleaved)

   // Prime reading state
   if (!file_.seek(data_offset_)) { qLog(Error) << "DFF: seek to data failed"; return false; }
   lblock_.clear(); rblock_.clear();
   lpos_ = rpos_ = 0;
   primed_data_pos_ = false;

   total_data_bytes_ = static_cast<quint64>(data_bytes_);

   // --- compute timeline for UI ---
   const long double total_samples_per_ch =
       (static_cast<long double>(data_bytes_) * 8.0L) / static_cast<long double>(channels_);
   total_frames_ = static_cast<quint64>(total_samples_per_ch);
   length_nanosec_ = static_cast<quint64>(
       (total_samples_per_ch * 1.0e9L) / static_cast<long double>(dsd_rate_hz_));

   qLog(Debug) << "DFF rate:" << dsd_rate_hz_
               << " channels:" << channels_
               << " data_bytes:" << data_bytes_
               << " length(ns):" << length_nanosec_;

	// done (DFF)
	return true;
	} else if (std::memcmp(id, "DSD ", 4) == 0) {
		// =======================
		// DSF path (υφιστάμενος)
		// =======================
		// [Κράτα εδώ τον DSF parser σου όπως είναι]
	} else {
		qLog(Error) << "Unknown DSD container magic:" << QByteArray(id,4);
		return false;
	}  
	uint64_t dsd_chunk_size = rd_u64_le(4);
	if (dsd_chunk_size < 12 || dsd_chunk_size > (uint64_t)fsize) {
		qLog(Error) << "Bad DSD chunk size";
		return false;
	}
	// Scan for "fmt " and "data" chunks
	qint64 off = (qint64)dsd_chunk_size;
	bool have_fmt = false, have_data = false;
	uint32_t ch_num = 0;
	uint32_t block_per_ch = 0;
	uint32_t srate = 0;

	while (off + 12 <= fsize) {
	if (!rd_id4(off, id)) break;
	uint64_t csize = rd_u64_le(off + 4);
	if (csize < 12 || off + (qint64)csize > fsize) {
	  qLog(Error) << "Corrupt chunk at" << off;
	  return false;
	}

	if (std::memcmp(id, "fmt ", 4) == 0) {
	  const qint64 fp = off + 12;
	  /*uint32_t fmt_version   =*/ rd_u32_le(fp + 0);
	  /*uint32_t format_id     =*/ rd_u32_le(fp + 4);   // 0: DSD raw
	  /*uint32_t ch_type       =*/ rd_u32_le(fp + 8);
	  ch_num                    =  rd_u32_le(fp + 12);
	  srate                     =  rd_u32_le(fp + 16);
	  /*uint32_t bits          =*/ rd_u32_le(fp + 20);
	  /*uint64_t sample_count  =*/ rd_u64_le(fp + 24);
	  block_per_ch              =  rd_u32_le(fp + 32);
	  /*uint32_t reserved      =*/ rd_u32_le(fp + 36);
	  have_fmt = true;
	}
	else if (std::memcmp(id, "data", 4) == 0) {
	  data_offset_ = off + 12;                 // after id+size
	  data_bytes_  = qint64(rd_u64_le(off + 4)) - 12; // DSF: size includes header
	  have_data = true;
	}

	off += (qint64)csize;
	if (have_fmt && have_data) break;
	}

	if (!have_fmt || !have_data) {
		qLog(Error) << "Missing fmt or data chunk";
		return false;
	}
	if (ch_num != 2) {
		qLog(Error) << "Only stereo DSF supported for now, got channels =" << ch_num;
		return false;
	}

	dsd_rate_hz_ = srate;
	block_size_per_channel_ = int(block_per_ch > 0 ? block_per_ch : 4096);

	// Prime reading state
	if (!file_.seek(data_offset_)) {
		qLog(Error) << "seek to data failed";
		return false;
	}
	lblock_.clear(); rblock_.clear();
	lpos_ = rpos_ = 0;
	channels_ = 2;

	primed_data_pos_ = false;

	  qLog(Debug) << "DSF rate:" << dsd_rate_hz_
				 << " block_per_ch:" << block_size_per_channel_
				 << " data_bytes:" << data_bytes_;


	  // --- compute timeline for UI (single, authoritative calculation) ---
	  // total_samples_per_channel = (bytes_per_channel * 8)
	  // bytes_per_channel = data_bytes_ / channels_
	  // => total_samples_per_channel = (data_bytes_ * 8) / channels_
	  if (dsd_rate_hz_ <= 0 || channels_ == 0 || data_bytes_ <= 0) {
		qLog(Error) << "Invalid DSD format params for timeline";
		return false;
	  }

	  const long double total_samples_per_ch =
		  (static_cast<long double>(data_bytes_) * 8.0L) / static_cast<long double>(channels_);

	  total_frames_ = static_cast<quint64>(total_samples_per_ch);  // we treat "frames" as per-channel samples

	  length_nanosec_ = static_cast<quint64>(
		  (total_samples_per_ch * 1.0e9L) / static_cast<long double>(dsd_rate_hz_));
	  qLog(Debug) << "DSD length (ns):" << length_nanosec_;
		// don’t recompute alsa_rate_ here — it will be set in OpenDevice()
		// but you can already pre-compute total_alsa_frames_ if alsa_rate_ is known
		if (alsa_rate_ > 0)
			total_alsa_frames_ = (length_nanosec_ * alsa_rate_) / 1000000000ULL;
		else
			total_alsa_frames_ = 0;

	  // reset play position & seek state for this new file
	  pos_frames_.store(0, std::memory_order_relaxed);
	  seek_target_frames_.store(std::numeric_limits<quint64>::max(), std::memory_order_relaxed);
	  total_data_bytes_ = static_cast<quint64>(data_bytes_);

	  return true;
}


void DsdAlsaEngine::CloseFile() {
   if (file_.isOpen()) file_.close();
   data_offset_ = 0; data_bytes_ = 0; dsd_rate_hz_ = 0;
   // reset timeline & seek state so UI never reuses stale values
   length_nanosec_ = 0;
   total_frames_   = 0;
   pos_frames_.store(0, std::memory_order_relaxed);
   seek_target_frames_.store(std::numeric_limits<quint64>::max(),
                             std::memory_order_relaxed);
   lblock_.clear(); rblock_.clear(); lpos_ = rpos_ = 0;
}

size_t DsdAlsaEngine::FetchDsdFrames(size_t frames,
                                     const uint8_t** L,
                                     const uint8_t** R) {
  auto refill_blocks = [&]() -> bool {
    if (lpos_ >= lblock_.size()) {
      // For the very first read, force the file position to the start of audio
      if (!primed_data_pos_) {
        if (!file_.seek(data_offset_)) {
          qLog(Error) << "Fetch: seek to data_offset failed" << data_offset_;
          return false;
        }
        file_.seek(data_offset_);
        primed_data_pos_ = true;
        if (dbg_quota_fetch_refills-- > 0) {
			qLog(Debug) << "Fetch: primed file pos at" << file_.pos()
						<< " data_bytes=" << data_bytes_;
        }                    
      }
      if (data_bytes_ <= 0) {
        qLog(Debug) << "Fetch: no data bytes left";
        return false;
      }

      if (block_size_per_channel_ > 0) {
        // ------- DSF: ξεχωριστά L και R blocks -------
        qint64 pos_before_L = file_.pos();
        lblock_ = file_.read(block_size_per_channel_);
        qint64 gotL = lblock_.size();
        if (gotL <= 0) {
          qLog(Error) << "Fetch: L read failed at pos" << pos_before_L
                      << " data_bytes=" << data_bytes_;
          return false;
        }
        data_bytes_ -= gotL;
        lpos_ = 0;

        if (data_bytes_ <= 0) {
          qLog(Debug) << "Fetch: ran out of data after L read";
          return false;
        }

        qint64 pos_before_R = file_.pos();
        rblock_ = file_.read(block_size_per_channel_);
        qint64 gotR = rblock_.size();
        if (gotR <= 0) {
          qLog(Error) << "Fetch: R read failed at pos" << pos_before_R
                      << " data_bytes=" << data_bytes_;
          return false;
        }
        data_bytes_ -= gotR;
        rpos_ = 0;

        // Αν υπάρχει in-block offset από seek, εφάρμοσέ το ΜΙΑ φορά
        if (pending_inblock_bytes_ > 0) {
          const int inb = std::min<int>(pending_inblock_bytes_, block_size_per_channel_);
          qLog(Debug) << "POST-REFILL apply inblock(DSF): before lpos=" << lpos_
                      << " rpos=" << rpos_ << " inb=" << inb;
          lpos_ = rpos_ = inb;
          pending_inblock_bytes_ = 0;
          qLog(Debug) << "POST-REFILL apply inblock(DSF): after  lpos=" << lpos_
                      << " rpos=" << rpos_;
        }

        if (dbg_quota_fetch_refills-- > 0) {
          qLog(Debug) << "Fetch: L=" << gotL << " R=" << gotR
                      << " file_pos=" << file_.pos()
                      << " remaining data_bytes=" << data_bytes_;
        }
      } else {
        // ------- DFF: interleaved bytes L,R,L,R,... -------
        // ΠΑΝΤΑ διάβασε πολλαπλάσιο του (channels_*4) = 8 bytes σε stereo (32 bits/κανάλι ανά frame).
        constexpr int kDffChunkPerCh = 4096;                // 4096 bytes ανά κανάλι
        int avail_total = (int)std::min<qint64>((qint64)(kDffChunkPerCh * channels_), data_bytes_);
        const int unit = channels_ * 4; // 4 bytes/κανάλι ⇒ 8 σύνολο στο stereo

        if (avail_total <= 0) {
          qLog(Debug) << "Fetch: DFF no more data (data_bytes_=" << data_bytes_ << ")";
          return false;
        }
        // Στρογγυλοποίησε προς τα κάτω στο πλησιέστερο πολλαπλάσιο του unit
        avail_total -= (avail_total % unit);
        if (avail_total <= 0) {
          qLog(Debug) << "Fetch: DFF tail smaller than unit; stopping (data_bytes_=" << data_bytes_ << ")";
          return false;
        }

        // Προσωρινό buffer interleaved
        tmp_interleaved_.resize(avail_total);
        int got = file_.read(tmp_interleaved_.data(), (int)tmp_interleaved_.size());
        if (got <= 0) {
          qLog(Error) << "Fetch: DFF read failed at pos" << file_.pos()
                      << " data_bytes=" << data_bytes_;
          return false;
        }
        // Αν πήραμε bytes που δεν είναι πολλαπλάσιο του unit, κάνε rollback το υπόλοιπο
        if (got % unit) {
          int rem = got % unit;
          file_.seek(file_.pos() - rem);
          got -= rem;
        }
        if (got <= 0) {
          qLog(Debug) << "Fetch: DFF short-read with remainder; skipping";
          return false;
        }

        const int got_per_ch = got / channels_;   // stereo => /2
        const int outN = got_per_ch;              // bytes/κανάλι — ΕΓΓΥΗΜΕΝΑ πολλαπλάσιο του 4

        // Βεβαιώσου ότι τα L/R buffers χωράνε outN bytes
        if (lblock_.size() < outN) lblock_.resize(outN);
        if (rblock_.size() < outN) rblock_.resize(outN);

        // Αποπλέξη: L στα ζυγά, R στα μονά (stereo). Αν ακούς ανάποδα κανάλια, άλλαξε το kFlipLR.
        constexpr bool kFlipLR = false;
        const unsigned char* s =
            reinterpret_cast<const unsigned char*>(tmp_interleaved_.constData());
        unsigned char* dl = reinterpret_cast<unsigned char*>(lblock_.data());
        unsigned char* dr = reinterpret_cast<unsigned char*>(rblock_.data());
        if (!kFlipLR) {
          for (int i = 0; i < outN; ++i) {
            dl[i] = s[2*i + 0];  // L: ζυγοί
            dr[i] = s[2*i + 1];  // R: μονά
          }
        } else {
          for (int i = 0; i < outN; ++i) {
            dl[i] = s[2*i + 1];
            dr[i] = s[2*i + 0];
          }
        }

        // ─── ΣΗΜΑΝΤΙΚΟ ───
        // Προς το παρόν ΧΩΡΙΣ swap τετράδας και ΧΩΡΙΣ bit-reverse.
        // Αν το «φύσημα» μείνει:
        //   (α) ΔΟΚΙΜΑΣΕ μόνο bit-reverse:
              for (int i = 0; i < outN; ++i) { dl[i] = rev8b(dl[i]); dr[i] = rev8b(dr[i]); }
        //   (β) ή μόνο swap τετράδας:
        //       for (int i = 0; i + 3 < outN; i += 4) { swap(dl[i],dl[i+3]); swap(dl[i+1],dl[i+2]);
        //                                                swap(dr[i],dr[i+3]); swap(dr[i+1],dr[i+2]); }

        data_bytes_ -= got;
        lpos_ = rpos_ = 0;

        // Αν υπάρχει in-block offset από seek, εφάρμοσέ το ΜΙΑ φορά
        if (pending_inblock_bytes_ > 0) {
          const int inb = std::min<int>(pending_inblock_bytes_, outN);
          qLog(Debug) << "POST-REFILL apply inblock(DFF): before lpos=" << lpos_
                      << " rpos=" << rpos_ << " inb=" << inb;
          lpos_ = rpos_ = inb;
          pending_inblock_bytes_ = 0;
          qLog(Debug) << "POST-REFILL apply inblock(DFF): after  lpos=" << lpos_
                      << " rpos=" << rpos_;
        }

        if (dbg_quota_fetch_refills-- > 0) {
          qLog(Debug) << "Fetch (DFF): L=" << outN << " R=" << outN
                      << " file_pos=" << file_.pos()
                      << " remaining data_bytes=" << data_bytes_;
        }
      }


    }
    return true;
  };

  if (!refill_blocks()) { *L = *R = nullptr; return 0; }

  size_t availL = (lblock_.size() - lpos_) / 4;
  size_t availR = (rblock_.size() - rpos_) / 4;
  size_t got = std::min(frames, std::min(availL, availR));

  if (dbg_quota_fetch_available-- > 0) {
	  qLog(Debug) << "Fetch: availL=" << availL
				  << " availR=" << availR
				  << " req=" << frames
				  << " -> got=" << got;
  }


  if (got == 0) {
    // Try to refill once more if we’re at the end of the blocks
    if (!refill_blocks()) { *L = *R = nullptr; return 0; }
    availL = (lblock_.size() - lpos_) / 4;
    availR = (rblock_.size() - rpos_) / 4;
    got = std::min(frames, std::min(availL, availR));
    qLog(Debug) << "Fetch (after refill): availL=" << availL
                << " availR=" << availR
                << " req=" << frames
                << " -> got=" << got;
    if (got == 0) { *L = *R = nullptr; return 0; }
  }

  *L = reinterpret_cast<const uint8_t*>(lblock_.constData()) + lpos_;
  *R = reinterpret_cast<const uint8_t*>(rblock_.constData()) + rpos_;
  lpos_ += int(got * 4);
  rpos_ += int(got * 4);
  return got;
}

bool DsdAlsaEngine::Load(const MediaPlaybackRequest& req,
                         Engine::TrackChangeFlags /*change*/,
                         bool /*force_stop_at_end*/,
                         quint64 /*beginning_nanosec*/,
                         qint64 /*end_nanosec*/) {
  Stop(false);                 // this sets stop_flag_ = true
  stop_flag_ = false;
  
  dbg_quota_play_frames     = 3;
  dbg_quota_fetch_refills   = 3;
  dbg_quota_fetch_available = 3;

  if (!OpenFile(req.MediaUrl())) return false;
  if (!OpenDevice(dsd_rate_hz_)) { CloseFile(); return false; }
  //state_ = Engine::Paused;
  //emit StateChanged(state_);
  return true;
}

void DsdAlsaEngine::PlaybackLoop() {
  // Align chunk size to device period
  snd_pcm_uframes_t actual_buffer = 0, actual_period = 0;
  snd_pcm_get_params(pcm_, &actual_buffer, &actual_period);

  size_t chunk_frames = actual_period ? size_t(actual_period) : size_t(4096);
  QByteArray out;
  out.resize(chunk_frames * 8);  // 8 bytes per interleaved DSD frame (L 4 + R 4)

  bool started = false;

  while (!stop_flag_) {
    // --- Respect Pause ---	  
    if (paused_.load(std::memory_order_acquire)) {
      // Αν δεν υποστηρίζεται hw pause, απλώς περίμενε (χωρίς CPU spin)
      QMutexLocker lk(&pause_mutex_);
      pause_wait_.wait(&pause_mutex_, 50); // wakeAll στο Unpause()/Stop()
      continue;
    }	  
	  // --- apply pending seek (if any) ---
	  const quint64 want = seek_target_frames_.load(std::memory_order_acquire);
	  if (want != std::numeric_limits<quint64>::max()) {

		// 0) Σταμάτα καθαρά το ALSA stream και ετοίμασε για νέο γράψιμο
		if (pcm_) { snd_pcm_drop(pcm_); snd_pcm_prepare(pcm_); started = false; }

		// ALSA frames -> DSD samples per channel (U32: 32 δείγματα/κανάλι/ALSA frame)
		const quint64 samples_per_ch = want * 32ULL;

		if (block_size_per_channel_ > 0) {
		  // ---------- DSF ----------
		  const quint64 B = (quint64)block_size_per_channel_;
		  const quint64 bytes_per_ch = samples_per_ch / 8ULL;
		  const quint64 block_idx    = bytes_per_ch / B;
		  const quint64 inblock      = bytes_per_ch % B;

		  const off64_t blockpair_off =
			  (off64_t)data_offset_ + (off64_t)block_idx * (off64_t)(B * channels_);

		  // LOGS ζητήθηκαν:
		  qLog(Debug) << "APPLY-SEEK DSF: want=" << want
					  << " samples/ch=" << samples_per_ch
					  << " block_idx=" << block_idx
					  << " inblock=" << inblock
					  << " blockpair_off=" << blockpair_off;

		  if (file_.isOpen()) file_.seek(blockpair_off);

		  // reset loader state ώστε το επόμενο refill να διαβάσει αυτό το block-pair
		  lblock_.clear(); rblock_.clear();
		  lpos_ = rpos_ = 0;
		  primed_data_pos_ = true;             // μην ξανα-πριμάρει στην αρχή
		  pending_inblock_bytes_ = (int)std::min<quint64>(inblock, B);

		  // bytes που απομένουν από εδώ και κάτω (για EOF)
		  const quint64 consumed = block_idx * (B * (quint64)channels_);
		  const qint64  remain   = (qint64)total_data_bytes_ - (qint64)consumed;
		  data_bytes_ = remain > 0 ? remain : 0;

		  qLog(Debug) << "APPLY-SEEK DSF: filepos(after seek)=" << file_.pos()
					  << " data_bytes_=" << data_bytes_
					  << " pending_inblock=" << pending_inblock_bytes_;
		} else {
		  // ---------- DFF (interleaved bytes, απλό) ----------
		  const off64_t new_off =
			  (off64_t)data_offset_ + (off64_t)(samples_per_ch * (quint64)channels_ / 8ULL);

		  qLog(Debug) << "APPLY-SEEK DFF: want=" << want
					  << " samples/ch=" << samples_per_ch
					  << " file_off=" << new_off;

		  if (file_.isOpen()) file_.seek(new_off);

		  lblock_.clear(); rblock_.clear();
		  lpos_ = rpos_ = 0;
		  primed_data_pos_ = true;

		  const qint64 remain = (qint64)total_data_bytes_ - (qint64)(new_off - (off64_t)data_offset_);
		  data_bytes_ = remain > 0 ? remain : 0;

		  qLog(Debug) << "APPLY-SEEK DFF: filepos(after seek)=" << file_.pos()
					  << " data_bytes_=" << data_bytes_;
		}

		// Θέσε baseline για UI/θέση
		pos_frames_.store(want, std::memory_order_release);

		// καθάρισε το pending
		seek_target_frames_.store(std::numeric_limits<quint64>::max(), std::memory_order_release);

		// Δεν ξεκινάμε το ALSA εδώ — το write loop θα γεμίσει και θα καλέσει start
	  }

  
	  
    // ---- 1) READ DSD FRAMES FROM FILE INTO L/R ----
    const uint8_t* L = nullptr;
    const uint8_t* R = nullptr;
    size_t got = FetchDsdFrames(chunk_frames, &L, &R);
    if (got == 0) break;

    // Throttled debug (optional; keep if you added quotas)
    // if (dbg_quota_play_frames-- > 0) qLog(Debug) << "DSD chunk frames:" << got;

    // ---- 2) PACK INTO DSD_U32_BE INTERLEAVED ----
    uint8_t* o = reinterpret_cast<uint8_t*>(out.data());
    const uint8_t* lp = L;
    const uint8_t* rp = R;
    for (size_t f = 0; f < got; ++f) {
      uint32_t lw = Pack32ToBeWord(lp); lp += 4;
      uint32_t rw = Pack32ToBeWord(rp); rp += 4;
      std::memcpy(o + 0, &lw, 4);
      std::memcpy(o + 4, &rw, 4);
      o += 8;
    }

    // ---- 3) WRITE TO ALSA (robust) ----
    size_t frames_left = got;
    const uint8_t* p = reinterpret_cast<const uint8_t*>(out.constData());
    while (frames_left > 0 && !stop_flag_) {
		snd_pcm_sframes_t wrote = snd_pcm_writei(pcm_, p, frames_left);

		// If stopping, exit quietly (pcm may already be dropped)
		if (stop_flag_) break;

		if (wrote == -EPIPE) {
		  qLog(Warning) << "Underrun, recovering…";
		  snd_pcm_prepare(pcm_);
		  continue;
		} else if (wrote == -EAGAIN) {
		  snd_pcm_wait(pcm_, 100);
		  continue;
		} else if (wrote == -ESTRPIPE) {
		  if (snd_pcm_resume(pcm_) == -EAGAIN) {
			snd_pcm_wait(pcm_, 100);
			continue;
		  }
		  continue;
		} else if (wrote < 0) {
		  // During Stop(), ALSA is often in BADFD after drop; just leave.
		  qLog(Debug) << "write aborted:" << snd_strerror(int(wrote));
		  break;
		} else if (wrote == 0) {
		  snd_pcm_wait(pcm_, 10);
		  continue;
		}
      
      // Success: count exactly what ALSA accepted
		pos_frames_.fetch_add(static_cast<quint64>(wrote), std::memory_order_relaxed);
                               
      // Start device after first successful write if still PREPARED
      if (!started) {
        snd_pcm_state_t st = snd_pcm_state(pcm_);
        if (st == SND_PCM_STATE_PREPARED) {
          int se = snd_pcm_start(pcm_);
          qLog(Debug) << "snd_pcm_start() ->" << se;

qLog(Debug) << "DSD length(ns)=" << length_nanosec()
            << " pos(ns)=" << position_nanosec()
            << " rate=" << alsa_rate_;

          if (se == 0) {
            started = true;
            state_ = Engine::Playing;
            emit StateChanged(state_);
            QMetaObject::invokeMethod(this, "StartPositionTimer", Qt::QueuedConnection);
          }
        }
        // NOTE: do NOT set started=true if snd_pcm_start failed or not prepared
      }

		p += wrote * 8;
		frames_left -= wrote;  
		// update position counter
		//pos_frames_.fetch_add(static_cast<quint64>(wrote)); 
    }
  }

   // ---- 4) CLEANUP & SIGNALS (on worker thread) ----
 	QMetaObject::invokeMethod(this, "StopPositionTimer", Qt::QueuedConnection);
 	CloseDevice();
 	CloseFile();
 	if (!stop_flag_) {
 		// Mark that we reached natural EOF; Player may call Stop() during hand-off.
 		natural_eof_ = true;
 		// ALSA/File are closed; now tell Player to advance.
 		emit TrackEnded();
 	} else {
 		// Stop(true) = Next/Previous → μην δείχνεις 'Stopped' εδώ.
 		if (!stop_after_request_) {
 			state_ = Engine::Empty;
 			emit StateChanged(state_);
 		}
 		qLog(Debug) << "DSD: stopped by user or track-change; not emitting TrackEnded";

	}	
	running_ = false;
}



bool DsdAlsaEngine::Play(quint64 /*offset_nanosec*/) {
  if (!pcm_) return false;

  // Fresh start
  stop_flag_ = false;

  // Join any previous worker that might still be joinable
  if (playback_thread_.joinable()) {
    playback_thread_.join();
  }

  if (running_) {
    // already playing
    return true;
  }
  running_ = true;

  state_ = Engine::Playing;
  emit StateChanged(state_);
  qLog(Debug) << "DsdAlsaEngine::Play() ENTER";

  playback_thread_ = std::thread([this]{
    this->PlaybackLoop();
  });
  return true;
}

void DsdAlsaEngine::Stop(bool stop_after) {
	stop_flag_ = true;
	stop_after_request_ = stop_after;
	// Αν ήταν paused, ξεπαγώσε flags & ξύπνα το worker για να τερματίσει καθαρά
	paused_.store(false, std::memory_order_release);
	pause_wait_.wakeAll();

	QMetaObject::invokeMethod(this, "StopPositionTimer", Qt::QueuedConnection);
	// Unblock any pending write
	if (pcm_) snd_pcm_drop(pcm_);
	// Join the worker thread if it's not this thread
	if (playback_thread_.joinable() &&
	playback_thread_.get_id() != std::this_thread::get_id()) {
		playback_thread_.join();
	}

	running_ = false;

	CloseDevice();
	CloseFile();

 	if (!stop_after && !natural_eof_) {
 		state_ = Engine::Empty;
 		emit StateChanged(state_);
 	} else {
 		// Clear the natural EOF flag; hand-off is complete.
 		natural_eof_ = false;
 	}
}

// Ασφαλής έλεγχος/εκκίνηση/στοπ του pos_timer_ από το main thread
inline static void safe_stop_timer(QTimer* t) {
  if (!t) return;
  QMetaObject::invokeMethod(t, "stop", Qt::QueuedConnection);
}
inline static void safe_start_timer(QTimer* t, int interval_ms) {
  if (!t) return;
  // setInterval + start, queued στο main thread
  QMetaObject::invokeMethod(t, "setInterval", Qt::QueuedConnection, Q_ARG(int, interval_ms));
  QMetaObject::invokeMethod(t, "start", Qt::QueuedConnection);
}

void DsdAlsaEngine::Pause() {
  if (paused_.load(std::memory_order_acquire)) return;
  paused_.store(true, std::memory_order_release);

  // Σταμάτα τον position timer για να παγώσει ο χρόνος στο UI.
  safe_stop_timer(&pos_timer_);

  // Hardware pause όπου υποστηρίζεται
  hw_pause_supported_ = false;
  if (pcm_) {
    int r = snd_pcm_pause(pcm_, 1);
    if (r == 0 || r == -EALREADY) {
      hw_pause_supported_ = true;
      qLog(Debug) << "DSD: hw pause engaged";
    } else {
      qLog(Debug) << "DSD: hw pause not supported (" << r << "), software pause only";
    }
  }
  // >>> notify UI that we are paused
  state_ = Engine::Paused;
  emit StateChanged(state_);
  // <<<
  // Ξύπνα τον worker αν περιμένει σε write/underrun ώστε να μπει σε wait-loop
  pause_wait_.wakeAll();
}

void DsdAlsaEngine::Unpause() {
  if (!paused_.load(std::memory_order_acquire)) return;

  // Αν είχαμε hw pause, ξεπάγωσέ το πρώτα
  if (pcm_ && hw_pause_supported_) {
    int r = snd_pcm_pause(pcm_, 0);
    if (r != 0) {
      // fallback: επαναπροετοίμασε τη συσκευή και ξεκίνα ξανά
      snd_pcm_prepare(pcm_);
      snd_pcm_start(pcm_);
      qLog(Debug) << "DSD: hw unpause fallback prepare/start";
    }
  }
  
  // >>> notify UI that we are playing again
  state_ = Engine::Playing;
  emit StateChanged(state_);
  // <<<
  paused_.store(false, std::memory_order_release);

  // Ξεκίνα ξανά τον position timer
  safe_start_timer(&pos_timer_, 200);

  // Ξύπνα το worker loop
  pause_wait_.wakeAll();
}


qint64 DsdAlsaEngine::length_nanosec() const {
  return length_nanosec_;
}

qint64 DsdAlsaEngine::position_nanosec() const {
  const unsigned int rate = alsa_rate_;
  if (rate == 0) return 0;
  // 1) frames που έχουμε υποβάλει στο ALSA
  const quint64 submitted = pos_frames_.load(std::memory_order_relaxed);
  // 2) frames που παραμένουν στην ουρά του ALSA (δεν έχουν παιχτεί ακόμα)
  snd_pcm_sframes_t delay_frames = 0;
  if (pcm_) {
    snd_pcm_sframes_t d = 0;
    if (snd_pcm_delay(pcm_, &d) == 0 && d > 0) {
      delay_frames = d;                  // αρνητικό => underrun, αγνόησέ το
    }
  }
  // 3) frames που έχουν ΠΑΙΧΤΕΙ = submitted - delay
  quint64 played = submitted;
  if (delay_frames > 0 && static_cast<quint64>(delay_frames) < played) {
    played -= static_cast<quint64>(delay_frames);
  }
  // 4) προληπτικό clamp στο θεωρητικό max
  if (length_nanosec_ > 0) {
    const long double total_frames_est =
        (static_cast<long double>(length_nanosec_) * static_cast<long double>(rate)) / 1.0e9L;
    if (played > static_cast<quint64>(total_frames_est))
      played = static_cast<quint64>(total_frames_est);
  }

  const long double ns =
      (static_cast<long double>(played) * 1.0e9L) / static_cast<long double>(rate);
  //qLog(Debug) << "pos: submitted=" << submitted
            //<< " delay=" << delay_frames
            //<< " played=" << played
            //<< " ns=" << (qint64)ns;      
  return static_cast<qint64>(ns);  
}

void DsdAlsaEngine::Seek(quint64 offset_nanosec) {
  if (alsa_rate_ == 0 || length_nanosec_ == 0) return;

  // ns -> ALSA frames (dsd_u32: alsa_rate = dsd_rate/32)
  quint64 want = (offset_nanosec * (quint64)alsa_rate_) / 1000000000ULL;
  if (total_alsa_frames_ && want >= total_alsa_frames_) {
    want = total_alsa_frames_ - 1;
  }

  // Ζήτα από τον worker να εφαρμόσει το seek με ασφάλεια (I/O εκεί)
  seek_target_frames_.store(want, std::memory_order_release);

  // Προαιρετικά ενημέρωσε άμεσα το UI (θα διορθωθεί όταν εφαρμοστεί)
  Q_EMIT Seeked((qint64)offset_nanosec / 1000);
  Q_EMIT PositionChanged((qint64)offset_nanosec / 1000);
}


void DsdAlsaEngine::SeekTo(int seconds) {
  if (seconds < 0) seconds = 0;
  Seek(static_cast<quint64>(seconds) * 1000000000ULL);
}

void DsdAlsaEngine::StartPositionTimer() {
  if (!pos_timer_.isActive()) {
    pos_timer_.start(200);  // 200 ms UI tick
  }
}

void DsdAlsaEngine::StopPositionTimer() {
  if (pos_timer_.isActive()) {
    pos_timer_.stop();
  }
}
