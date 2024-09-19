# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app

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
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/assets/languages/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/vozer.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/vozer.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/vozer.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/vozer.exe")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Debug/vozer_app.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Release/vozer_app.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/MinSizeRel/vozer_app.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/RelWithDebInfo/vozer_app.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/include")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/build/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/cmake_builder/linphone_package/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-app/winqt/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM MESSAGE_LAZY FILES
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/msvcp140.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/msvcp140_1.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/msvcp140_2.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/msvcp140_atomic_wait.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/msvcp140_codecvt_ids.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/vcruntime140_1.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/vcruntime140.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Redist/MSVC/14.29.30133/x64/Microsoft.VC142.CRT/concrt140.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-console-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-console-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-datetime-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-debug-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-errorhandling-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-fibers-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-file-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-file-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-file-l2-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-handle-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-heap-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-interlocked-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-libraryloader-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-localization-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-memory-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-namedpipe-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-processenvironment-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-processthreads-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-processthreads-l1-1-1.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-profile-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-rtlsupport-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-string-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-synch-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-synch-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-sysinfo-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-timezone-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-core-util-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-conio-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-convert-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-environment-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-filesystem-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-heap-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-locale-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-math-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-multibyte-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-private-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-process-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-runtime-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-stdio-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-string-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-time-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/api-ms-win-crt-utility-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.22000.0/ucrt/DLLs/x64/ucrtbase.dll"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY MESSAGE_LAZY FILES "")
endif()

