#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "xml2" for configuration "Debug"
set_property(TARGET xml2 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(xml2 PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/xml2.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/xml2.dll"
  )

list(APPEND _cmake_import_check_targets xml2 )
list(APPEND _cmake_import_check_files_for_xml2 "${_IMPORT_PREFIX}/lib/xml2.lib" "${_IMPORT_PREFIX}/bin/xml2.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
