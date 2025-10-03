# ClementineDSD Version Strategy

## Overview

ClementineDSD is a specialized fork of Clementine with native DSD audio support. This document explains how we differentiate our version numbering from the upstream Clementine project.

## Current Version

**ClementineDSD 1.4.1 dsd**

## Version Strategy Explanation

### Why Change Version Numbers?

When you initially forked Clementine, it showed version "1.4.1-60-g42185eef5" because:
- You diverged from the upstream Clementine after commit 55 (`1.4.1-55-g03726250a`)
- Your local commits added +5 to the counter
- The git hash `42185eef5` represents your first DSD commit

However, this versioning scheme doesn't clearly indicate this is a DSD-focused fork.

### Our Approach: Semantic Version Surname

We adopted a **semantic version surname** strategy:

1. **Base Version**: Keep `1.4.1` (indicates compatibility with upstream achievements)
2. **Prerelease Label**: Use `dsd` instead of git revisions
3. **Clean Display**: Shows as "ClementineDSD 1.4.1 dsd" in the About dialog
4. **No Git Revision**: Disabled `INCLUDE_GIT_REVISION` for cleaner version numbers

### Benefits

- **Clear Identity**: Users immediately know this is the DSD version
- **Semantic Clarity**: Version numbers indicate purpose, not just chronology  
- **Future Flexibility**: Can evolve to `1.4.1 dsd-beta`, `1.4.1 dsd-rc1`, etc.
- **Package Distinction**: Different OS packages won't conflict with upstream Clementine

### Technical Implementation

```cmake
# From cmake/Version.cmake
set(CLEMENTINE_VERSION_MAJOR 1)
set(CLEMENTINE_VERSION_MINOR 4) 
set(CLEMENTINE_VERSION_PATCH 1)
set(CLEMENTINE_VERSION_PRERELEASE dsd)

# Disabled git revision inclusion for clean version
set(INCLUDE_GIT_REVISION OFF)
```

This generates:
- **Display Version**: "1.4.1 dsd"
- **Deb Package**: "1.4.1~dsd" 
- **RPM Package**: Version "1.4.1", Release "0.dsd"

### Future Versioning

For future releases, consider this pattern:

| Release Type | Version Pattern | Example | Meaning |
|--------------|------------------|---------|---------|
| Stable DSD   | `major.minor.patch-dsd` | `1.4.2-dsd` | Stable release with DSD features |
| Beta/RC      | `major.minor.patch-dsd-beta` | `1.4.2-dsd-beta` | Beta/Release Candidate |
| Hotfix       | `major.minor.patch-dsd-hotfix` | `1.4.1-dsd-hotfix1` | Bug fixes only |

### Comparison with Upstream

| Project | Version Format | Example | Purpose |
|---------|----------------|---------|---------|
| **Clementine** | `tag-commitcount-hash` | `1.4.1-60-g42185eef5` | Development tracking |
| **ClementineDSD** | `major.minor.patch-prerelease` | `1.4.1 dsd` | Feature-specific fork |

This strategy allows ClementineDSD to:
- Clearly differentiate from upstream Clementine
- Maintain semantic meaning in version números
- Support clean package management
- Enable future branching strategies

## Verification

You can verify the current version with:
```bash
./clementinedsd --version
# Output: ClementineDSD 1.4.1 dsd
```

Or check in the About dialog within the application.
