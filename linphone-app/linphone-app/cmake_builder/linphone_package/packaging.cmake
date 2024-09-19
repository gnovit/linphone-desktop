############################################################################
# packaging.cmake
# Copyright (C) 2017-2018  Belledonne Communications, Grenoble France
#
############################################################################
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
#
############################################################################
set(DO_TGZ OFF)
set(DO_TZ OFF)
set(DO_STGZ OFF)
set(DO_DRAGNDROP )
set(DO_GENERATOR YES)
set(DO_APPIMAGE )


if (NOT "${CMAKE_INSTALL_PREFIX}" MATCHES .*/_CPack_Packages/.*)
  if(DO_TGZ)
    execute_process( COMMAND ${CMAKE_CPACK_COMMAND} -G TGZ RESULT_VARIABLE CPACK_COMMAND_RESULT)
    if(CPACK_COMMAND_RESULT)
      message(FATAL_ERROR "Failed to create TGZ package!")
    endif()
  endif()
  if(DO_TZ)
    execute_process( COMMAND ${CMAKE_CPACK_COMMAND} -G TZ RESULT_VARIABLE CPACK_COMMAND_RESULT)
    if(CPACK_COMMAND_RESULT)
      message(FATAL_ERROR "Failed to create TZ package!")
    endif()
  endif()
  if(DO_STGZ)
    execute_process( COMMAND ${CMAKE_CPACK_COMMAND} -G STGZ RESULT_VARIABLE CPACK_COMMAND_RESULT)
    if(CPACK_COMMAND_RESULT)
      message(FATAL_ERROR "Failed to create STGZ package!")
    endif()
  endif()
  if(DO_DRAGNDROP)
    execute_process( COMMAND ${CMAKE_CPACK_COMMAND} -G DragNDrop RESULT_VARIABLE CPACK_COMMAND_RESULT)
    if(CPACK_COMMAND_RESULT)
      message(FATAL_ERROR "Failed to create DragAndDrop package!")
    endif()
  endif()
  if(DO_GENERATOR)
    execute_process( COMMAND ${CMAKE_CPACK_COMMAND} -G NSIS -C RelWithDebInfo RESULT_VARIABLE CPACK_COMMAND_RESULT)
    if(CPACK_COMMAND_RESULT)
      message(FATAL_ERROR "Failed to create NSIS package!")
    endif()
  endif()
  if(DO_APPIMAGE)
    set(ENV QML_SOURCES_PATHS="WORK/qml_files/ui")
    set(ENV QML_MODULES_PATHS="WORK/qml_files/ui")
    execute_process( COMMAND mkdir -p "WORK/Packages/AppImageDir/" WORKING_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/..")
    execute_process( COMMAND cp -rf "WORK/qml_files/ui" "WORK/Packages/AppImageDir/" WORKING_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/..")
    execute_process( COMMAND "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/cmake_builder/linphone_package/../../tools/create_appimage.sh" vozer vozer-5.2.6-win64 C:/Qt/5.15.2/msvc2019/lib/cmake/Qt5Core/../../..  RESULT_VARIABLE CPACK_COMMAND_RESULT WORKING_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/.." )
    if(CPACK_COMMAND_RESULT)
      message(FATAL_ERROR "Failed to create AppImage package with this command : 'D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/cmake_builder/linphone_package/../../tools/create_appimage.sh vozer C:/Qt/5.15.2/msvc2019/lib/cmake/Qt5Core/../../.. 5.2.6' at D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/..\nMaybe the .appimage already exists and is running. Please remove the file before packaging if it is the case.")
    endif()
  endif()
  if (0)
    if()
        execute_process(
            COMMAND "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/cmake_builder/linphone_package/../../tools/sign_package.bat" 1 "" "" "" "" vozer-5.2.6-win64.exe
            RESULT_VARIABLE SIGNING_RESULT WORKING_DIRECTORY ""
        )
    else()
        execute_process(
            COMMAND "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/cmake_builder/linphone_package/../../tools/sign_package.bat" 2 "" ""  vozer-5.2.6-win64.exe
            RESULT_VARIABLE SIGNING_RESULT WORKING_DIRECTORY ""
        )
    endif()
    if(SIGNING_RESULT)
      message(FATAL_ERROR "Failed to sign the package! ${SIGNING_RESULT} ${RESULT_VARIABLE}")
    endif()
  endif ()
  execute_process( COMMAND mkdir -p "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/Packages/" WORKING_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app")
  execute_process( COMMAND cp -rf vozer-5.2.6-win64.exe "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/Packages/" WORKING_DIRECTORY "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app")
endif ()


