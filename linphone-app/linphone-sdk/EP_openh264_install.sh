#!/bin/sh

if [ -n "" ]
then
	export AS=""
fi

export CC="gcc"
export CXX="gcc"
export OBJC="gcc"
export LD=""
export AR=""
export RANLIB="ranlib.exe"
export STRIP=""
export NM=""
export CC_NO_LAUNCHER="gcc"
export CXX_NO_LAUNCHER="gcc"
export OBJC_NO_LAUNCHER="gcc"

export ASFLAGS=""
export CPPFLAGS=""
export CFLAGS=""
export CXXFLAGS=""
export OBJCFLAGS=""
export LDFLAGS=""

export PATH="$PATH:/D/git/vozer/vozer_ninja/linphone-desktop/linphone-app/programs"

cd "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/openh264"
 make -f "../../../..//sdk/external/openh264/Makefile" install-shared V=0 DESTDIR="D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/" PREFIX="" SHAREDLIB_DIR="lib" BUILDTYPE="Release" OS="msvc" ARCH="x86_64"
