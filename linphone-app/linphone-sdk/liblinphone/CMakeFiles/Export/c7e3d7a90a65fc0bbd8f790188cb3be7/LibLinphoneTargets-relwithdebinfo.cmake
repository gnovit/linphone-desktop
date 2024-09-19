#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "liblinphone" for configuration "RelWithDebInfo"
set_property(TARGET liblinphone APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(liblinphone PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/liblinphone.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "bctoolbox;belr;xerces-c;bzrtp;zlib;SOCI::soci_sqlite3;SOCI::soci_core;belcard;ldap;lber"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/liblinphone.dll"
  )

list(APPEND _cmake_import_check_targets liblinphone )
list(APPEND _cmake_import_check_files_for_liblinphone "${_IMPORT_PREFIX}/lib/liblinphone.lib" "${_IMPORT_PREFIX}/bin/liblinphone.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
