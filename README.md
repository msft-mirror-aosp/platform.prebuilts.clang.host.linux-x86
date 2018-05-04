Android Clang/LLVM Prebuilts
============================

For the latest version of this doc, please make sure to visit:
[Android Clang/LLVM Prebuilts Readme Doc](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/README.md)

LLVM Users
----------

* [**Android Platform**](https://android.googlesource.com/platform/)
  * Currently clang-r328903
  * clang-4691093 for Android P release
  * Look for "ClangDefaultVersion" and/or "clang-" in [build/soong/cc/config/global.go](https://android.googlesource.com/platform/build/soong/+/master/cc/config/global.go/).
    * [Internal cs/ link](https://cs.corp.google.com/android/build/soong/cc/config/global.go?q=ClangDefaultVersion)

* [**RenderScript**](https://developer.android.com/guide/topics/renderscript/index.html)
  * Currently clang-3289846
  * Look for "RSClangVersion" and/or "clang-" in [build/soong/cc/config/global.go](https://android.googlesource.com/platform/build/soong/+/master/cc/config/global.go/).
    * [Internal cs/ link](https://cs.corp.google.com/android/build/soong/cc/config/global.go?q=RSClangVersion)

* [**Android Linux Kernel**](http://go/android-kernel)
  * Currently clang-4679922
  * Look for "clang-" in [4.14 kernel/hikey-linaro/build.config.clang](https://android.googlesource.com/kernel/hikey-linaro/+/android-hikey-linaro-4.14/build.config.clang).
  * Look for "clang-" in [4.9 kernel/hikey-linaro/build.config.clang](https://android.googlesource.com/kernel/hikey-linaro/+/android-hikey-linaro-4.9/build.config.clang).
  * Look for "clang-" in [4.4 kernel/hikey-linaro/build.config.clang](https://android.googlesource.com/kernel/hikey-linaro/+/android-hikey-linaro-4.4/build.config.clang).
  * Internal LLVM developers should look in the partner gerrit for more kernel configurations.

* [**Trusty**](https://source.android.com/security/trusty/)
  * Currently clang-4639204
  * Look for "clang-" in [vendor/google/aosp/scripts/envsetup.sh](https://android.googlesource.com/trusty/vendor/google/aosp/+/master/scripts/envsetup.sh).
  * Internal-only: Look for "clang-" in [vendor/google/proprietary/scripts/envsetup.sh](https://partner-android.git.corp.google.com/trusty/vendor/google/proprietary/+/master/scripts/envsetup.sh).

* [**Android Emulator**](https://developer.android.com/studio/run/emulator.html)
  * Currently clang-4679922
  * Look for "clang-" in [external/qemu/android/scripts/utils/aosp_dir.shi](https://android.googlesource.com/platform/external/qemu/+/emu-master-dev/android/scripts/utils/aosp_dir.shi).
    * Note that they work out of the emu-master-dev branch.
    * [Internal cs/ link](https://cs.corp.google.com/android/external/qemu/android/scripts/utils/aosp_dir.shi?q=clang-)

* [**Context Hub Runtime Environment (CHRE)**](https://android.googlesource.com/platform/system/chre/)
  * Currently clang-4639204
  * Look in [system/chre/build/arch/x86.mk](https://android.googlesource.com/platform/system/chre/+/master/build/arch/x86.mk#12).

* [**Keymaster (system/keymaster) tests**](https://android.googlesource.com/platform/system/keymaster)
  * Currently clang-4639204
  * Look for "clang-" in system/keymaster/Makefile
    * [Outdated AOSP sources](https://android.googlesource.com/platform/system/keymaster/+/master/Makefile)
    * [Internal sources](https://googleplex-android.googlesource.com/platform/system/keymaster/+/master/Makefile)
    * [Internal cs/ link](https://cs.corp.google.com/android/system/keymaster/Makefile?q=clang-)


Prebuilt Versions
-----------------

* [clang-3289846](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-3289846/) - September 2016
* [clang-4053586](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-4053586/) - May 2017
* [clang-4639204](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-4639204/) - March 2018
* [clang-4679922](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-4679922/) - March 2018
* [clang-4691093](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-4691093/) - March 2018 (respin of 4639204)
* [clang-r328903](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r328903/) - May 2018

More Information
----------------

We have a public mailing list that you can subscribe to:
[android-llvm@googlegroups.com](https://groups.google.com/forum/#!forum/android-llvm)

