#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "liblinphone++" for configuration "MinSizeRel"
set_property(TARGET liblinphone++ APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(liblinphone++ PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/liblinphone++.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_MINSIZEREL "bctoolbox;belle-sip;liblinphone"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/liblinphone++.dll"
  )

list(APPEND _cmake_import_check_targets liblinphone++ )
list(APPEND _cmake_import_check_files_for_liblinphone++ "${_IMPORT_PREFIX}/lib/liblinphone++.lib" "${_IMPORT_PREFIX}/bin/liblinphone++.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
