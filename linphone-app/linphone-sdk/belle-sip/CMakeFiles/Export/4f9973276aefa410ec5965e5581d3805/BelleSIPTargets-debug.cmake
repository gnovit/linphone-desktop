#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "belle-sip" for configuration "Debug"
set_property(TARGET belle-sip APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(belle-sip PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/belle-sip.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "zlib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/belle-sip.dll"
  )

list(APPEND _cmake_import_check_targets belle-sip )
list(APPEND _cmake_import_check_files_for_belle-sip "${_IMPORT_PREFIX}/lib/belle-sip.lib" "${_IMPORT_PREFIX}/bin/belle-sip.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
