#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "belcard" for configuration "MinSizeRel"
set_property(TARGET belcard APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(belcard PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/belcard.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_MINSIZEREL "bctoolbox"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/belcard.dll"
  )

list(APPEND _cmake_import_check_targets belcard )
list(APPEND _cmake_import_check_files_for_belcard "${_IMPORT_PREFIX}/lib/belcard.lib" "${_IMPORT_PREFIX}/bin/belcard.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
