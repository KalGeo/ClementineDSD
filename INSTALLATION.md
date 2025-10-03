# ClementineDSD Installation Guide

🎵 **Quick Installation for Linux Users**

## 📦 Easy Installation (Recommended)

### Option 1: Automatic Installation Script
```bash
# Download ClementineDSD release files
cd ~/Downloads  # or wherever you downloaded ClementineDSD

# Make installation script executable and run
chmod +x install.sh
./install.sh
```

The script will:
- ✅ Install ClementineDSD to your system
- ✅ Set up desktop integration (Applications menu)
- ✅ Copy the icon to the correct location
- ✅ Update desktop databases automatically

### Option 2: Manual Installation

```bash
# Copy executable to system PATH
sudo cp clementinedsd /usr/local/bin/
sudo chmod +x /usr/local/bin/clementinedsd

# Copy icon
sudo mkdir -p /usr/local/share/pixmaps
sudo cp clementinedsd.png /usr/local/share/pixmaps/

# Copy desktop file (adjust icon path)
sudo cp ClementineDSD.desktop /usr/share/applications/
sudo chmod +x /usr/share/applications/ClementineDSD.desktop

# Update desktop database
sudo update-desktop-database /usr/share/applications/
```

## 🎯 After Installation

### Launch ClementineDSD:
- **Applications Menu**: Find "ClementineDSD" in your applications launcher
- **Command Line**: Type `clementinedsd` in terminal
- **Double-click**: Click the ClementineDSD.desktop file

### First Run Setup:
1. Go to **Preferences → Playback**
2. Verify **"Use ALSA hardware device"** is checked (pre-enabled)
3. Select your **ALSA device** from the dropdown
4. Configure **sample rate** to match your DAC

## 🔧 Troubleshooting

### Desktop Entry Issues:
```bash
# Update desktop database manually
update-desktop-database ~/.local/share/applications/

# Update icon cache
update-icon-caches ~/.local/share/pixmaps/
```

### Missing Dependencies:
```bash
# Ubuntu/Debian
sudo apt install qttools5-dev-tools libqt5widgets5

# Fedora/CentOS
sudo dnf install qt5-qttools-devel qt5-qtbase-gui
```

### ALSA Device Issues:
```bash
# List available audio devices
aplay -l

# Test ClementineDSD version
clementinedsd --version
```

## 🎵 DSD File Associations

After installation, ClementineDSD will handle:
- **DSF files** (`.dsf`) - DSD Standard Format
- **DFF files** (`.dff`) - DSD Interchange Format
- **Regular audio files** (FLAC, MP3, etc.)

## 🔄 Uninstallation

To uninstall ClementineDSD:

```bash
# Remove executable
sudo rm /usr/local/bin/clementinedsd

# Remove desktop file
sudo rm /usr/share/applications/ClementineDSD.desktop

# Remove icon
sudo rm /usr/local/share/pixmaps/clementinedsd.png

# Update databases
sudo update-desktop-database /usr/share/applications/
update-icon-caches /usr/local/share/pixmaps/
```

---

**Enjoy your pristine DSD audio experience with ClementineDSD!** 🎧✨


