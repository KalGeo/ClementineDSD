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

# Copy executable to root for convenience
cp bin/clementinedsd .
echo "📋 Copied executable to root directory"

# Show version
echo "📋 Version: $(bin/clementinedsd --version | head -n 1)"
