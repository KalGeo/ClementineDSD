#!/bin/bash
# CletineDSD Installation Script
# Installs ClementineDSD desktop integration

set -e  # Exit on any error

echo "🎵 ClementineDSD Desktop Installation"
echo "====================================="

# Check if we're in the right directory
if [ ! -f "clementinedsd" ] || [ ! -f "ClementineDSD.desktop" ] || [ ! -f "clementinedsd.png" ]; then
    echo "❌ Error: ClementineDSD files not found!"
    echo "   Make sure you're running this script from the ClementineDSD directory"
    echo "   Required files: clementinedsd, ClementineDSD.desktop, clementinedsd.png"
    exit 1
fi

# Check if running as root (for system-wide installation)
if [ "$EUID" -eq 0 ]; then
    INSTALL_MODE="system"
    PREFIX="/usr/local"
    ICON_DIR="$PREFIX/share/pixmaps"
    DESKTOP_DIR="/usr/share/applications"
    BIN_DIR="$PREFIX/bin"
else
    INSTALL_MODE="user"
    PREFIX="$HOME/.local"
    ICON_DIR="$PREFIX/share/pixmaps"
    DESKTOP_DIR="$HOME/.local/share/applications"
    BIN_DIR="$PREFIX/bin"
fi

echo "📁 Installation mode: $INSTALL_MODE"
echo "📍 Installing to: $PREFIX"

# Create directories if they don't exist
echo "🔧 Creating directories..."
mkdir -p "$ICON_DIR"
mkdir -p "$DESKTOP_DIR"
mkdir -p "$BIN_DIR"

# Copy executable
echo "📦 Installing clementinedsd binary..."
CURRENT_DIR="$(pwd)"
BINARY_PATH="$CURRENT_DIR/clementinedsd"
INSTALL_PATH="$BIN_DIR/clementinedsd"

cp "$BINARY_PATH" "$INSTALL_PATH"
chmod +x "$INSTALL_PATH"

# Copy icon
echo "🎨 Installing icon..."
cp "clementinedsd.png" "$ICON_DIR/"

# Update desktop file with correct paths
echo "🚀 Installing desktop integration..."
sed "s|Exec=clementinedsd|Exec=$INSTALL_PATH|g; s|Icon=clementinedsd|Icon=$ICON_DIR/clementinedsd.png|g" \
    ClementineDSD.desktop > "$DESKTOP_DIR/ClementineDSD.desktop"

# Make desktop file executable
chmod +x "$DESKTOP_DIR/ClementineDSD.desktop"

# Update desktop database
if command -v update-desktop-database >/dev/null 2>&1; then
    echo "🔄 Updating desktop database..."
    update-desktop-database "$DESKTOP_DIR" 2>/dev/null || true
fi

# Update icon cache
if command -v update-icon-caches >/dev/null 2>&1; then
    echo "📸 Updating icon cache..."
    update-icon-caches "$ICON_DIR" 2>/dev/null || true
elif command -v gtk-update-icon-cache >/dev/null 2>&1; then
    echo "📸 Updating icon cache..."
    gtk-update-icon-cache -f "$ICON_DIR" 2>/dev/null || true
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
echo "   • Desktop file: $DESKTOP_DIR/ClementineDSD.desktop"
echo "   • Icon: $ICON_DIR/clementinedsd.png"
echo ""
if [ "$INSTALL_MODE" = "system" ]; then
    echo "🔧 System-wide installation complete!"
else
    echo "👤 User installation complete!"
fi
echo ""
echo "🎧 Enjoy your DSD audio playback with ClementineDSD!"
