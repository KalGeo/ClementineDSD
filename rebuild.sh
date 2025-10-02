#!/bin/bash
# Quick rebuild script for ClementineDSD

echo "🔨 Rebuilding ClementineDSD..."
cd "$(dirname "$0")"

# Use parallel build with all CPUs (target name is now 'clementinedsd' in CMakeLists.txt)
echo "🔧 Building CMake target 'clementinedsd'..."
cmake --build bin --target clementinedsd --parallel $(nproc)

echo "✅ Build complete - executable is now 'clementinedsd'"

echo "✅ ClementineDSD built successfully!"
echo "🔧 Binary: $(pwd)/bin/clementinedsd ($(du -h bin/clementinedsd | cut -f1))"

# Show version
echo "📋 Version: $(timeout 3s bin/clementinedsd --version 2>/dev/null || echo 'Build complete')"
