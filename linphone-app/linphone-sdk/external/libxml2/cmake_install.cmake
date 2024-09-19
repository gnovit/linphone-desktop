# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/Debug/xml2.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/Release/xml2.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/MinSizeRel/xml2.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/RelWithDebInfo/xml2.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Debug/xml2.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Release/xml2.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/MinSizeRel/xml2.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/RelWithDebInfo/xml2.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libxml2/libxml" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/DOCBparser.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/HTMLparser.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/HTMLtree.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/SAX.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/SAX2.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/c14n.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/catalog.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/chvalid.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/debugXML.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/dict.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/encoding.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/entities.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/globals.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/hash.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/list.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/nanoftp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/nanohttp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/parser.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/parserInternals.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/pattern.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/relaxng.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/schemasInternals.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/schematron.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/threads.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/tree.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/uri.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/valid.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xinclude.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xlink.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlIO.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlautomata.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlerror.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlexports.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlmemory.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlmodule.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlreader.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlregexp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlsave.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlschemas.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlschemastypes.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlstring.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlunicode.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlwin32version.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xmlwriter.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xpath.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xpathInternals.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libxml2/include/libxml/xpointer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libxml2/libxml/xmlversion.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Debug/xml2.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/RelWithDebInfo/xml2.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/XML2/cmake/XML2Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/XML2/cmake/XML2Targets.cmake"
         "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libxml2/CMakeFiles/Export/f96d5dfe668e0efe00c6691973edd4eb/XML2Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/XML2/cmake/XML2Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/XML2/cmake/XML2Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/XML2/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libxml2/CMakeFiles/Export/f96d5dfe668e0efe00c6691973edd4eb/XML2Targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/XML2/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libxml2/CMakeFiles/Export/f96d5dfe668e0efe00c6691973edd4eb/XML2Targets-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/XML2/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libxml2/CMakeFiles/Export/f96d5dfe668e0efe00c6691973edd4eb/XML2Targets-minsizerel.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/XML2/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libxml2/CMakeFiles/Export/f96d5dfe668e0efe00c6691973edd4eb/XML2Targets-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/XML2/cmake" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libxml2/CMakeFiles/Export/f96d5dfe668e0efe00c6691973edd4eb/XML2Targets-release.cmake")
  endif()
endif()

