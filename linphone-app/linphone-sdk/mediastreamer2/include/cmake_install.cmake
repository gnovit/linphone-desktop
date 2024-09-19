# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mediastreamer2" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/allfilters.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/android_utils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/bitratecontrol.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/bits_rw.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/box-plot.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/devices.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/dsptools.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/dtls_srtp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/dtmfgen.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/flowcontrol.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/formats.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/ice.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mediastream.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/ms_srtp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msaudiomixer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mschanadapter.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mscodecutils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mscommon.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msconference.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msequalizer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mseventqueue.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msextdisplay.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msanalysedisplay.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msfactory.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msfileplayer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msfilerec.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msfilter.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msgenericplc.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msinterfaces.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msitc.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msjava.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msjpegwriter.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msogl.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msogl_functions.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msqrcodereader.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msmediaplayer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msmediarecorder.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msqueue.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msrtp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mssndcard.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mstee.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msticker.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mstonedetector.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msutils.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msv4l.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msvaddtx.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msvideo.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msvideoout.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msvideopresets.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msvideoqualitycontroller.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msvolume.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mswebcam.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/qualityindicator.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/rfc3984.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/stun.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/upnp_igd.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/x11_helper.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/zrtp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msrtt4103.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msasync.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msudp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/mspcapfileplayer.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msanalysedisplay.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msmire.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/mediastreamer2/msvideorouter.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/mediastreamer2/include/OpenGL")
endif()

