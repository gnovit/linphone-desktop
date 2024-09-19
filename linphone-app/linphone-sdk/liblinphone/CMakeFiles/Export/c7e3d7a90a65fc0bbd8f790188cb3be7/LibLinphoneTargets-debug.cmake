#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "liblinphone" for configuration "Debug"
set_property(TARGET liblinphone APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(liblinphone PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/liblinphone.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "bctoolbox;belr;xerces-c;bzrtp;zlib;SOCI::soci_sqlite3;SOCI::soci_core;belcard;ldap;lber"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/liblinphone.dll"
  )

list(APPEND _cmake_import_check_targets liblinphone )
list(APPEND _cmake_import_check_files_for_liblinphone "${_IMPORT_PREFIX}/lib/liblinphone.lib" "${_IMPORT_PREFIX}/bin/liblinphone.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
