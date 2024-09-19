#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gsm" for configuration "Release"
set_property(TARGET gsm APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gsm PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gsm.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gsm.dll"
  )

list(APPEND _cmake_import_check_targets gsm )
list(APPEND _cmake_import_check_files_for_gsm "${_IMPORT_PREFIX}/lib/gsm.lib" "${_IMPORT_PREFIX}/bin/gsm.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
