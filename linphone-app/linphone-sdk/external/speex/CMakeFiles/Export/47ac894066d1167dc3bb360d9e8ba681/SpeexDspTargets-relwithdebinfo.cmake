#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "speexdsp" for configuration "RelWithDebInfo"
set_property(TARGET speexdsp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(speexdsp PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/speexdsp.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/speexdsp.dll"
  )

list(APPEND _cmake_import_check_targets speexdsp )
list(APPEND _cmake_import_check_files_for_speexdsp "${_IMPORT_PREFIX}/lib/speexdsp.lib" "${_IMPORT_PREFIX}/bin/speexdsp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
