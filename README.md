# ClementineDSD

🎵 **Professional Audio Player with Native DSD Support**

[![GitHub License](https://img.shields.io/badge/license-GPL--3.0--or--later-blue.svg)](https://github.com/KalGeo/ClementineDSD/blob/master/LICENSE)
[![GitHub Release](https://img.shields.io/github/v/release/KalGeo/ClementineDSD)](https://github.com/KalGeo/ClementineDSD/releases/latest)

ClementineDSD is a specialized fork of Clementine optimized for **Direct Stream Digital (DSD)** audio playback through direct ALSA hardware access. It provides pristine audio quality for serious audiophiles and DSD enthusiasts.

## ✨ Features

### 🎛️ **Native DSD Audio Support**
- Direct playback of `.dsf` and `.dff` files via ALSA (`SND_PCM_FORMAT_DSD_U32_BE`)
- Hardware-level audio control for maximum quality
- Optimized audio engine architecture specifically for DSD files

### 🔧 **Professional Audio Design**
- **ALSA exclusive mode** enabled by default
- Direct hardware access bypassing audio servers (PulseAudio/PipeWire)
- Clean audio transitions without processing artifacts
- Automatic device auto-probing for DSD-capable hardware

### 🏷️ **ClementineDSD Identity**
- Fully rebranded as "ClementineDSD" throughout the application
- Version identification: "ClementineDSD 1.4.1 dsd"
- Unique desktop integration and file associations

## 🚀 Quick Start

### Download Pre-built Binary
1. Download the `clementinedsd` executable from [Releases](https://github.com/KalGeo/ClementineDSD/releases/latest)
2. Make executable: `chmod +x clementinedsd`
3. Run: `./clementinedsd`

### Build from Source
```bash
git clone https://github.com/KalGeo/ClementineDSD.git
cd ClementineDSD

# Quick build with included script
./rebuild.sh

# Or manual build
cmake -S . -B bin
cmake --build bin --target clementinedsd --parallel $(nproc)
```

## ⚙️ Setup

For optimal DSD playback:

1. **Enable ALSA Exclusive Mode**: "Use ALSA hardware device (exclusive, no Pulse/PipeWire)" ← *Pre-enabled*
2. **Select ALSA Device**: Choose your DSD-capable DAC from the dropdown
3. **Configure Audio**: Ensure your audio equipment supports DSD over USB/PCIe

### Environment Variables (Optional)
```bash
# Force specific ALSA device
export CLEMENTINE_DSD_ALSA_DEVICE="hw:2,0"
./clementinedsd
```

## 🎧 System Requirements

- **Linux** with ALSA audio support (`alsa-lib`)
- **Qt 5** development libraries (for building from source)
- **DSD-capable DAC** (USB Audio Class 2.0 or PCIe audio interface)
- **DSD audio files** (`.dsf`, `.dff` format - uncompressed DFF only)

## 🎯 Perfect For

- **DSD Audio Enthusiasts** - Native `.dsf` and `.dff` file playback
- **Professional Audio Users** - Direct hardware control and clean audio path
- **High-End Audio Setup** - Optimized for audiophile equipment
- **Linux Audio Professionals** - ALSA-exclusive audio control

## 📋 Usage Notes

- **Seek**: Supported for DSF/DFF with DSD boundary alignment
- **Pause/Unpause**: Hardware pause when supported via ALSA
- **Position Timer**: Accurate playback position tracking
- **Stereo Only**: 2-channel output (no multichannel DSD yet)

## 🔍 Troubleshooting

### Device Detection
```bash
# List available ALSA devices
aplay -l

# Example output:
# card 2: MyDAC [USB DAC], device 0: USB Audio
# Use hw:2,0 for this device
```

### Common Issues
- **No Sound/Device Busy**: Close other audio applications using the DAC
- **DSD Not Detected**: Ensure your DAC supports native DSD (not just DoP)
- **Audio Artifacts**: Verify file integrity and try another DSD sample

## 🔄 Migration from Clementine

ClementineDSD creates separate settings from upstream Clementine, ensuring no conflicts with your existing configuration.

## 📖 Documentation

- **[Release Notes](RELEASE_NOTES_v1.4.1-dsd.md)** - Complete feature overview
- **[Technical Docs](doc/)** - Detailed technical documentation  
- **[Known Limitations](doc/limitations.md)** - Current constraints

## 🤝 Contributing

Contributions are welcome! Please:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly with DSD hardware
5. Submit a pull request

## 📄 License

This project follows **GPL-3.0-or-later** (same as upstream Clementine).

## 🙏 Acknowledgments

- Built on the excellent [Clementine Player](https://github.com/clementine-player/Clementine)
- ALSA integration based on Direct Stream Digital specifications

---

**Enjoy pristine DSD audio playback with ClementineDSD!** 🎵✨

*Optimized for audiophiles who demand the purest possible audio experience.*