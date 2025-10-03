#!/bin/bash
# ClementineDSD Cleanup Script
# Organizes files and removes unnecessary build artifacts

set -e  # Exit on any error

echo "🧹 ClementineDSD Cleanup"
echo "======================="

# Create docs directory if it doesn't exist
if [ ! -d "docs" ]; then
    echo "📁 Creating docs/ directory..."
    mkdir -p docs
fi

# Move documentation files to docs/
echo "📄 Moving documentation files to docs/..."
DOC_FILES=(
    "BINARY_RELEASE_INFO.md"
    "COMPLETE_TRANSFORMATION_SUMMARY.md"
    "DSD_ALSA_DEVICE_FIX.md"
    "DSD_FADE_FIX.md"
    "EXECUTABLE_CHANGES.md"
    "IDENTITY_CHANGES.md"
    "INSTALLATION.md"
    "RELEASE_NOTES_v1.4.1-dsd.md"
    "RELEASE_SUMMARY_v1.4.1-dsd-optimized.md"
    "UPDATE_RELEASE_INSTRUCTIONS.md"
    "VERSION.md"
)

for file in "${DOC_FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "   Moving $file to docs/"
        mv "$file" "docs/"
    fi
done

# Remove build artifacts from root
echo "🔧 Removing build artifacts from root..."
if [ -f "clementinedsd" ]; then
    echo "   Removing clementinedsd executable from root (it's in bin/)"
    rm "clementinedsd"
fi

# Ask about removing release directory
if [ -d "release" ]; then
    echo "📦 Found release/ directory"
    echo "   This contains binary release packages"
    read -p "   Do you want to remove it? (y/N): " -n 1 -r
    echo
    if [[ $REPLY =~ ^[Yy]$ ]]; then
        echo "   Removing release/ directory..."
        rm -rf "release"
    else
        echo "   Keeping release/ directory"
    fi
fi

# Ask about removing temporary scripts
if [ -f "update_release.sh" ]; then
    echo "📋 Found update_release.sh script"
    read -p "   Do you want to remove it? (y/N): " -n 1 -r
    echo
    if [[ $REPLY =~ ^[Yy]$ ]]; then
        echo "   Removing update_release.sh..."
        rm "update_release.sh"
    else
        echo "   Keeping update_release.sh"
    fi
fi

echo ""
echo "✅ Cleanup complete!"
echo ""
echo "📁 Files organized:"
echo "   • Documentation moved to docs/"
echo "   • Build artifacts removed from root"
echo "   • Release files handled as requested"
echo ""
echo "🎵 ClementineDSD root directory is now clean!"
