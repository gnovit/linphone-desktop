# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/belcard" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_addressing.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_communication.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_general.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_geographical.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_identification.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_params.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_property.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_security.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_calendar.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_explanatory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_generic.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_organizational.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_parser.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_rfc6474.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/belcard_utils.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/belcard/include/belcard/vcard_grammar.hpp"
    )
endif()

