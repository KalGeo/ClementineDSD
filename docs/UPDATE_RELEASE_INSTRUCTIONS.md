# How to Update GitHub Release with Binary Packages

## 🎯 Current Status

- **Existing Release**: v1.4.1-dsd (https://github.com/KalGeo/ClementineDSD/releases/tag/v1.4.1-dsd)
- **New Optimized Version**: v1.4.1-dsd-optimized
- **Binary Packages Ready**: clementinedsd-v1.4.1-dsd-optimized-linux.tar.gz & .zip

## 📦 Binary Packages to Upload

### Files to Add to Release:
1. **clementinedsd-v1.4.1-dsd-optimized-linux.tar.gz** (13.6 MB)
2. **clementinedsd-v1.4.1-dsd-optimized-linux.zip** (13.6 MB)

### Location: `release/` directory

## 🚀 Steps to Update Release

### Option 1: Update Existing Release
1. Go to https://github.com/KalGeo/ClementineDSD/releases/tag/v1.4.1-dsd
2. Click "Edit" button
3. Upload the two binary files from `release/` directory
4. Update release description with new features
5. Save changes

### Option 2: Create New Release
1. Go to https://github.com/KalGeo/ClementineDSD/releases
2. Click "Create a new release"
3. Choose tag: `v1.4.1-dsd-optimized`
4. Upload binary files
5. Use optimized release description

## 📋 New Release Description

```markdown
# ClementineDSD v1.4.1-dsd-optimized - Optimized DSD Audio Player

## 🎵 Major Improvements

### ⚡ Performance Optimizations
- **Startup time**: Reduced from 10+ seconds to 0.017 seconds
- **Library scan**: Disabled startup scan for faster launch
- **Dock icon**: Appears instantly (no more 15+ second delay)

### 🎛️ Audio Engine Fixes
- **DSD artifacts**: Fixed clicks/ticks during FLAC ↔ DSD transitions
- **ALSA conflicts**: Resolved "Device busy" errors
- **Fade functionality**: Disabled to prevent audio conflicts
- **Smooth transitions**: Optimized DSD ALSA engine

### 🖥️ Desktop Integration
- **Custom icon**: clementinedsd.png appears instantly in dock
- **Desktop file**: Fixed name matching for proper integration
- **Installation**: Automated install.sh script included
- **No duplicates**: Single application entry in menu

## 📥 Downloads

### Binary Packages (Ready to Install)
- **Linux (tar.gz)**: clementinedsd-v1.4.1-dsd-optimized-linux.tar.gz
- **Linux (zip)**: clementinedsd-v1.4.1-dsd-optimized-linux.zip

### Quick Installation
```bash
# Extract archive
tar -xzf clementinedsd-v1.4.1-dsd-optimized-linux.tar.gz
cd clementinedsd-v1.4.1-dsd-optimized

# Install
./install.sh

# Launch
clementinedsd
```

## 🎯 Key Achievement
Discovered and fixed Ubuntu dock timeout issue caused by complex desktop file properties.
Minimal desktop file structure provides instant icon display while maintaining functionality.

## 🎵 Perfect For
- DSD audio enthusiasts wanting pristine .dsf/.dff playback
- Users needing fast startup and instant desktop integration
- Professional audio setups with ALSA hardware control

**Ready for production use with native DSD support!** 🎧✨
```

## 📊 File Sizes
- tar.gz: 13.6 MB
- zip: 13.6 MB
- Executable: 39.4 MB (compressed to ~13.6 MB)

## 🔗 Repository
https://github.com/KalGeo/ClementineDSD
