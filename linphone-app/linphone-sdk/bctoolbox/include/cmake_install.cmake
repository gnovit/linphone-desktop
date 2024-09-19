# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/bctoolbox" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/charconv.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/compiler.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/defs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/exception.hh"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/utils.hh"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/list.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/logging.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/map.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/ownership.hh"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/parser.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/port.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/regex.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/vconnect.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/vfs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/vfs_standard.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/vfs_encrypted.hh"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/param_string.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/crypto.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/crypto.hh"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/bctoolbox/include/bctoolbox/tester.h"
    )
endif()

