# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/aom"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/aom"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/libaom-prefix"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/libaom-prefix/tmp"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/libaom-prefix/src/libaom-stamp"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/libaom-prefix/src"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/libaom-prefix/src/libaom-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/libaom-prefix/src/libaom-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/libaom-prefix/src/libaom-stamp${cfgdir}") # cfgdir has leading slash
endif()
