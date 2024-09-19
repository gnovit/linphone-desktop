#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "EQt5Keychain" for configuration "Release"
set_property(TARGET EQt5Keychain APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EQt5Keychain PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/EQt5Keychain.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/EQt5Keychain.dll"
  )

list(APPEND _cmake_import_check_targets EQt5Keychain )
list(APPEND _cmake_import_check_files_for_EQt5Keychain "${_IMPORT_PREFIX}/lib/EQt5Keychain.lib" "${_IMPORT_PREFIX}/bin/EQt5Keychain.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
