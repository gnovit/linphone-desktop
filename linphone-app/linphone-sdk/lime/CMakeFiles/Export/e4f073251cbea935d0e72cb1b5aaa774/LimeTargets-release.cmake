#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lime" for configuration "Release"
set_property(TARGET lime APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(lime PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/lime.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "bctoolbox;SOCI::soci_core;SOCI::soci_sqlite3"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/lime.dll"
  )

list(APPEND _cmake_import_check_targets lime )
list(APPEND _cmake_import_check_files_for_lime "${_IMPORT_PREFIX}/lib/lime.lib" "${_IMPORT_PREFIX}/bin/lime.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
