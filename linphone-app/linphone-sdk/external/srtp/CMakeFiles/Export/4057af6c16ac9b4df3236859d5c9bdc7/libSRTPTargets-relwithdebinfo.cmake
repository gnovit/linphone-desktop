#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "libSRTP::srtp2" for configuration "RelWithDebInfo"
set_property(TARGET libSRTP::srtp2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(libSRTP::srtp2 PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/srtp2.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/srtp2.dll"
  )

list(APPEND _cmake_import_check_targets libSRTP::srtp2 )
list(APPEND _cmake_import_check_files_for_libSRTP::srtp2 "${_IMPORT_PREFIX}/lib/srtp2.lib" "${_IMPORT_PREFIX}/bin/srtp2.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
