# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/belle-sip" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/auth-helper.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/belle-sdp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/belle-sip.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/bodyhandler.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/defs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/dialog.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/generic-uri.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/headers.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/http-listener.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/http-message.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/http-provider.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/list.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/listener.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/listeningpoint.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/mainloop.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/mdns_register.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/message.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/object.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/object++.hh"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/parameters.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/provider.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/refresher.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/resolver.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/sipstack.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/sip-uri.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/transaction.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/types.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/utils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belle-sip/include/belle-sip/wakelock.h"
    )
endif()

