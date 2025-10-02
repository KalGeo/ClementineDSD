# Clementine DSD

Clementine DSD is an experimental fork of Clementine focused on **native DSD playback over ALSA** on Linux (Wayland/X11).  
It adds **DSF/DFF** playback and tag editing.

> **Status:** Tested on Ubuntu with an SMSL DAC (native DSD, accepts `DSD_U32_BE`).
> Stereo only. No DST (compressed DFF). Linux/ALSA only.

## Table of contents

- [What’s new](#whats-new)
- [Requirements](#requirements)
- [Build](#build)
- [Selecting the ALSA device](#selecting-the-alsa-device)
  - [Environment variable (one-off/persistent)](#environment-variable-one-offpersistent)
  - [QSettings (persisted)](#qsettings-persisted)
  - [Auto-probe (default)](#auto-probe-default)
  - [Find your card,device IDs](#find-your-carddevice-ids)
- [Usage notes](#usage-notes)
- [Troubleshooting](#troubleshooting)
- [Known limitations](#known-limitations)
- [Roadmap](#roadmap)
- [License](#license)

## What’s new

- Native **DSF / DFF** playback over **ALSA** (`SND_PCM_FORMAT_DSD_U32_BE`)
- tag editing for **DSF / DFF**
- Device selection: **auto-probe**, **env var override**, or **persisted QSettings**

## Requirements

- Linux with ALSA (`alsa-lib`)
- Qt 5 (same family as upstream Clementine)
- A DAC that supports **native DSD_U32_BE**
- DSF/DFF content (uncompressed DFF only)

## Build

Typical local build:

```bash
mkdir -p bin && cd bin
cmake ..
make -j"$(nproc)"
./clementine
```

If your DAC supports native DSD, the app will try to find it automatically on first run (watch logs).

## Selecting the ALSA device

This fork looks for a DSD-capable device in this order:

1. **Environment variable** `CLEMENTINE_DSD_ALSA_DEVICE` (highest priority)  
2. **QSettings** key `DSD/alsa_device`  
3. **Auto-probe** ALSA for a device that supports `DSD_U32_BE` at the mapped rate; on success the choice is saved to QSettings

### Environment variable (one-off/persistent)

One-off launch in the current terminal:
```bash
CLEMENTINE_DSD_ALSA_DEVICE="hw:2,0" ./clementine
```

Or export it for your shell session:
```bash
export CLEMENTINE_DSD_ALSA_DEVICE="hw:2,0"
./clementine
```

From a desktop launcher (`.desktop` file), set:
```
Exec=env CLEMENTINE_DSD_ALSA_DEVICE=hw:2,0 /full/path/to/clementine
```

### QSettings (persisted)

Edit (or create) the Clementine config file (Ubuntu example):

```
~/.config/Clementine/Clementine.conf
```

Add:
```
[DSD]
alsa_device=hw:2,0
```

If the **environment variable** is set, it **overrides** QSettings for that run.

### Auto-probe (default)

If neither the env var nor QSettings are set, the app **auto-probes** ALSA devices and picks the first that works with `DSD_U32_BE` at the correct rate. On success, it saves:

```
[DSD]
alsa_device=hw:X,Y
```

### Find your card,device IDs

List ALSA hardware:
```bash
aplay -l
```

You’ll see something like:
```
card 2: MyDAC [USB DAC], device 0: USB Audio
```

Use `hw:2,0` for that device.

## Usage notes

- **Seek:** supported for DSF/DFF; aligned to DSD boundaries with ALSA reset to avoid artifacts.  
- **Pause/Unpause:** hardware pause via `snd_pcm_pause()` when supported; otherwise software pause. The elapsed timer stops/resumes with the audio.  
- **Position timer:** ~200 ms during playback; paused while paused.

Typical logs on success:
```
DSD ALSA: auto-probe picked hw:2,0
DSD ALSA: selected device = "hw:2,0"
ALSA ready: rate 176400 fmt DSD_U32_BE ch 2 (buffer=..., period=...)
```

Run from a terminal to watch logs while testing.

## Troubleshooting

- **No sound / device busy**  
  Another app may be using the DAC. Close it and try again.  
  You’ll see `snd_pcm_open ... busy, retrying…` while the engine backs off.

- **DSD not detected**  
  Ensure your DAC exposes **native DSD**; some only support DoP or PCM.  
  Verify the device string (`hw:X,Y`) and try the env var to force it.

- **Noise with DFF**  
  The engine handles the typical DFF bit order (bit-reverse when required) and frame alignment.  
  If noise persists, double-check the file integrity and try another DFF sample.

- **Pause works but UI doesn’t toggle**  
  The engine emits `StateChanged(Engine::Paused/Playing)`. Make sure your build includes those emits.

## Known limitations

- Stereo only (2 channels)  
- No DST (compressed DFF) — uncompressed DFF only  
- Native DSD only (no DoP, no PCM fallback)  
- Linux/ALSA only (tested on Ubuntu, Wayland/X11)

## Roadmap

- Optional **DoP** output mode  
- Improved UI prompts for common ALSA errors  
- Packaging (Flatpak/AppImage) after broader hardware testing

## License

This fork follows **GPL-3.0-or-later** (same as Clementine).  
See `LICENSE` for details.
