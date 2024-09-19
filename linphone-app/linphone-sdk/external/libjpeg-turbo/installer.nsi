!include x64.nsh
Name "linphoneqt SDK for Visual C++ 64-bit"
OutFile "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}linphoneqt-3.0.3-vc64.exe"
InstallDir "D:\git\vozer\vozer_ninja\linphone-desktop\linphone-app\OUTPUT"

SetCompressor bzip2

Page directory
Page instfiles

UninstPage uninstConfirm
UninstPage instfiles

Section "linphoneqt SDK for Visual C++ 64-bit (required)"
!ifdef WIN64
	${If} ${RunningX64}
	${DisableX64FSRedirection}
	${Endif}
!endif
	SectionIn RO
!ifdef GCC
	IfFileExists $SYSDIR/libturbojpeg.dll exists 0
!else
	IfFileExists $SYSDIR/turbojpeg.dll exists 0
!endif
	goto notexists
	exists:
!ifdef GCC
	MessageBox MB_OK "An existing version of the linphoneqt SDK for Visual C++ 64-bit is already installed.  Please uninstall it first."
!else
	MessageBox MB_OK "An existing version of the linphoneqt SDK for Visual C++ 64-bit or the TurboJPEG SDK is already installed.  Please uninstall it first."
!endif
	quit

	notexists:
	SetOutPath $SYSDIR
!ifdef GCC
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\libturbojpeg.dll"
!else
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}turbojpeg.dll"
!endif
	SetOutPath $INSTDIR\bin
!ifdef GCC
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\libturbojpeg.dll"
!else
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}turbojpeg.dll"
!endif
!ifdef GCC
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\libjpeg-62.dll"
!else
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}jpeg62.dll"
!endif
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}cjpeg.exe"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}djpeg.exe"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}jpegtran.exe"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}tjbench.exe"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}rdjpgcom.exe"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}wrjpgcom.exe"
	SetOutPath $INSTDIR\lib
!ifdef GCC
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\libturbojpeg.dll.a"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\libturbojpeg.a"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\libjpeg.dll.a"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\libjpeg.a"
!else
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}turbojpeg.lib"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}turbojpeg-static.lib"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}jpeg.lib"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\${BUILDDIR}jpeg-static.lib"
!endif
	SetOutPath $INSTDIR\lib\pkgconfig
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\pkgscripts\libjpeg.pc"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\pkgscripts\libturbojpeg.pc"
	SetOutPath $INSTDIR\lib\cmake\linphoneqt
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\pkgscripts\linphoneqtConfig.cmake"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\pkgscripts\linphoneqtConfigVersion.cmake"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\win\linphoneqtTargets.cmake"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\win\linphoneqtTargets-release.cmake"
!ifdef JAVA
	SetOutPath $INSTDIR\classes
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\java\turbojpeg.jar"
!endif
	SetOutPath $INSTDIR\include
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libjpeg-turbo\jconfig.h"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\jerror.h"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\jmorecfg.h"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\jpeglib.h"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\turbojpeg.h"
	SetOutPath $INSTDIR\doc
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\README.ijg"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\README.md"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\LICENSE.md"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\example.c"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\libjpeg.txt"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\structure.txt"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\usage.txt"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\wizard.txt"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\tjexample.c"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\java\TJExample.java"
!ifdef GCC
	SetOutPath $INSTDIR\man\man1
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\cjpeg.1"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\djpeg.1"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\jpegtran.1"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\rdjpgcom.1"
	File "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libjpeg-turbo\wrjpgcom.1"
!endif

	WriteRegStr HKLM "SOFTWARE\linphoneqt64 3.0.3" "Install_Dir" "$INSTDIR"

	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\linphoneqt64 3.0.3" "DisplayName" "linphoneqt SDK v3.0.3 for Visual C++ 64-bit"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\linphoneqt64 3.0.3" "UninstallString" '"$INSTDIR\uninstall_3.0.3.exe"'
	WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\linphoneqt64 3.0.3" "NoModify" 1
	WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\linphoneqt64 3.0.3" "NoRepair" 1
	WriteUninstaller "uninstall_3.0.3.exe"
SectionEnd

Section "Uninstall"
!ifdef WIN64
	${If} ${RunningX64}
	${DisableX64FSRedirection}
	${Endif}
!endif

	SetShellVarContext all

	DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\linphoneqt64 3.0.3"
	DeleteRegKey HKLM "SOFTWARE\linphoneqt64 3.0.3"

!ifdef GCC
	Delete $INSTDIR\bin\libjpeg-62.dll
	Delete $INSTDIR\bin\libturbojpeg.dll
	Delete $SYSDIR\libturbojpeg.dll
	Delete $INSTDIR\lib\libturbojpeg.dll.a
	Delete $INSTDIR\lib\libturbojpeg.a
	Delete $INSTDIR\lib\libjpeg.dll.a
	Delete $INSTDIR\lib\libjpeg.a
!else
	Delete $INSTDIR\bin\jpeg62.dll
	Delete $INSTDIR\bin\turbojpeg.dll
	Delete $SYSDIR\turbojpeg.dll
	Delete $INSTDIR\lib\jpeg.lib
	Delete $INSTDIR\lib\jpeg-static.lib
	Delete $INSTDIR\lib\turbojpeg.lib
	Delete $INSTDIR\lib\turbojpeg-static.lib
!endif
	Delete $INSTDIR\lib\pkgconfig\libjpeg.pc
	Delete $INSTDIR\lib\pkgconfig\libturbojpeg.pc
	Delete $INSTDIR\lib\cmake\linphoneqt\linphoneqtConfig.cmake
	Delete $INSTDIR\lib\cmake\linphoneqt\linphoneqtConfigVersion.cmake
	Delete $INSTDIR\lib\cmake\linphoneqt\linphoneqtTargets.cmake
	Delete $INSTDIR\lib\cmake\linphoneqt\linphoneqtTargets-release.cmake
!ifdef JAVA
	Delete $INSTDIR\classes\turbojpeg.jar
!endif
	Delete $INSTDIR\bin\cjpeg.exe
	Delete $INSTDIR\bin\djpeg.exe
	Delete $INSTDIR\bin\jpegtran.exe
	Delete $INSTDIR\bin\tjbench.exe
	Delete $INSTDIR\bin\rdjpgcom.exe
	Delete $INSTDIR\bin\wrjpgcom.exe
	Delete $INSTDIR\include\jconfig.h
	Delete $INSTDIR\include\jerror.h
	Delete $INSTDIR\include\jmorecfg.h
	Delete $INSTDIR\include\jpeglib.h
	Delete $INSTDIR\include\turbojpeg.h
	Delete $INSTDIR\uninstall_3.0.3.exe
	Delete $INSTDIR\doc\README.ijg
	Delete $INSTDIR\doc\README.md
	Delete $INSTDIR\doc\LICENSE.md
	Delete $INSTDIR\doc\example.c
	Delete $INSTDIR\doc\libjpeg.txt
	Delete $INSTDIR\doc\structure.txt
	Delete $INSTDIR\doc\usage.txt
	Delete $INSTDIR\doc\wizard.txt
	Delete $INSTDIR\doc\tjexample.c
	Delete $INSTDIR\doc\TJExample.java
!ifdef GCC
	Delete $INSTDIR\man\man1\cjpeg.1
	Delete $INSTDIR\man\man1\djpeg.1
	Delete $INSTDIR\man\man1\jpegtran.1
	Delete $INSTDIR\man\man1\rdjpgcom.1
	Delete $INSTDIR\man\man1\wrjpgcom.1
!endif

	RMDir "$INSTDIR\include"
	RMDir "$INSTDIR\lib\pkgconfig"
	RMDir "$INSTDIR\lib\cmake\linphoneqt"
	RMDir "$INSTDIR\lib\cmake"
	RMDir "$INSTDIR\lib"
	RMDir "$INSTDIR\doc"
!ifdef GCC
	RMDir "$INSTDIR\man\man1"
	RMDir "$INSTDIR\man"
!endif
!ifdef JAVA
	RMDir "$INSTDIR\classes"
!endif
	RMDir "$INSTDIR\bin"
	RMDir "$INSTDIR"

SectionEnd
