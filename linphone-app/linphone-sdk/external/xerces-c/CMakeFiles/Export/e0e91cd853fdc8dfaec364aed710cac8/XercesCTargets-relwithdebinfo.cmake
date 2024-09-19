#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "xerces-c" for configuration "RelWithDebInfo"
set_property(TARGET xerces-c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(xerces-c PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/xerces-c.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/xerces-c.dll"
  )

list(APPEND _cmake_import_check_targets xerces-c )
list(APPEND _cmake_import_check_files_for_xerces-c "${_IMPORT_PREFIX}/lib/xerces-c.lib" "${_IMPORT_PREFIX}/bin/xerces-c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
