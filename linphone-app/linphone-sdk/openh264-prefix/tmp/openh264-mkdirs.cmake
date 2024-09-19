# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/openh264"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix/src/openh264-build"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix/tmp"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix/src/openh264-stamp"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix/src"
  "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix/src/openh264-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix/src/openh264-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/openh264-prefix/src/openh264-stamp${cfgdir}") # cfgdir has leading slash
endif()
