#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bcmatroska2" for configuration "MinSizeRel"
set_property(TARGET bcmatroska2 APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(bcmatroska2 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "C"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/bcmatroska2.lib"
  )

list(APPEND _cmake_import_check_targets bcmatroska2 )
list(APPEND _cmake_import_check_files_for_bcmatroska2 "${_IMPORT_PREFIX}/lib/bcmatroska2.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
