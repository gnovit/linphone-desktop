#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "liblinphone++" for configuration "Release"
set_property(TARGET liblinphone++ APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(liblinphone++ PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/liblinphone++.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "bctoolbox;belle-sip;liblinphone"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/liblinphone++.dll"
  )

list(APPEND _cmake_import_check_targets liblinphone++ )
list(APPEND _cmake_import_check_files_for_liblinphone++ "${_IMPORT_PREFIX}/lib/liblinphone++.lib" "${_IMPORT_PREFIX}/bin/liblinphone++.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
