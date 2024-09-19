#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mbedcrypto" for configuration "MinSizeRel"
set_property(TARGET mbedcrypto APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(mbedcrypto PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/mbedcrypto.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/mbedcrypto.dll"
  )

list(APPEND _cmake_import_check_targets mbedcrypto )
list(APPEND _cmake_import_check_files_for_mbedcrypto "${_IMPORT_PREFIX}/lib/mbedcrypto.lib" "${_IMPORT_PREFIX}/bin/mbedcrypto.dll" )

# Import target "mbedx509" for configuration "MinSizeRel"
set_property(TARGET mbedx509 APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(mbedx509 PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/mbedx509.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/mbedx509.dll"
  )

list(APPEND _cmake_import_check_targets mbedx509 )
list(APPEND _cmake_import_check_files_for_mbedx509 "${_IMPORT_PREFIX}/lib/mbedx509.lib" "${_IMPORT_PREFIX}/bin/mbedx509.dll" )

# Import target "mbedtls" for configuration "MinSizeRel"
set_property(TARGET mbedtls APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(mbedtls PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/mbedtls.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/mbedtls.dll"
  )

list(APPEND _cmake_import_check_targets mbedtls )
list(APPEND _cmake_import_check_files_for_mbedtls "${_IMPORT_PREFIX}/lib/mbedtls.lib" "${_IMPORT_PREFIX}/bin/mbedtls.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
