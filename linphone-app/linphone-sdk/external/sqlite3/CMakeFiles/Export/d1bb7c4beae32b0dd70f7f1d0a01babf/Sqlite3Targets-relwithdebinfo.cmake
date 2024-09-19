#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sqlite3" for configuration "RelWithDebInfo"
set_property(TARGET sqlite3 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sqlite3 PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/sqlite3.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/sqlite3.dll"
  )

list(APPEND _cmake_import_check_targets sqlite3 )
list(APPEND _cmake_import_check_files_for_sqlite3 "${_IMPORT_PREFIX}/lib/sqlite3.lib" "${_IMPORT_PREFIX}/bin/sqlite3.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
