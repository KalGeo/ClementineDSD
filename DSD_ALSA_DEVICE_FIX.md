# DSD ALSA Device Busy Fix

## Problem Description

When transitioning from PCM (FLAC) to DSD playback with crossfade/fade settings enabled, the DSD engine would fail with "Device or resource busy" errors. Looking at the logs:

```
01:07:35.897 ERROR GstEnginePipeline:686            "Device 'hw:1,0' is busy"
01:07:44.081 ERROR DsdAlsaEngine:193                snd_pcm_open: Device or resource busy
```

## Root Causes Identified

### 1. **Hardcoded ALSA Device**
The DSD engine was hardcoded to use `"hw:1,0"` instead of reading the configured ALSA device from GStreamer settings:

```cpp
// OLD (problematic):
err = snd_pcm_open(&pcm_, "hw:1,0", SND_PCM_STREAM_PLAYBACK, 0);

// NEW (fixed):
err = snd_pcm_open(&pcm_, alsa_device_.toLocal8Bit().constData(), SND_PCM_STREAM_PLAYBACK, 0);
```

### 2. **Inadequate ALSA Release Timing**
The PCM→DSD transition didn't provide sufficient time for GStreamer's ALSA sink to fully release the device before the DSD engine tried to acquire it.

### 3. **Device Mismatch**
If GStreamer was configured to use a different ALSA device (e.g., "default", "hw:0,0") than the hardcoded "hw:1,0" in DSD engine, conflicts were inevitable.

## Solutions Applied

### 1. Dynamic ALSA Device Configuration
Modified `DsdAlsaEngine` to read the same ALSA device settings as GStreamer:

```cpp
void DsdAlsaEngine::LoadAlsaDeviceSettings() {
    QSettings s;
    s.beginGroup(GstEngine::kSettingsGroup);
    
    bool alsa_exclusive = s.value("alsa_exclusive", false).toBool();
    QString configured_device = s.value("device").toString();
    
    if (alsa_exclusive) {
        alsa_device_ = s.value("alsa_device", configured_device).toString();
        qLog(Info) << "DSD: Using exclusive ALSA device:" << alsa_device_;
    } else {
        // For non-exclusive mode, try to extract ALSA device if using alsasink
        QString sink_type = s.value("sink", "auto").toString();
        if (sink_type == "alsasink" && !configured_device.isEmpty()) {
            alsa_device_ = configured_device;
            qLog(Info) << "DSD: Using ALSA device from alsasink:" << alsa_device_;
        } else {
            // Fallback to default device - should work with most setups
            alsa_device_ = "default";
            qLog(Info) << "DSD: Using default ALSA device:" << alsa_device_;
        }
    }
    
    s.endGroup();
    
    // If somehow empty, use safe fallback
    if (alsa_device_.isEmpty()) {
        alsa_device_ = "default";
        qLog(Warning) << "DSD: No ALSA device configured, using default";
    }
}
```

### 2. Improved ALSA Release Strategy
Upgraded the PCM→DSD transition with a multi-stage ALSA release verification:

```cpp
// OLD (basic):
engine_->Stop(false);
QElapsedTimer t; t.start();
while (t.elapsed() < 3000) {
    QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
    if (engine_->state() == Engine::Empty) break;
    QThread::msleep(20);
}
QThread::msleep(100);

// NEW (comprehensive):
qLog(Debug) << "Player: Stopping GStreamer to release ALSA for DSD";
engine_->Stop(false);

// Stage 1: Wait for GStreamer state change (engine state change)
while (t.elapsed() < 2000 && !gst_stopped) {
    QCoreApplication::processEvents(QEventLoop::AllEvents, 30);
    gst_stopped = (engine_->state() == Engine::Empty);
    if (!gst_stopped) QThread::msleep(15);
}

// Stage 2: Additional settle time for ALSA thread cleanup
QThread::msleep(200);

// Stage 3: Additional processEvents to flush any pending ALSA operations
for (int i = 0; i < 5; ++i) {
    QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
    QThread::msleep(20);
}
```

### 3. Consistent Device Usage
Both engines now use the same ALSA device configuration:
- **GStreamer PCM**: Reads device from settings (`alsa_exclusive`, `alsa_device`, `device`)
- **DSD ALSA**: Reads device from the same settings (`LoadAlsaDeviceSettings()`)

## Device Configuration Logic

| GStreamer Setting | Device Used | Log Message |
|-------------------|-------------|-------------|
| `alsa_exclusive=true` | `alsa_device` value | "DSD: Using exclusive ALSA device: hw:x,y" |
| `sink=alsasink` | `device` value | "DSD: Using ALSA device from alsasink: hw:x,y" |
| Other sinks | `"default"` | "DSD: Using default ALSA device: default" |
| No device configured | `"default"` | "DSD: No ALSA device configured, using default" |

## Files Modified

### `src/engines/dsdalsaengine.cpp`
- **Line 184**: Changed hardcoded `"hw:1,0"` to `alsa_device_.toLocal8Bit().constData()`
- **Line 932**: Changed hardcoded `"hw:1,0"` to `alsa_device_.toLocal8Bit().constData()`  
- **Added**: `LoadAlsaDeviceSettings()` method in constructor
- **Added**: Includes for `QSettings` and `GstEngine`

### `src/engines/dsdalsaengine.h`
- **Added**: `void LoadAlsaDeviceSettings();` declaration

### `src/core/player.cpp`
- **Lines 198-231**: Enhanced ALSA release timing in URL handler path
- **Lines 675-708**: Enhanced ALSA release timing in direct playback path

## Testing Scenarios

### ✅ **Fixed Scenarios**
1. **FLAC → DSD**: When moving from PCM to DSD with fade enabled
2. **DSD → DSD**: Gapless DSD-to-DSD transitions
3. **PCM → PCM**: Normal PCM playback (unaffected)
4. **Mixed Playlists**: Playlists containing both PCM and DSD files

### 🔧 **Device Compatibility**
- **Exclusive ALSA**: Works with `hw:0,0`, `hw:1,0`, custom devices
- **Default ALSA**: Uses `default` device for PulseAudio/ALSA compatibility
- **Auto Sink**: Falls back to `default` device when using system audio

## Expected Log Output (Fixed)

### Successful PCM→DSD Transition:
```
DEBUG Player: Stopping GStreamer to release ALSA for DSD
INFO  DSD: Using exclusive ALSA device: hw:1,0
DEBUG Player: GStreamer engine stopped, waiting for ALSA release
DEBUG Player: ALSA release wait complete, attempting DSD load
DEBUG DSD: DSF rate: 2822400  block_per_ch: 4096  data_bytes: 272261120
DEBUG DSD: snd_pcm_open: success (no retries needed)
```

### Device Selection Logs:
```
INFO  DSD: Using exclusive ALSA device: hw:1,0        # When alsa_exclusive=true
INFO  DSD: Using ALSA device from alsasink: hw:0,0     # When sink=alsasink
INFO  DSD: Using default ALSA device: default          # When using default
```

## Benefits

1. **✅ Eliminates Device Conflicts**: Both engines use the same configured ALSA device
2. **✅ Improved Reliability**: Multi-stage ALSA release reduces timing issues
3. **✅ User Configuration Respect**: DSD honors the same audio device settings as PCM
4. **✅ Fault-Tolerant**: Graceful fallback to `"default"` when configuration is incomplete
5. **✅ Debug-Friendly**: Clear logging shows which device is being used

## Migration Notes

- **Existing Users**: No action required - device is auto-detected from existing settings
- **New Users**: Should configure ALSA device in Preferences → Playback → Audio Output
- **Multiple DACs**: Choose specific hardware device (e.g., `hw:1,0`) for DSD-capable DAC

This fix resolves the core issue where DSD playback would fail due to ALSA device conflicts during PCM→DSD transitions with crossfade settings enabled.


