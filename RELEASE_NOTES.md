# Release Notes

## clang-r365631c
### Upstream Cherry-picks
- r366130 [LoopUnroll+LoopUnswitch] do not transform loops containing callbr
- r369761 [llvm-objcopy] Strip debug sections when running with --strip-unneeded.
- r370981 [DebugInfo] Emit DW_TAG_enumeration_type for referenced global enumerator.
- r372047 Fix swig python package path
- r372194 Cache PYTHON_EXECUTABLE for windows
- r372364 Revert "Fix swig python package path"
- r372587 [LLDB] Add a missing specification of linking against dbghelp
- r372835 [lldb] [cmake] Fix installing Python modules on systems using /usr/lib
### Notes
Fixes for:
- asm goto + LTO in Android Linux kernels
- debug info missing for enums
- NDK fixes for:
  - stripping debug sections w/ llvm-objcopy/llvm-strip
  - LLDB
### Created
Sep 26 2019

## Older Releases
Release notes not available.
