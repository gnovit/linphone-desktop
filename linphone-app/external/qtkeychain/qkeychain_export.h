
#ifndef QKEYCHAIN_EXPORT_H
#define QKEYCHAIN_EXPORT_H

#ifdef EQT5KEYCHAIN_STATIC_DEFINE
#  define QKEYCHAIN_EXPORT
#  define EQT5KEYCHAIN_NO_EXPORT
#else
#  ifndef QKEYCHAIN_EXPORT
#    ifdef EQt5Keychain_EXPORTS
        /* We are building this library */
#      define QKEYCHAIN_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define QKEYCHAIN_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef EQT5KEYCHAIN_NO_EXPORT
#    define EQT5KEYCHAIN_NO_EXPORT 
#  endif
#endif

#ifndef EQT5KEYCHAIN_DEPRECATED
#  define EQT5KEYCHAIN_DEPRECATED __declspec(deprecated)
#endif

#ifndef EQT5KEYCHAIN_DEPRECATED_EXPORT
#  define EQT5KEYCHAIN_DEPRECATED_EXPORT QKEYCHAIN_EXPORT EQT5KEYCHAIN_DEPRECATED
#endif

#ifndef EQT5KEYCHAIN_DEPRECATED_NO_EXPORT
#  define EQT5KEYCHAIN_DEPRECATED_NO_EXPORT EQT5KEYCHAIN_NO_EXPORT EQT5KEYCHAIN_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef EQT5KEYCHAIN_NO_DEPRECATED
#    define EQT5KEYCHAIN_NO_DEPRECATED
#  endif
#endif

#endif /* QKEYCHAIN_EXPORT_H */
