# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libvpx"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix/src/vpx-build"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix/tmp"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix/src/vpx-stamp"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix/src"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix/src/vpx-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix/src/vpx-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/vpx-prefix/src/vpx-stamp${cfgdir}") # cfgdir has leading slash
endif()
