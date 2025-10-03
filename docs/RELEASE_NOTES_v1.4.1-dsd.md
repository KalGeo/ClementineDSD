# ClementineDSD v1.4.1-dsd Release Notes

🎵 **ClementineDSD** - Professional Audio Player with Native DSD Support

---

## 🌟 What is ClementineDSD?

ClementineDSD is a specialized fork of Clementine optimised for **Direct Stream Digital (DSD)** audio playback. Using direct ALSA hardware access, it provides pristine audio quality for serious audiophiles and DSD enthusiasts.

## ✨ Key Features

### 🎛️ **Native DSD Audio Support**
- Direct playback of `.dsf` and `.dff` files through ALSA
- Hardware-level audio control for maximum quality
- Optimized audio engine architecture specifically for DSD files

### 🔧 **Professional Audio Design**
- ALSA exclusive mode enabled by default
- Direct hardware access bypassing audio servers (PulseAudio/PipeWire)
- Clean audio transitions without processing artifacts

### 🏷️ **ClementineDSD Identity**
- Fully rebranded as "ClementineDSD" throughout the application
- Version identification: "ClementineDSD 1.4.1 dsd"
- Unique desktop integration and file associations

## 🚀 What's New in v1.4.1-dsd

### Audio Engine Improvements
- ✅ **Clean audio architecture** - Optimized for direct hardware playback
- ✅ **ALSA exclusive mode** - Enabled by default for best audio quality
- ✅ **Streamlined preferences** - Focused on hardware-first audio setup
- ✅ **Professional audio focus** - Designed for high-end audio equipment

### Technical Enhancements
- ✅ **Native DSD playback** - Direct ALSA integration for `.dsf`/`.dff` files
- ✅ **CMake target renamed** - From `clementine` to `clementinedsd`
- ✅ **Updated desktop integration** - Proper file associations and branding
- ✅ **Optimized build system** - Streamlined compilation process

## 🎯 Perfect For

- **DSD Audio Enthusiasts** - Native `.dsf` and `.dff` file playback
- **Professional Audio Users** - Direct hardware control and clean audio path
- **High-End Audio Setup** - Optimized for audiophile equipment
- **Linux Audio Professionals** - ALSA-exclusive audio control

## 📥 Download & Installation

### Pre-built Binary
- Download the `clementinedsd` executable from this release
- Make executable: `chmod +x clementinedsd`
- Run: `./clementinedsd`

### Build from Source
```bash
git clone https://github.com/KalGeo/ClementineDSD.git
cd ClementineDSD
cmake -S . -B bin
cmake --build bin --target clementinedsd --parallel $(nproc)
```

## ⚙️ Recommended Setup

For best DSD playback experience:
1. Enable **"Use ALSA hardware device (exclusive, no Pulse/PipeWire)"** (pre-enabled)
2. Select appropriate **ALSA device** for your DAC
3. Set **sample rate** to match your DAC requirements
4. Ensure your **audio equipment supports DSD** over USB/PCIe

## 🎧 System Requirements

- **Linux** with ALSA audio support
- **DSD-capable DAC** (USB Audio Class 2.0 or PCIe audio interface)
- **Qt5** development libraries for building from source
- **DSD audio files** (`.dsf`, `.dff` format)

## 🔄 Migration from Clementine

**Existing users**: Please note that ClementineDSD creates separate settings from upstream Clementine, ensuring no conflicts with your existing configuration.

---

**Enjoy pristine DSD audio playback with ClementineDSD!** 🎵✨

*This release focuses on audio quality and direct hardware control for the ultimate DSD experience.*


