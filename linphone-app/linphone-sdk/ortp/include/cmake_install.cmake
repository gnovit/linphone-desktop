# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ortp" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/event.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/logging.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/nack.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/ortp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/payloadtype.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/port.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/rtcp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/rtp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/rtpprofile.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/rtpsession.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/rtpsignaltable.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/sessionset.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/str_utils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/telephonyevents.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/ortp/include/ortp/utils.h"
    )
endif()

