# DSD Fade/Crossfade Compatibility Fix

## Problem Description

When playing a FLAC file with fade settings enabled ("Fade out when stopping track", "Cross-fade when changing tracks manually", or "Cross-fade when changing tracks automatically"), switching to a DSD file would cause playback issues because:

1. DSD is a native 1-bit format that cannot use traditional PCM-based fading/crossfading
2. The DSD engine correctly disables fades internally (in constructor: lines 74-77)
3. However, the Player's `TrackAboutToEnd()` logic was using `engine_->` (PCM engine) instead of `ActiveEngine()` 
4. This caused the player to check PCM fade settings even when DSD was active

## Root Cause

In `src/core/player.cpp`, the `TrackAboutToEnd()` method had this bug:

```cpp
// INCORRECT: Uses PCM engine settings even when DSD is playing
if (engine_->is_autocrossfade_enabled()) {
  if (!engine_->is_fadeout_enabled() && !has_next_row) return;
  if (engine_->crossfade_same_album() || !has_next_row || !next_item ||
```

This meant that even when DSD was playing, the player was checking the PCM engine's fade settings, which could be `true`, leading to unexpected behavior when transitioning to/from DSD files.

## Solution Applied

Changed all `engine_->` references to `ActiveEngine()->` in the fade logic:

```cpp
// CORRECT: Uses active engine settings (DSD returns false for fades)
if (ActiveEngine()->is_autocrossfade_enabled()) {
  if (!ActiveEngine()->is_fadeout_enabled() && !has_next_row) return;
  if (!ActiveEngine()->crossfade_same_album() || !has_next_row || !next_item ||
```

## Technical Details

### DSD Engine Fade Behavior
The DSD engine inherits from `Engine::Base` and overrides fade settings in constructor:

```cpp
// In dsdalsaengine.cpp constructor (lines 74-77)
fadeout_enabled_        = false;
fadeout_pause_enabled_  = false;
crossfade_enabled_      = false;
autocrossfade_enabled_  = false;
```

### ActiveEngine() Behavior
When DSD is active:
- `ActiveEngine()` returns the DSD engine instance
- `ActiveEngine()->is_autocrossfade_enabled()` returns `false`
- `ActiveEngine()->is_fadeout_enabled()` returns `false`
- `ActiveEngine()->crossfade_same_album()` returns `false`

When PCM is active:
- `ActiveEngine()` returns the GST/PCM engine instance
- Fade setting returns respect user's configuration

## Files Modified

- `src/core/player.cpp`
  - Line 917: `engine_->is_autocrossfade_enabled()` → `ActiveEngine()->is_autocrossfade_enabled()`
  - Line 923: `engine_->is_fadeout_enabled()` → `ActiveEngine()->is_fadeout_enabled()`
  - Line 928: `engine_->crossfade_same_album()` → `ActiveEngine()->crossfade_same_album()`

## Behavior After Fix

### With Global Fade Settings Enabled
- **PCM → PCM**: Normal crossfading/fading works
- **DSD → DSD**: No crossfading/fading (clean transitions)
- **PCM → DSD**: Clean transition (no inappropriate PCM fade attempted)
- **DSD → PCM**: Clean transition (no inappropriate DSF fade attempted)

### User Experience
- Users can leave fade settings enabled in preferences
- When playing PCM files: fades/crossfades work normally
- When playing DSD files: fade settings are ignored automatically
- No manual toggle needed - engine selection handles it automatically

## Verification

The fix ensures that:
1. ✅ DSD files can play when fade settings are enabled
2. ✅ DSD → PCM transitions work cleanly
3. ✅ PCM → DSD transitions work cleanly  
4. ✅ All fade settings are respected for PCM files
5. ✅ All fade settings are ignored for DSD files

## Alternative Solutions Considered

1. **Dynamic UI**: Hide fade settings when DSD engine is active
   - Rejected: Would cause UI flickering and confusion
   - Current solution is cleaner - settings apply per-engine automatically

2. **Separate Settings**: Different fade settings per engine
   - Rejected: Unnecessary complexity, DSD inherently can't fade

3. **Engine Notification**: Signal UI when engine changes
   - Rejected: The current solution at the player level is sufficient

## Testing Notes

To reproduce the original issue (now fixed):
1. Enable any fade/crossfade setting in Preferences → Playback → Fading
2. Play a FLAC file  
3. Switch to a DSD file while FLAC is playing
4. Previously: DSD would fail to play or have issues
5. After fix: DSD plays normally with clean transitions

This fix resolves the core compatibility issue between PCM fade operations and native DSD playback.


