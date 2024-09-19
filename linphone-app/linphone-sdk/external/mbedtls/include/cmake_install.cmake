# Install script for directory: D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mbedtls" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/aes.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/aria.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/asn1.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/asn1write.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/base64.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/bignum.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/build_info.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/camellia.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ccm.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/chacha20.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/chachapoly.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/check_config.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/cipher.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/cmac.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/compat-2.x.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/config_psa.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/constant_time.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ctr_drbg.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/debug.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/des.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/dhm.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ecdh.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ecdsa.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ecjpake.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ecp.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/entropy.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/error.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/gcm.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/hkdf.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/hmac_drbg.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/legacy_or_psa.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/lms.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/mbedtls_config.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/md.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/md5.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/memory_buffer_alloc.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/net_sockets.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/nist_kw.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/oid.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/pem.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/pk.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/pkcs12.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/pkcs5.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/pkcs7.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/platform.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/platform_time.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/platform_util.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/poly1305.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/private_access.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/psa_util.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ripemd160.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/rsa.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/sha1.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/sha256.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/sha512.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ssl.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ssl_cache.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ssl_ciphersuites.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ssl_cookie.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/ssl_ticket.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/threading.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/timing.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/version.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/x509.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/x509_crl.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/x509_crt.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/mbedtls/x509_csr.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/psa" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_builtin_composites.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_builtin_primitives.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_compat.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_config.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_driver_common.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_driver_contexts_composites.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_driver_contexts_primitives.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_extra.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_platform.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_se_driver.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_sizes.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_struct.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_types.h"
    "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/mbedtls/include/psa/crypto_values.h"
    )
endif()

