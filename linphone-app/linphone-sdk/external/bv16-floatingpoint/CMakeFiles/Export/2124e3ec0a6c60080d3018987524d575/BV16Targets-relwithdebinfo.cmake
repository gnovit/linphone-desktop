#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bv16" for configuration "RelWithDebInfo"
set_property(TARGET bv16 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(bv16 PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/bv16.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/bv16.dll"
  )

list(APPEND _cmake_import_check_targets bv16 )
list(APPEND _cmake_import_check_files_for_bv16 "${_IMPORT_PREFIX}/lib/bv16.lib" "${_IMPORT_PREFIX}/bin/bv16.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
