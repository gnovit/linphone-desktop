# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/linphone" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/account_creator_service.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/account_creator.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/buffer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/call_params.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/call_stats.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/call.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/callbacks.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/chat.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/conference.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/contactprovider.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/core_utils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/core.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/defs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/error_info.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/factory.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/flexi-api-client.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/friend.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/friendlist.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/headers.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/im_encryption_engine.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/im_notif_policy.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/info_message.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/logging.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/lpconfig.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/misc.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/player.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/presence.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/proxy_config.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/ringtoneplayer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/sipsetup.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/tunnel.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/types.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/vcard.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/video_definition.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/wrapper_utils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/xmlrpc.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/linphone_proxy_config.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/linphone_tunnel.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/linphonecore_utils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/linphonecore.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/linphonefriend.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/linphonepresence.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/linphone/api" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-account.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-account-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-account-params.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-address.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-audio-device.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-alert-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-alert.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-auth-info.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-api.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-call-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-call-log.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-call-stats.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-call.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-conference.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-conference-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-callbacks.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-chat-message-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-chat-message-reaction.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-chat-message.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-chat-room-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-chat-room.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-chat-room-params.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-content.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-conference-info.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-conference-scheduler.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-dial-plan.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-dictionary.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-event-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-event-log.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-event.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-factory.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-friend-phone-number.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-ldap.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-ldap-params.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-magic-search.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-magic-search-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-participant.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-participant-info.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-participant-device.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-participant-device-cbs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-participant-device-identity.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-participant-imdn-state.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-payload-type.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-push-notification-message.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-push-notification-config.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-recorder.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-recorder-params.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-search-result.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-signal-information.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-digest-authentication-policy.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-types.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-video-source-descriptor.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/api/c-nat-policy.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/linphone/enums" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/c-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/call-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/chat-message-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/chat-room-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/conference-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/participant-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/participant-device-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/encryption-engine-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/event-log-enums.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/enums/security-event-enums.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/linphone/utils" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/algorithm.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/enum-generator.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/enum-mask.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/fs.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/general.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/magic-macros.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/traits.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/include/linphone/utils/utils.h"
    )
endif()

