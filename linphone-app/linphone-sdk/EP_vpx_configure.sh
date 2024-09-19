#!/bin/sh

export INCLUDE="C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\ATLMFC\include;C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\include;C:\Program Files (x86)\Windows Kits\NETFXSDK\4.8\include\um;C:\Program Files (x86)\Windows Kits\10\include\10.0.22000.0\ucrt;C:\Program Files (x86)\Windows Kits\10\include\10.0.22000.0\shared;C:\Program Files (x86)\Windows Kits\10\include\10.0.22000.0\um;C:\Program Files (x86)\Windows Kits\10\include\10.0.22000.0\winrt;C:\Program Files (x86)\Windows Kits\10\include\10.0.22000.0\cppwinrt;C:\Program Files (x86)\Microsoft Visual Studio\VC98\atl\include;C:\Program Files (x86)\Microsoft Visual Studio\VC98\mfc\include;C:\Program Files (x86)\Microsoft Visual Studio\VC98\include "
export LIB="C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\ATLMFC\lib\x86;C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\lib\x86;C:\Program Files (x86)\Windows Kits\NETFXSDK\4.8\lib\um\x86;C:\Program Files (x86)\Windows Kits\10\lib\10.0.22000.0\ucrt\x86;C:\Program Files (x86)\Windows Kits\10\lib\10.0.22000.0\um\x86;C:\Program Files (x86)\Microsoft Visual Studio\VC98\mfc\lib;C:\Program Files (x86)\Microsoft Visual Studio\VC98\lib "
export LIBPATH="C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\ATLMFC\lib\x86;C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\lib\x86;C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\lib\x86\store\references;C:\Program Files (x86)\Windows Kits\10\UnionMetadata\10.0.22000.0;C:\Program Files (x86)\Windows Kits\10\References\10.0.22000.0;C:\WINDOWS\Microsoft.NET\Framework\v4.0.30319 "

mkdir -p "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libvpx"
cd D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/linphone-sdk/external/libvpx
cp -Rf D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libvpx/* .
"D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/external/libvpx/configure"  "--enable-error-concealment" "--enable-multithread" "--enable-realtime-only" "--enable-spatial-resampling" "--enable-vp8" "--disable-vp9" "--enable-libs" "--disable-install-docs" "--disable-debug-libs" "--disable-examples" "--disable-unit-tests" "--disable-tools" "--as=yasm" "--prefix=D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT" "--target=x86_64-win64-vs16"
