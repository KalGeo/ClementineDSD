# ClementineDSD Executable Name Change

## Overview

Successfully changed the main executable name from `clementine` to `clementinedsd` to clearly distinguish this DSD variant from upstream Clementine.

## Changes Made

### 1. CMake Configuration (`src/CMakeLists.txt`)

**Executable Definition:**
```cmake
# Changed from: add_executable(clementine ...)
# Changed to:   add_executable(clementinedsd ...)
add_executable(clementinedsd
  MACOSX_BUNDLE
  ${CLEMENTINE-WIN32-FLAG}
  ${CLEMENTINE-WIN32-RESOURCES}
  main.cpp
)
```

**Target References Updated:**
- All `target_link_libraries(clementine ...)` → `target_link_libraries(clementinedsd ...)`
- All `add_dependencies(clementine ...)` → `add_dependencies(clementinedsd ...)`
- All `set_target_properties(clementine ...)` → `set_target_properties(clementinedsd ...)`
- All `install(TARGETS clementine ...)` → `install(TARGETS clementinedsd ...)`

**Apple-Specific Updates:**
- Bundle paths: `clementine.app` → `clementinedsd.app`
- DMG filename: `clementine-*.dmg` → `clementinedsd-*.dmg`
- Breakpad targets: `clementine-breakpad` → `clementinedsd-breakpad`

### 2. Desktop Integration (`dist/org.clementine_player.ClementineDSD.desktop`)

**Main Executable:**
```desktop
Exec=clementinedsd %U
TryExec=clementinedsd
```

**Desktop Actions:**
```desktop
# Desktop actions updated to use clementinedsd:
Exec=clementinedsd --play-pause
Exec=clementinedsd --stop  
Exec=clementinedsd --stop-after-current
Exec=clementinedsd --previous
Exec=clementinedsd --next
```

## Build Results

### Successful Build Output
```bash
[100%] Linking CXX executable ../clementinedsd
[100%] Built target clementinedsd
```

### Verification
```bash
$ ls -la clementinedsd*
-rwxrwxr-x 1 manolo manolo 39436984 Oct  3 00:42 clementinedsd

$ ./clementinedsd --version
ClementineDSD 1.4.1 dsd

$ ./clementinedsd --help | head -3
Usage: ClementineDSD [options] [URL(s)]

Player options:
```

## Benefits

### 1 as Clear Differentiation
- **Command Line**: `clementinedsd` vs `clementine`
- **Process Names**: System processes show distinct names
- **Package Installation**: Can coexist with upstream Clementine

### 2 System Integration
- **Desktop Launchers**: Independent from upstream Clementine
- **File Associations**: Separate DSD file handling
- **Service Registration**: Unique D-Bus instance identification

### 3 Development Workflow
- **Concurrent Testing**: Run both Clementine and ClementineDSD simultaneously
- **Version Control**: Clear distinction in CI/CD pipelines
- **Distribution**: Separate package naming and installation

## Technical Details

### CMake Target Renaming
- **Target Name**: `clementine` → `clementinedsd`
- **Executable Output**: `/bin/clementinedsd`
- **Bundle Name**: `clementinedsd.app` (macOS)
- **DMG Creation**: `clementinedsd-1.4.1-dsd.dmg`

### Desktop File Integration
- **MIME Types**: Includes `audio/x-dsf` and `audio/x-dff`
- **Actions**: All desktop actions updated for new executable
- **Icon Reference**: Uses `org.clementine_player.ClementineDSD`

### Installation Paths
- **Linux**: `/usr/bin/clementinedsd`
- **macOS**: `clementinedsd.app`
- **Windows**: `clementinedsd.exe`

## Migration Path

### For Users
- **First Launch**: New executable creates new config directory `~/.config/ClementineDSD/`
- **Config Migration**: Manual copy from `~/.config/Clementine/` to `~/.config/ClementineDSD/` if needed
- **Desktop Entry**: Install new desktop file to replace old one

### For Package Maintainers
- **Package Name**: `clementine-dsd` or `clementinedsd`
- **Conflicts**: No conflicts with upstream `clementine` package
- **Provides**: Can provide DSD audio file support

## Verification Checklist

✅ **Executable Builds**: `clementinedsd` builds successfully  
✅ **Version Output**: Shows "ClementineDSD 1.4.1 dsd"  
✅ **Help Text**: Uses "ClementineDSD" in usage information  
✅ **Desktop Integration**: All actions reference clementinedsd  
✅ **Process Identification**: Unique process name in system  
✅ **Config Separation**: Uses distinct configuration directory  

The executable name change completes the ClementineDSD identity transformation, ensuring complete distinction from upstream Clementine at all system levels.


