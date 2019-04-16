Android Clang/LLVM Prebuilts
============================

For the latest version of this doc, please make sure to visit:
[Android Clang/LLVM Prebuilts Readme Doc](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/README.md)

LLVM Users
----------

* [**Android Platform**](https://android.googlesource.com/platform/)
  * Currently clang-r353983b
  * clang-4691093 for Android P release
  * Look for "ClangDefaultVersion" and/or "clang-" in [build/soong/cc/config/global.go](https://android.googlesource.com/platform/build/soong/+/master/cc/config/global.go/).
    * [Internal cs/ link](https://cs.corp.google.com/android/build/soong/cc/config/global.go?q=ClangDefaultVersion)

* [**RenderScript**](https://developer.android.com/guide/topics/renderscript/index.html)
  * Currently clang-3289846
  * Look for "RSClangVersion" and/or "clang-" in [build/soong/cc/config/global.go](https://android.googlesource.com/platform/build/soong/+/master/cc/config/global.go/).
    * [Internal cs/ link](https://cs.corp.google.com/android/build/soong/cc/config/global.go?q=RSClangVersion)

* [**Android Linux Kernel**](http://go/android-kernel)
  * Currently clang-r349610
  * Look for "clang-" in [4.19 build configs](https://android.googlesource.com/kernel/common/+/android-4.19/build.config.cuttlefish.aarch64).
  * Look for "clang-" in [4.14 build configs](https://android.googlesource.com/kernel/common/+/android-4.14/build.config.cuttlefish.aarch64).
  * Look for "clang-" in [4.9 build configs](https://android.googlesource.com/kernel/common/+/android-4.9/build.config.cuttlefish.aarch64).
  * Internal LLVM developers should look in the partner gerrit for more kernel configurations.

* [**Trusty**](https://source.android.com/security/trusty/)
  * Currently clang-r353983b
  * Look for "clang-" in [vendor/google/aosp/scripts/envsetup.sh](https://android.googlesource.com/trusty/vendor/google/aosp/+/master/scripts/envsetup.sh).

* [**Android Emulator**](https://developer.android.com/studio/run/emulator.html)
  * Currently clang-r353983b
  * Look for "clang-" in [external/qemu/android/build/cmake/toolchain.cmake](https://android.googlesource.com/platform/external/qemu/+/emu-master-dev/android/build/cmake/toolchain.cmake#25).
    * Note that they work out of the emu-master-dev branch.
    * [Internal cs/ link](https://cs.corp.google.com/android/external/qemu/android/build/cmake/toolchain.cmake?q=clang-)

* [**Context Hub Runtime Environment (CHRE)**](https://android.googlesource.com/platform/system/chre/)
  * Currently clang-r339409b
  * Look in [system/chre/build/arch/x86.mk](https://android.googlesource.com/platform/system/chre/+/master/build/arch/x86.mk#12).

* [**Keymaster (system/keymaster) tests**](https://android.googlesource.com/platform/system/keymaster)
  * Currently clang-r339409b
  * Look for "clang-" in system/keymaster/Makefile
    * [Outdated AOSP sources](https://android.googlesource.com/platform/system/keymaster/+/master/Makefile)
    * [Internal sources](https://googleplex-android.googlesource.com/platform/system/keymaster/+/master/Makefile)
    * [Internal cs/ link](https://cs.corp.google.com/android/system/keymaster/Makefile?q=clang-)


Prebuilt Versions
-----------------

* [clang-3289846](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-3289846/) - September 2016
* [clang-r328903](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r328903/) - May 2018
* [clang-r339409b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r339409b/) - October 2018
* [clang-r344140b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r344140b/) - November 2018
* [clang-r346389b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r346389b/) - December 2018
* [clang-r346389c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r346389c/) - January 2019
* [clang-r349610](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r349610/) - February 2019
* [clang-r349610b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r349610b/) - February 2019
* [clang-r353983b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r353983b/) - March 2019

More Information
----------------

We have a public mailing list that you can subscribe to:
[android-llvm@googlegroups.com](https://groups.google.com/forum/#!forum/android-llvm)

