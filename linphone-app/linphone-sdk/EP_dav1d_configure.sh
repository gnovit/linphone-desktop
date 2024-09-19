#!/bin/sh

export PATH="$PATH"

cd D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/dav1d

# Setting only prefix is not enough for older versions of Meson, libdir MUST be set to.
meson setup ../../../..//sdk/external/dav1d --buildtype release --prefix "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT" --libdir "lib" -Denable_tools=false -Denable_tests=false --default-library=static
