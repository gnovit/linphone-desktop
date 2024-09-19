#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mediastreamer2" for configuration "Release"
set_property(TARGET mediastreamer2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mediastreamer2 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/mediastreamer2.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "turbojpeg;yuv;gsm;bzrtp;libSRTP::srtp2;Opus::opus;speex;speexdsp;bv16"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/mediastreamer2.dll"
  )

list(APPEND _cmake_import_check_targets mediastreamer2 )
list(APPEND _cmake_import_check_files_for_mediastreamer2 "${_IMPORT_PREFIX}/lib/mediastreamer2.lib" "${_IMPORT_PREFIX}/bin/mediastreamer2.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
