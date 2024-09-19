#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "yuv" for configuration "RelWithDebInfo"
set_property(TARGET yuv APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(yuv PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/yuv.dll"
  )

list(APPEND _cmake_import_check_targets yuv )
list(APPEND _cmake_import_check_files_for_yuv "${_IMPORT_PREFIX}/bin/yuv.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
