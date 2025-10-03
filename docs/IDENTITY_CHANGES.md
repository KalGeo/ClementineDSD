# ClementineDSD Application Identity Changes

## Overview

This document summarizes all the changes made to distinguish ClementineDSD from upstream Clementine in system identification and user interface.

## Changes Made

### 1. Application Core Settings (`src/main.cpp`)

```cpp
// Changed application identity
QCoreApplication::setApplicationName("ClementineDSD");
QCoreApplication::setOrganizationName("ClementineDSD"); 
QCoreApplication::setOrganizationDomain("clementine-dsd.github.io");
QGuiApplication::setDesktopFileName("org.clementine_player.ClementineDSD");

// Updated log messages
qLog(Info) << "ClementineDSD-qt5" << CLEMENTINE_VERSION_DISPLAY;
qLog(Info) << "ClementineDSD is already running - activating existing window";
```

### 2. Application Object (`src/core/application.cpp`)

```cpp
// Changed application object name
setObjectName("ClementineDSD Application");
```

### 3. Version/Help Text (`src/core/commandlineoptions.cpp`)

```cpp
// Updated version text and help
const char* CommandlineOptions::kVersionText = "ClementineDSD %1";
const char* CommandlineOptions::kHelpText = "%1: ClementineDSD [%2] [%3]\n";
```

### 4. Version Configuration (`src/version.h.in>`)

```cpp
// Added application name constant
#define CLEMENTINE_APPLICATION_NAME "ClementineDSD"
```

### 5. Desktop File (`dist/org.clementine_player.ClementineDSD.desktop`)

- **Renamed**: `org.clementine_player.Clementine.dekstop` → `org.clementine_player.ClementineDSD.desktop`
- **Updated Name**: "Clementine" → "ClementineDSD"
- **Updated Description**: "Clementine Music Player" → "ClementineDSD Music Player (with DSD support)"
- **Updated Comment**: Added "with native DSD support"
- **Updated Icon**: `org.clementine_player.Clementine` → `org.clementine_player.ClementineDSD`
- **Updated MimeTypes**: Added `audio/x-dsf` and `audio/x-dff` for DSD file support

### 6. Version Strategy (`cmake/Version.cmake`)

```cmake
# Updated version to identify DSD variant
set(CLEMENTINE_VERSION_MAJOR 1)
set(CLEMENTINE_VERSION_MINOR 4) 
set(CLEMENTINE_VERSION_PATCH 1)
set(CLEMENTINE_VERSION_PRERELEASE dsd)

# Disabled git revision for clean version display
set(INCLUDE_GIT_REVISION OFF)
```

## Results

### Command Line Interface
```bash
$ ./clementinedsd --version
ClementineDSD 1.4.1 dsd

$ ./clementinedsd --help
Usage: ClementineDSD [options] [URL(s)]
```

### System Integration
- **Config Directory**: `~/.config/ClementineDSD/`
- **Organization**: "ClementineDSD"
- **Desktop File**: `org.clementine_player.ClementineDSD`
- **About Dialog**: Shows "ClementineDSD 1.4.1 dsd"

### Benefits

1. **Clear Differentiation**: Users immediately know this is the DSD variant
2. **No Conflicts**: Separate config directory from upstream Clementine
3. **Proper System Identification**: OS recognizes it as distinct application
4. **Professional Branding**: Maintains Clementine identity while adding DSD suffix

## Files Modified

- `src/main.cpp` - Core application identity
- `src/core/application.cpp` - Application object name
- `src/core/commandlineoptions.cpp` - Command line text
- `src/CMakeLists.txt` - Executable name change
- `src/version.h.in` - Version constants
- `cmake/Version.cmake` - Version configuration
- `dist/org.clementine_player.ClementineDSD.desktop` - Desktop integration

## Migration Notes

- **Existing Clementine Users**: Can install ClementineDSD alongside regular Clementine
- **Config Migration**: Manual migration needed from `~/.config/Clementine/` to `~/.config/ClementineDSD/`
- **Package Conflicts**: None expected due to distinct application identity

## Testing Verification

All identity changes have been verified:

✅ Application name shows as "ClementineDSD"  
✅ Version shows as "1.4.1 dsd"  
✅ Help text uses "ClementineDSD"  
✅ Desktop file properly renamed and updated  
✅ System integration complete  

The application now correctly identifies itself as ClementineDSD throughout the entire system stack.
