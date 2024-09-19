#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ldap" for configuration "Release"
set_property(TARGET ldap APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ldap PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ldap.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "mbedtls"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ldap.dll"
  )

list(APPEND _cmake_import_check_targets ldap )
list(APPEND _cmake_import_check_files_for_ldap "${_IMPORT_PREFIX}/lib/ldap.lib" "${_IMPORT_PREFIX}/bin/ldap.dll" )

# Import target "lber" for configuration "Release"
set_property(TARGET lber APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(lber PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/lber.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/lber.dll"
  )

list(APPEND _cmake_import_check_targets lber )
list(APPEND _cmake_import_check_files_for_lber "${_IMPORT_PREFIX}/lib/lber.lib" "${_IMPORT_PREFIX}/bin/lber.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
