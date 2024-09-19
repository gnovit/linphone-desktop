#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "speex" for configuration "MinSizeRel"
set_property(TARGET speex APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(speex PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/speex.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/speex.dll"
  )

list(APPEND _cmake_import_check_targets speex )
list(APPEND _cmake_import_check_files_for_speex "${_IMPORT_PREFIX}/lib/speex.lib" "${_IMPORT_PREFIX}/bin/speex.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
