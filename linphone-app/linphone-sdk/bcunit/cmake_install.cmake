# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bcunit

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/bcunit.pc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/build/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/BCUnit/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/Share/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake" TYPE FILE MESSAGE_LAZY FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/BCUnitConfig.cmake"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/BCUnitConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake/BCUnitTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake/BCUnitTargets.cmake"
         "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/CMakeFiles/Export/4fc0fbf3b77d0787e014ef634438f6bb/BCUnitTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake/BCUnitTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake/BCUnitTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/CMakeFiles/Export/4fc0fbf3b77d0787e014ef634438f6bb/BCUnitTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/CMakeFiles/Export/4fc0fbf3b77d0787e014ef634438f6bb/BCUnitTargets-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/CMakeFiles/Export/4fc0fbf3b77d0787e014ef634438f6bb/BCUnitTargets-minsizerel.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/CMakeFiles/Export/4fc0fbf3b77d0787e014ef634438f6bb/BCUnitTargets-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/BCUnit/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/bcunit/CMakeFiles/Export/4fc0fbf3b77d0787e014ef634438f6bb/BCUnitTargets-release.cmake")
  endif()
endif()

