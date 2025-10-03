#!/bin/bash
# ClementineDSD Build Script
# Usage: ./rebuild.sh

set -e  # Exit on any error

echo "🔨 Rebuilding ClementineDSD..."
cd "$(dirname "$0")"

# Check if bin build directory exists
if [ ! -d "bin" ]; then
    echo "❌ Error: bin/ directory not found. Run 'cmake -S . -B bin' first!"
    exit 1
fi

# Use parallel build with all CPUs
echo "🔧 Building CMake target 'clementinedsd' with $(nproc) cores..."
cmake --build bin --target clementinedsd --parallel $(nproc)

if [ ! -f "bin/clementinedsd" ]; then
    echo "❌ Error: Build failed - clementinedsd binary not found!"
    exit 1
fi

echo "✅ ClementineDSD built successfully!"
echo "🔧 Binary: $(pwd)/bin/clementinedsd ($(du -h bin/clementinedsd | cut -f1))"

# Note: Executable is ready in bin/clementinedsd
# Use ./install.sh to install to ~/.local/bin/ for desktop integration
echo "📋 Executable ready in bin/clementinedsd"
echo "💡 Run ./install.sh to install to ~/.local/bin/ for desktop integration"

# Show version
echo "📋 Version: $(bin/clementinedsd --version | head -n 1)"
