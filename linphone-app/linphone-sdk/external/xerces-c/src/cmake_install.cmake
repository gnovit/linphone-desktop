# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Debug/xerces-c.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/RelWithDebInfo/xerces-c.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/Debug/xerces-c.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/Release/xerces-c.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/MinSizeRel/xerces-c.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/RelWithDebInfo/xerces-c.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Debug/xerces-c.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/Release/xerces-c.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/MinSizeRel/xerces-c.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/bin/RelWithDebInfo/xerces-c.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/dom" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOM.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMAttr.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMCDATASection.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMCharacterData.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMComment.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMConfiguration.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMDocument.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMDocumentFragment.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMDocumentRange.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMDocumentTraversal.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMDocumentType.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMElement.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMEntity.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMEntityReference.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMError.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMErrorHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMImplementation.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMImplementationList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMImplementationLS.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMImplementationRegistry.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMImplementationSource.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLocator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSInput.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSOutput.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSParser.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSParserFilter.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSResourceResolver.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSSerializer.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMLSSerializerFilter.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMMemoryManager.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMNamedNodeMap.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMNode.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMNodeFilter.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMNodeIterator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMNodeList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMNotation.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMProcessingInstruction.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMPSVITypeInfo.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMRange.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMRangeException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMStringList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMText.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMTreeWalker.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMTypeInfo.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMUserDataHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMXPathEvaluator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMXPathException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMXPathExpression.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMXPathNamespace.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMXPathNSResolver.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/DOMXPathResult.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/dom/StDOMNode.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/framework" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/BinOutputStream.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/LocalFileFormatTarget.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/LocalFileInputSource.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/MemBufFormatTarget.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/MemBufInputSource.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/MemoryManager.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/StdInInputSource.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/StdOutFormatTarget.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/URLInputSource.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/ValidationContext.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/Wrapper4DOMLSInput.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/Wrapper4InputSource.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLAttDef.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLAttDefList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLAttr.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLBuffer.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLBufferMgr.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLContentModel.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLDocumentHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLDTDDescription.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLElementDecl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLEntityDecl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLEntityHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLErrorCodes.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLErrorReporter.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLFormatter.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLGrammarDescription.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLGrammarPool.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLGrammarPoolImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLNotationDecl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLPScanToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLRecognizer.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLRefInfo.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLSchemaDescription.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/XMLValidityCodes.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/framework/psvi" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/PSVIAttribute.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/PSVIAttributeList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/PSVIElement.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/PSVIHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/PSVIItem.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSAnnotation.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSAttributeDeclaration.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSAttributeGroupDefinition.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSAttributeUse.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSComplexTypeDefinition.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSConstants.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSElementDeclaration.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSFacet.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSIDCDefinition.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSModel.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSModelGroup.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSModelGroupDefinition.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSMultiValueFacet.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSNamedMap.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSNamedMap.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSNamespaceItem.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSNotationDeclaration.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSObject.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSParticle.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSSimpleTypeDefinition.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSTypeDefinition.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSValue.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/framework/psvi/XSWildcard.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/internal" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/BinFileOutputStream.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/BinMemOutputStream.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/CharTypeTables.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/DGXMLScanner.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/ElemStack.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/EndOfEntityException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/IANAEncodings.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/IGXMLScanner.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/MemoryManagerImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/ReaderMgr.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/SGXMLScanner.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/ValidationContextImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/VecAttributesImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/VecAttrListImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/WFXMLScanner.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XMLInternalErrorHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XMLReader.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XMLScanner.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XMLScannerResolver.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XProtoType.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XSAXMLScanner.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XSerializable.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XSerializationException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XSerializeEngine.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XSObjectFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/internal/XTemplateSerializer.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/parsers" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/parsers/AbstractDOMParser.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/parsers/DOMLSParserImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/parsers/SAX2XMLFilterImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/parsers/SAX2XMLReaderImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/parsers/SAXParser.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/parsers/XercesDOMParser.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/sax" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/AttributeList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/DocumentHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/DTDHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/EntityResolver.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/ErrorHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/HandlerBase.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/InputSource.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/Locator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/Parser.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/SAXException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax/SAXParseException.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/sax2" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/Attributes.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/ContentHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/DeclHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/DefaultHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/LexicalHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/SAX2XMLFilter.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/SAX2XMLReader.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/sax2/XMLReaderFactory.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/util" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ArrayIndexOutOfBoundsException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/Base64.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/BaseRefVectorOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/BaseRefVectorOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/BinFileInputStream.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/BinInputStream.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/BinMemInputStream.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/BitOps.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/BitSet.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/CountedPointer.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/CountedPointer.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/DefaultPanicHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/EmptyStackException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/EncodingValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/FlagJanitor.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/FlagJanitor.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/Hashers.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/Hash2KeysSetOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/Hash2KeysSetOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/HexBin.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/IllegalArgumentException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/InvalidCastException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/IOException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/Janitor.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/Janitor.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/KeyRefPair.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/KeyRefPair.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/KeyValuePair.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/KeyValuePair.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/KVStringPair.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/Mutexes.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/LogicalPath.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/NameIdPool.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/NameIdPool.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/NoSuchElementException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/NullPointerException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/NumberFormatException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/OutOfMemoryException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/PanicHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ParseException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/PlatformUtils.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/PSVIUni.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/QName.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefArrayOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefArrayOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefArrayVectorOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefArrayVectorOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefHash2KeysTableOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefHash2KeysTableOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefHash3KeysIdPool.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefHash3KeysIdPool.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefHashTableOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefHashTableOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefStackOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefStackOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefVectorOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RefVectorOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/RuntimeException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/SchemaDateTimeException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/SecurityManager.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/StringPool.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/SynchronizedStringPool.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/TranscodingException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/TransENameMap.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/TransENameMap.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/TransService.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/UnexpectedEOFException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/UnsupportedEncodingException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/UTFDataFormatException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueArrayOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueArrayOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueHashTableOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueHashTableOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueStackOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueStackOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueVectorOf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/ValueVectorOf.c"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XercesDefs.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XercesVersion.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMemory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XML256TableTranscoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XML88591Transcoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLAbstractDoubleFloat.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLASCIITranscoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLBigDecimal.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLBigInteger.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLChar.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLChTranscoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLDateTime.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLDOMMsg.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLDouble.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLEBCDICTranscoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLEntityResolver.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLEnumerator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLExceptMsgs.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLFileMgr.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLFloat.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLIBM1047Transcoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLIBM1140Transcoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLInitializer.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLInteger.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLMutexMgr.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLMsgLoader.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLNetAccessor.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLNumber.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLResourceIdentifier.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLString.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLStringTokenizer.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLUCS4Transcoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLUni.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLUniDefs.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLUri.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLURL.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLUTF16Transcoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLUTF8Transcoder.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/XMLWin1252Transcoder.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/util/regx" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/ASCIIRangeFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/BlockRangeFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/BMPattern.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/CharToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/ClosureToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/ConcatToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/Match.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/Op.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/OpFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/ParenToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/ParserForXMLSchema.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/RangeFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/RangeToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/RangeTokenMap.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/RegularExpression.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/RegxDefs.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/RegxParser.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/RegxUtil.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/StringToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/Token.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/TokenFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/TokenInc.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/UniCharTable.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/UnicodeRangeFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/UnionToken.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/XMLRangeFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/util/regx/XMLUniCharacter.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/validators/common" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/AllContentModel.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/CMAny.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/CMBinaryOp.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/CMLeaf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/CMRepeatingLeaf.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/CMNode.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/CMStateSet.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/CMUnaryOp.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/ContentLeafNameTypeVector.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/ContentSpecNode.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/DFAContentModel.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/Grammar.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/GrammarResolver.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/MixedContentModel.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/common/SimpleContentModel.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/validators/datatype" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/AbstractNumericFacetValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/AbstractNumericValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/AbstractStringValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/AnySimpleTypeDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/AnyURIDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/Base64BinaryDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/BooleanDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DatatypeValidatorFactory.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DateDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DateTimeDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DateTimeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DayDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DecimalDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DoubleDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/DurationDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/ENTITYDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/FloatDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/HexBinaryDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/IDDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/IDREFDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/InvalidDatatypeFacetException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/InvalidDatatypeValueException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/ListDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/MonthDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/MonthDayDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/NameDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/NCNameDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/NOTATIONDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/QNameDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/StringDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/TimeDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/UnionDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/XMLCanRepGroup.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/YearDatatypeValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/datatype/YearMonthDatatypeValidator.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/validators/DTD" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DocTypeHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DTDAttDef.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DTDAttDefList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DTDElementDecl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DTDEntityDecl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DTDGrammar.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DTDScanner.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/DTDValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/DTD/XMLDTDDescriptionImpl.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/validators/schema" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/ComplexTypeInfo.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/GeneralAttributeCheck.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/FieldActivator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/FieldValueMap.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/IC_Field.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/IC_Key.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/IC_KeyRef.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/IC_Selector.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/IC_Unique.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/IdentityConstraint.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/IdentityConstraintHandler.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/ValueStore.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/ValueStoreCache.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/XercesXPath.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/XPathException.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/XPathMatcher.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/XPathMatcherStack.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/identity/XPathSymbols.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/NamespaceScope.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/PSVIDefs.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SchemaAttDef.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SchemaAttDefList.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SchemaElementDecl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SchemaGrammar.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SchemaInfo.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SchemaSymbols.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SchemaValidator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/SubstitutionGroupComparator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/TraverseSchema.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XercesAttGroupInfo.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XercesElementWildcard.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XercesGroupInfo.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XMLSchemaDescriptionImpl.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XSDDOMParser.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XSDErrorReporter.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XSDLocator.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/validators/schema/XUtil.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/xinclude" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/xinclude/XIncludeDOMDocumentProcessor.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/xinclude/XIncludeLocation.hpp"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/xerces-c/src/xercesc/xinclude/XIncludeUtils.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xercesc/util" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/xerces-c/src/../xercesc/util/Xerces_autoconf_config.hpp")
endif()

