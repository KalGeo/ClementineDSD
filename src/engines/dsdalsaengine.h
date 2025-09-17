#pragma once
#include "engines/enginebase.h"
#include "engines/playbackrequest.h"

#include <alsa/asoundlib.h>
#include <QFile>
#include <QUrl>

#include <thread>
#include <atomic>
#include <QTimer>
#include <limits>
#include <QMutex>
#include <QWaitCondition>

class Application;

class DsdAlsaEngine : public Engine::Base {
	Q_OBJECT	
public:
  explicit DsdAlsaEngine(Application* app, QObject* parent = nullptr);
  ~DsdAlsaEngine() override;

  // Engine::Base API
  bool Init() override;

  bool Load(const MediaPlaybackRequest& req,
            Engine::TrackChangeFlags change,
            bool force_stop_at_end,
            quint64 beginning_nanosec,
            qint64 end_nanosec) override;

  bool Play(quint64 offset_nanosec) override;
  void Stop(bool stop_after = false) override;
  void Pause() override;
  void Unpause() override;
  //void Seek(quint64) override {}
  void SeekTo(int seconds);   // wrapper for Player::SeekTo(int)
  Engine::State state() const override { return state_; }
  
  qint64 length_nanosec()   const override;
  qint64 position_nanosec() const override;
  void Seek(quint64 offset_nanosec) override;

  // Bit-perfect path: no software volume
  void SetVolumeSW(uint) override {}
  Q_INVOKABLE void StartPositionTimer();
  Q_INVOKABLE void StopPositionTimer();

Q_SIGNALS:
	void PositionChanged(qint64 usec);
	void Seeked(qint64 usec);
  
private:
	// ---- helpers (declared here; implemented in .cpp) ----
	static inline unsigned int MapDsdToAlsaRate(uint64_t dsd_hz);
	static inline uint32_t    Pack32ToBeWord(const uint8_t* src4);

	bool OpenDevice(uint64_t dsd_rate_hz);
	void CloseDevice();

	bool OpenFile(const QUrl& url);
	void CloseFile();

	// Fetches 'frames' frames. Each frame needs 4 bytes per channel (32 DSD bits).
	// Returns the number of frames actually provided and sets L/R pointers into internal blocks.
	size_t FetchDsdFrames(size_t frames, const uint8_t** L, const uint8_t** R);

private:
	Application* app_ = nullptr;
		
	std::atomic<quint64> pos_ns_{0};  // running position (ns)
	quint32 dsd_rate_ = 0;      // 2822400, 5644800, etc.
	quint16 channels_ = 2;
	std::atomic<qint64> file_bytepos_{0}; // current file read position (relative to data_offset_)
	
	unsigned int alsa_rate_ = 0;             // 88200 / 176400 / 352800 ...
	qint64 length_nanosec_ = 0;              // computed at Load()
	quint64 total_frames_ = 0;               // DSD per-channel 1-bit samples (legacy; do not use for ALSA clamps)
	quint64 total_alsa_frames_ = 0;          // PCM-like frames at alsa_rate_ (dsd_rate/32 for DSD_U32)
	QTimer pos_timer_;                       // emits PositionChanged periodically

	// --- Pause state & sync ---
	std::atomic<bool> paused_{false};
	bool hw_pause_supported_ = false;   // αν ο driver δέχεται snd_pcm_pause
	QMutex pause_mutex_;
	QWaitCondition pause_wait_;

	std::atomic<quint64> pos_frames_{0};
	std::atomic<quint64> seek_target_frames_{std::numeric_limits<quint64>::max()};
	
	// ALSA
	snd_pcm_t*   pcm_       = nullptr;

	// Resolved ALSA device (e.g. "hw:0,0")
	QString alsa_device_;

	// Chosen period/buffer (frames) reported by ALSA
	unsigned int period_frames_ = 0;
	unsigned int buffer_frames_ = 0;

	// Device selection / opening
	QString ResolveAlsaDevice(uint64_t dsd_rate_hz);
	bool TryOpenAlsa(const QString& dev, uint64_t dsd_rate_hz);

	// File / stream state
	QFile     file_;
	qint64    data_offset_   = 0;   // byte offset of audio data
	qint64    data_bytes_    = 0;   // remaining bytes of audio data
	uint64_t  dsd_rate_hz_   = 0;   // e.g. 2,822,400 for DSD64
	//int       channels_      = 2;

	// --- position/length tracking for UI ---
	off64_t                 data_start_{0};
	quint64 total_data_bytes_{0};    // immutable total byte size of audio data
	
	// DSF specifics (stereo)
	int        block_size_per_channel_ = 4096;
	QByteArray lblock_, rblock_;
	int        lpos_ = 0, rpos_ = 0;

	// Engine state
	Engine::State state_    = Engine::Empty;

	// Threading
	std::thread        playback_thread_;
	std::atomic<bool>  stop_flag_{false};
	std::atomic<bool>  running_{false};
	std::atomic<bool>  stop_after_request_{false};

	// Worker entry
	void PlaybackLoop();


	bool primed_data_pos_ = false;
	// Set true on natural EOF to suppress a stray 'Stopped' during hand-off.
	bool natural_eof_ = false;
	int  pending_inblock_bytes_ = 0;
	// Buffer για προσωρινή ανάγνωση interleaved DFF (στερεο: L,R,L,R,...)
	QByteArray tmp_interleaved_;
		
};
