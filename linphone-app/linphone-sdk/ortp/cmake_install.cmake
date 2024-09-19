# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/include/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/ortp.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake" TYPE FILE MESSAGE_LAZY FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/OrtpConfig.cmake"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/OrtpConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake/OrtpTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake/OrtpTargets.cmake"
         "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/CMakeFiles/Export/f19395d6a488e51b0d3dff65bc487fdd/OrtpTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake/OrtpTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake/OrtpTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/CMakeFiles/Export/f19395d6a488e51b0d3dff65bc487fdd/OrtpTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/CMakeFiles/Export/f19395d6a488e51b0d3dff65bc487fdd/OrtpTargets-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/CMakeFiles/Export/f19395d6a488e51b0d3dff65bc487fdd/OrtpTargets-minsizerel.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/CMakeFiles/Export/f19395d6a488e51b0d3dff65bc487fdd/OrtpTargets-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Ortp/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/ortp/CMakeFiles/Export/f19395d6a488e51b0d3dff65bc487fdd/OrtpTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/ortp-5.3.0" TYPE FILE MESSAGE_LAZY FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/README.md"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/CHANGELOG.md"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/LICENSE.txt"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/AUTHORS.md"
    )
endif()

