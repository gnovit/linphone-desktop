#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "turbojpeg" for configuration "Debug"
set_property(TARGET turbojpeg APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(turbojpeg PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/turbojpeg.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/turbojpeg.dll"
  )

list(APPEND _cmake_import_check_targets turbojpeg )
list(APPEND _cmake_import_check_files_for_turbojpeg "${_IMPORT_PREFIX}/lib/turbojpeg.lib" "${_IMPORT_PREFIX}/bin/turbojpeg.dll" )

# Import target "jpeg" for configuration "Debug"
set_property(TARGET jpeg APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(jpeg PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/jpeg.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/jpeg62.dll"
  )

list(APPEND _cmake_import_check_targets jpeg )
list(APPEND _cmake_import_check_files_for_jpeg "${_IMPORT_PREFIX}/lib/jpeg.lib" "${_IMPORT_PREFIX}/bin/jpeg62.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
