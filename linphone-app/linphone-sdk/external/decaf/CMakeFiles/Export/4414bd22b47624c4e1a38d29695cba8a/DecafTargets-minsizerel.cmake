#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "decaf" for configuration "MinSizeRel"
set_property(TARGET decaf APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(decaf PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/decaf.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/decaf.dll"
  )

list(APPEND _cmake_import_check_targets decaf )
list(APPEND _cmake_import_check_files_for_decaf "${_IMPORT_PREFIX}/lib/decaf.lib" "${_IMPORT_PREFIX}/bin/decaf.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
