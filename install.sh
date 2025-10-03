#!/bin/bash
# ClementineDSD Installation Script
# Installs ClementineDSD desktop integration (user-local, no sudo required)

set -e  # Exit on any error

echo "🎵 ClementineDSD Desktop Installation"
echo "====================================="

# Check if we're in the right directory
if [ ! -f "bin/clementinedsd" ] || [ ! -f "bin/clementine-tagreader" ] || [ ! -f "ClementineDSD.desktop" ] || [ ! -f "clementinedsd.png" ]; then
    echo "❌ Error: ClementineDSD files not found!"
    echo "   Make sure you're running this script from the ClementineDSD directory"
    echo "   Required files: bin/clementinedsd, bin/clementine-tagreader, ClementineDSD.desktop, clementinedsd.png"
    exit 1
fi

# Use user-local installation (no sudo required)
INSTALL_MODE="user-local"
PREFIX="$HOME/.local"
ICON_DIR="$PREFIX/share/pixmaps"
DESKTOP_DIR="$HOME/.local/share/applications"
BIN_DIR="$PREFIX/bin"

echo "📁 Installation mode: $INSTALL_MODE (user-local, no sudo required)"
echo "📍 Installing to: $PREFIX"

# Create directories if they don't exist
echo "🔧 Creating directories..."
mkdir -p "$ICON_DIR"
mkdir -p "$DESKTOP_DIR"
mkdir -p "$BIN_DIR"

# Copy executables
echo "📦 Installing clementinedsd binary..."
CURRENT_DIR="$(pwd)"
BINARY_PATH="$CURRENT_DIR/bin/clementinedsd"
INSTALL_PATH="$BIN_DIR/clementinedsd"

# Check if binary already exists
if [ -f "$INSTALL_PATH" ]; then
    echo "   ⚠️  Binary already exists at $INSTALL_PATH"
    echo "   🔄 Overwriting with new version..."
fi

cp "$BINARY_PATH" "$INSTALL_PATH"
chmod +x "$INSTALL_PATH"
echo "   ✅ clementinedsd binary installed successfully"

# Copy tag reader binary
echo "📦 Installing clementine-tagreader binary..."
TAGREADER_PATH="$CURRENT_DIR/bin/clementine-tagreader"
TAGREADER_INSTALL_PATH="$BIN_DIR/clementine-tagreader"

# Check if tag reader binary already exists
if [ -f "$TAGREADER_INSTALL_PATH" ]; then
    echo "   ⚠️  Tag reader binary already exists at $TAGREADER_INSTALL_PATH"
    echo "   🔄 Overwriting with new version..."
fi

cp "$TAGREADER_PATH" "$TAGREADER_INSTALL_PATH"
chmod +x "$TAGREADER_INSTALL_PATH"
echo "   ✅ clementine-tagreader binary installed successfully"

# Copy icon in multiple sizes for faster loading
echo "🎨 Installing icon (optimized for fast loading)..."
cp "clementinedsd.png" "$ICON_DIR/clementine.png"

# Create icon theme structure for faster dock association
echo "⚡ Creating optimized icon cache..."
mkdir -p "$PREFIX/share/icons/hicolor"/{16x16,24x24,32x32,48x48,64x64,128x128,256x256}/apps
cp "clementinedsd.png" "$PREFIX/share/icons/hicolor/16x16/apps/clementine.png"
cp "clementinedsd.png" "$PREFIX/share/icons/hicolor/24x24/apps/clementine.png"
cp "clementinedsd.png" "$PREFIX/share/icons/hicolor/32x32/apps/clementine.png"
cp "clementinedsd.png" "$PREFIX/share/icons/hicolor/48x48/apps/clementine.png"
cp "clementinedsd.png" "$PREFIX/share/icons/hicolor/64x64/apps/clementine.png"
cp "clementinedsd.png" "$PREFIX/share/icons/hicolor/128x128/apps/clementine.png"
cp "clementinedsd.png" "$PREFIX/share/icons/hicolor/256x256/apps/clementine.png"

# Update desktop file with correct paths
echo "🚀 Installing desktop integration..."
sed "s|Exec=clementinedsd|Exec=$INSTALL_PATH|g; s|Icon=clementine|Icon=$ICON_DIR/clementine.png|g" \
    ClementineDSD.desktop > "$DESKTOP_DIR/org.clementine_player.ClementineDSD.desktop"

# Make desktop file executable
chmod +x "$DESKTOP_DIR/org.clementine_player.ClementineDSD.desktop"

# Update desktop database
if command -v update-desktop-database >/dev/null 2>&1; then
    echo "🔄 Updating desktop database..."
    update-desktop-database "$DESKTOP_DIR" 2>/dev/null || true
fi

# Update icon cache for faster loading
if command -v gtk-update-icon-cache >/dev/null 2>&1; then
    echo "📸 Updating icon cache (optimized)..."
    gtk-update-icon-cache -f "$PREFIX/share/icons/hicolor" 2>/dev/null || true
fi

# Update desktop database for user-local applications
if command -v update-desktop-database >/dev/null 2>&1; then
    echo "🔄 Updating user desktop database..."
    update-desktop-database "$DESKTOP_DIR" 2>/dev/null || true
fi

# Optimize startup settings for faster launch
echo "⚡ Optimizing startup settings..."
if [ -f "$HOME/.config/ClementineDSD/ClementineDSD.conf" ]; then
    echo "   • Disabling startup scan for faster launch"
    sed -i 's/startup_scan=true/startup_scan=false/g' "$HOME/.config/ClementineDSD/ClementineDSD.conf" 2>/dev/null || true
    echo "   • Setting startup behavior to show window immediately"
    sed -i 's/startupbehaviour=1/startupbehaviour=2/g' "$HOME/.config/ClementineDSD/ClementineDSD.conf" 2>/dev/null || true
fi

echo ""
echo "✅ ClementineDSD installed successfully!"
echo ""
echo "🎵 You can now:"
echo "   • Find ClementineDSD in your applications menu"
echo "   • Launch with: clementinedsd"
echo "   • Run $(basename "$INSTALL_PATH") --help for command-line options"
echo ""
echo "📁 Files installed:"
echo "   • Executable: $INSTALL_PATH"
echo "   • Tag reader: $TAGREADER_INSTALL_PATH"
echo "   • Desktop file: $DESKTOP_DIR/org.clementine_player.ClementineDSD.desktop"
echo "   • Icon: $ICON_DIR/clementine.png"
echo ""
echo "🔧 User-local installation complete!"
echo ""
echo "💡 Note: Make sure ~/.local/bin is in your PATH:"
echo "   Add this to your ~/.bashrc or ~/.profile:"
echo "   export PATH=\"\$HOME/.local/bin:\$PATH\""
echo ""
echo "🎧 Enjoy your DSD audio playback with ClementineDSD!"


