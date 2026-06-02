Android Clang/LLVM Prebuilts
============================

For the latest version of this doc, please make sure to visit:
[Android Clang/LLVM Prebuilts Readme Doc](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/mirror-goog-main-llvm-toolchain-source/README.md)

> The links in the sections below are outdated in light of
> https://source.android.com/docs/whatsnew/site-updates#aosp-changes
> and will be fixed soon.

LLVM Users
----------

* [**Android Platform**](https://android.googlesource.com/platform/)
  * Currently clang-r584948b
  * clang-r547379 for Android 16 release
  * clang-r522817 for Android V release
  * clang-r487747c for Android U release
  * clang-r450784d for Android T release
  * clang-r416183b1 for Android S release
  * clang-r383902b1 for Android R-QPR2 release
  * clang-r383902b for Android R release
  * clang-r353983c1 for Android Q-QPR2 release
  * clang-r353983c for Android Q release
  * Look for "ClangDefaultVersion" and/or "clang-" in [build/soong/cc/config/global.go](https://android.googlesource.com/platform/build/soong/+/master/cc/config/global.go/).
    * [AOSP Code Search link which can be out of date](https://cs.android.com/android/platform/superproject/+/master:build/soong/cc/config/global.go?q=ClangDefaultVersion)
    * [Internal code search link](https://source.corp.google.com/h/android/platform/superproject/main/+/main:build/soong/cc/config/global.go)

* [**Android Platform LLVM binutils**](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/llvm-binutils-stable/)
  * Currently clang-r584948
  * These are *symlinks* to llvm tools and can be updated by running [update-binutils.py](https://android.googlesource.com/toolchain/llvm_android/+/refs/heads/master/update-binutils.py).

* [**Android Platform clang-stable**](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-stable/)
  * Currently clang-r584948
  * These are *copies* of some clang tools and can be updated by running [update-clang-stable.py](https://android.googlesource.com/toolchain/llvm_android/+/refs/heads/master/update-clang-stable.py).

* [**RenderScript**](https://developer.android.com/guide/topics/renderscript/index.html)
  * Currently clang-3289846
  * Look for "RSClangVersion" and/or "clang-" in [build/soong/cc/config/global.go](https://android.googlesource.com/platform/build/soong/+/master/cc/config/global.go/).
    * [AOSP Code Search link](https://cs.android.com/android/platform/superproject/+/master:build/soong/cc/config/global.go?q=RSClangVersion)

* [**Android Linux Kernel**](http://go/android-systems)
  * Currently clang-r584948b for Android Mainline kernel.
    * Look for "CLANG_VERSION" in [mainline constants](https://android.googlesource.com/kernel/common/+/refs/heads/android-mainline/bazel/constants.scl)
    * Look for "CLANG_VERSION" in [android17-6.18 constants](https://android.googlesource.com/kernel/common/+/refs/heads/android17-6.18/bazel/constants.scl)
    * Look for "CLANG_VERSION" in [android16-6.12 build configs](https://android.googlesource.com/kernel/common/+/refs/heads/android16-6.12/build.config.constants)
    * Look for "CLANG_VERSION" in [android15-6.6 build configs](https://android.googlesource.com/kernel/common/+/refs/heads/android15-6.6/build.config.constants)
  * Internal LLVM developers should look in the partner gerrit for more kernel configurations.

* [**NDK**](https://developer.android.com/ndk)
  * Currently clang-r574158
  * Look for "clang-" in [ndk/toolchains.py](https://source.corp.google.com/h/googleplex-android/platform/superproject/main-ndk/+/main-ndk:ndk/ndk/toolchains.py) in internal code search.

* [**Trusty**](https://source.android.com/security/trusty/)
  * Currently clang-r596125
  * Look for "clang-" in [vendor/google/aosp/scripts/envsetup.sh](https://googleplex-android.git.corp.google.com/trusty/vendor/google/aosp/+/master/scripts/envsetup.sh).

* [**Android Emulator**](https://developer.android.com/studio/run/emulator.html)
  * Currently clang-r530567.
  * "clang_emu_prebuilts" is hardcoded to clang-r487747c.
  * The manifest for this project is pinned.
  * Look for "clang-" in [external/qemu/android/build/toolchains.json](https://googleplex-android.git.corp.google.com/platform/external/qemu/+/refs/heads/emu-main-dev/android/build/toolchains.json).
    * Note that they work out of the emu-main-dev branch.

* [**Context Hub Runtime Environment (CHRE)**](https://android.googlesource.com/platform/system/chre/)
  * Currently clang-r584948
  * Look in [system/chre/build/clang.mk](https://googleplex-android.googlesource.com/platform/system/chre/+/refs/heads/master/build/clang.mk#13).
    * [Internal Code Search link](https://source.corp.google.com/h/googleplex-android/platform/superproject/main/+/main:system/chre/build/clang.mk)

* [**OpenJDK (jdk/build)**](https://android.googlesource.com/toolchain/jdk/build/)
  * Currently clang-r584948 for Linux
  * Darwin is pinned to older versions (clang-r487747c and clang-r522817)
  * Look for "clang-" in [build-jetbrainsruntime-common.sh](https://android.googlesource.com/toolchain/jdk/build/+/refs/heads/master/build-jetbrainsruntime-common.sh)
  * Look for "clang-" in [build-openjdk21-linux.sh](https://android.googlesource.com/toolchain/jdk/build/+/refs/heads/master/build-openjdk21-linux.sh)
  * Look for "clang-" in [build-openjdk25-linux.sh](https://googleplex-android.googlesource.com/toolchain/jdk/build/+/refs/heads/main/build-openjdk25-linux.sh)

* [**Clang Tools**](https://android.googlesource.com/platform/prebuilts/clang-tools/)
  * Currently clang-r584948b
  * Update [development/vndk/tools/header-checker/envsetup.sh](https://googleplex-android.git.corp.google.com/platform/development/+/refs/heads/main/vndk/tools/header-checker/android/envsetup.sh)
  * Check out branch clang-tools and run test: OUT_DIR=out prebuilts/clang-tools/build-prebuilts.sh

* **Android Rust**
  * Toolchain
    * Currently clang-r584948
    * Look for "CLANG_REVISION" in [paths.py](https://source.corp.google.com/h/googleplex-android/platform/superproject/main-rust-toolchain/+/main-rust-toolchain:toolchain/android_rust/src/android_rust/paths.py)
  * Bindgen
    * Currently clang-r584948b
    * Look for "bindgenClangVersion" in [bindgen.go](https://source.corp.google.com/h/googleplex-android/platform/superproject/main/+/main:build/soong/rust/bindgen.go)

* **Stage 1 compiler**
  * Currently clang-r584948b
  * Look for "clang-r" in [toolchain/llvm_android/src/llvm_android/constants.py](https://source.corp.google.com/h/googleplex-android/platform/superproject/main-llvm-toolchain/+/main-llvm-toolchain:toolchain/llvm_android/src/llvm_android/constants.py)
  * Note the chicken & egg paradox of a self hosting bootstrapping compiler; this can only be updated AFTER a new prebuilt is checked in.

* **Android Studio / Android Game Development Extension**
  * Currently clang-r584948
  * Look in [lldb-utils/config/clang.version](https://googleplex-android.git.corp.google.com/platform/external/lldb-utils/+/refs/heads/lldb-master-dev/config/clang.version)

* **libbootloader**
  * Currently clang-r547379
  * Look for "CLANG_VERSION" in [bootable/libbootloader/gbl/integration/aosp_uefi-gbl-mainline/workspace.bzl](https://android.googlesource.com/platform/bootable/libbootloader/+/refs/heads/master/gbl/integration/aosp_uefi-gbl-mainline/workspace.bzl)
    * [Android Code Search link](https://cs.android.com/android/platform/superproject/main/+/main:bootable/libbootloader/gbl/integration/aosp_uefi-gbl-mainline/workspace.bzl)

* **Proprietary Media DRM**
  * Currently clang-r547379
  * Look for clang version in go/android-drm-clang-version.
  * Please contact g/android-drm-team for more information.

* **IDE Query**
  * Currently clang-r584948
  * Update [build/make/tools/ide_query/prober_scripts/ide_query.out](https://source.corp.google.com/h/googleplex-android/platform/superproject/main/+/main:build/make/tools/ide_query/prober_scripts/ide_query.out)
  * On main branch, run this command and upload the new ide_query.out: OUT_DIR=out build/make/tools/ide_query/prober_scripts/regen.sh

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
* [clang-r353983c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r353983c/) - April 2019
* [clang-r353983d](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r353983d/) - June 2019
* [clang-r365631b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/master/clang-r365631b/) - September 2019
* [clang-r365631c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r365631c/) - September 2019
* [clang-r365631c1](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r365631c/) - March 2020
* [clang-r370808](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r370808/) - December 2019
* [clang-r370808b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r370808b/) - January 2020
* [clang-r377782b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r377782b) - February 2020
* [clang-r377782c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r377782c) - March 2020
* [clang-r377782d](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r377782d) - April 2020
* [clang-r383902](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r383902) - May 2020
* [clang-r383902b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r383902b) - June 2020
* [clang-r383902b1](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r383902b1) - October 2020
* [clang-r383902c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r383902c) - June 2020
* [clang-r399163](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r399163) - August 2020
* [clang-r399163b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r399163b) - October 2020
* [clang-r407598](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r407598) - January 2021
* [clang-r407598b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r407598b) - January 2021
* [clang-r412851](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r412851) - February 2021
* [clang-r416183](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r416183) - March 2021
* [clang-r416183b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r416183b) - April 2021
* [clang-r416183c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r416183b) - June 2021
* [clang-r416183b1](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r416183b) - June 2021
* [clang-r428724](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r428724) - August 2021
* [clang-r433403](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r433403) - September 2021
* [clang-r433403b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r433403b) - October 2021
* [clang-r437112](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r437112) - November 2021
* [clang-r437112b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r437112b) - January 2022
* [clang-r445002](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r445002) - February 2022
* [clang-r450784](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r450784) - March 2022
* [clang-r450784b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r450784b) - April 2022
* [clang-r450784c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r450784c) - April 2022
* [clang-r450784d](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r450784d) - April 2022
* [clang-r450784e](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r450784e) - April 2022
* [clang-r458507](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r458507) - July 2022
* [clang-r468909](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r468909) - October 2022
* [clang-r468909b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+log/refs/heads/master/clang-r468909b) - October 2022
* [clang-r475365b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r475365b) - December 2022
* [clang-r487747](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r487747) - March 2023
* [clang-r487747b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r487747b) - April 2023
* [clang-r487747c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r487747c) - May 2023
* [clang-r498229](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r498229) - July 2023
* [clang-r498229b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r498229b) - August 2023
* [clang-r510928](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r510928) - Jan 2024
* [clang-r522817](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r522817) - June 2024
* [clang-r530567](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/master/clang-r530567) - July 2024
* [clang-r536225](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/main/clang-r536225) - November 2024
* [clang-r547379](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/main/clang-r547379) - February 2025
* [clang-r563880](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/mirror-goog-main-llvm-toolchain-source/clang-r563880/) - July 2025
* [clang-r563880c](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/mirror-goog-main-llvm-toolchain-source/clang-r563880c/) - September 2025
* [clang-r574158](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/mirror-goog-main-llvm-toolchain-source/clang-r574158/) - October 2025
* [clang-r584948](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/mirror-goog-main-llvm-toolchain-source/clang-r584948/) - January 2026
* [clang-r584948b](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/mirror-goog-main-llvm-toolchain-source/clang-r584948b/) - May 2026
* [clang-r596125](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/+/refs/heads/mirror-goog-main-llvm-toolchain-source/clang-r596125/) - May 2026



More Information
----------------

We have a public mailing list that you can subscribe to:
[android-llvm@googlegroups.com](https://groups.google.com/forum/#!forum/android-llvm)

See also our [release notes](RELEASE_NOTES.md).
