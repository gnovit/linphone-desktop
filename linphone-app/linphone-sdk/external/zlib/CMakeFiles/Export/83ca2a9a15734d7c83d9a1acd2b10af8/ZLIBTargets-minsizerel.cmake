#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "zlib" for configuration "MinSizeRel"
set_property(TARGET zlib APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(zlib PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/zlib.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/zlib1.dll"
  )

list(APPEND _cmake_import_check_targets zlib )
list(APPEND _cmake_import_check_files_for_zlib "${_IMPORT_PREFIX}/lib/zlib.lib" "${_IMPORT_PREFIX}/bin/zlib1.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
