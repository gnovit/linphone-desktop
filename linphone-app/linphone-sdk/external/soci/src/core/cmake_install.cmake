# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/src/core

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
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Debug/soci_core_4_0.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/RelWithDebInfo/soci_core_4_0.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/soci" TYPE FILE MESSAGE_LAZY FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/backend-loader.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/bind-values.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/blob-exchange.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/blob.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/boost-fusion.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/boost-gregorian-date.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/boost-optional.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/boost-tuple.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/callbacks.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/column-info.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/connection-parameters.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/connection-pool.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/error.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/exchange-traits.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/into-type.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/into.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/logger.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/noreturn.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/once-temp-type.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/prepare-temp-type.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/procedure.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/query_transformation.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/ref-counted-prepare-info.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/ref-counted-statement.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/row-exchange.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/row.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/rowid-exchange.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/rowid.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/rowset.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/session.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/soci-backend.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/soci-platform.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/soci-simple.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/soci.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/statement.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/transaction.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/type-conversion-traits.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/type-conversion.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/type-holder.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/type-ptr.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/type-wrappers.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/unsigned-types.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/use-type.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/use.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/values-exchange.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/values.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/soci/include/soci/version.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/Debug/soci_core_4_0.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/Release/soci_core_4_0.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/MinSizeRel/soci_core_4_0.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/RelWithDebInfo/soci_core_4_0.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Debug/soci_core_4_0.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Release/soci_core_4_0.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/MinSizeRel/soci_core_4_0.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/RelWithDebInfo/soci_core_4_0.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SOCI.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SOCI.cmake"
         "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/soci/src/core/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SOCI.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SOCI-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SOCI.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/soci/src/core/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SOCI.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/soci/src/core/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SOCI-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/soci/src/core/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SOCI-minsizerel.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/soci/src/core/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SOCI-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/soci/src/core/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SOCI-release.cmake")
  endif()
endif()

