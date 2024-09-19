
# Application details

WriteRegStr HKLM "SOFTWARE\Gnovit Communications" "" ""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer" "" ""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities" "ApplicationDescription" "vozer"
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities" "ApplicationName" "vozer"
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities" "FriendlyAppName" "vozer"
WriteRegStr HKLM "SOFTWARE\RegisteredApplications" "vozer" "SOFTWARE\Gnovit Communications\vozer\Capabilities"
WriteRegStr HKLM "SOFTWARE\IM Providers\vozer" "ProcessName" "vozer.exe"
WriteRegStr HKLM "SOFTWARE\IM Providers\vozer" "FriendlyName" "vozer"


# PROTOCOL declaration

WriteRegStr HKCR "sip" "" "URL:sip Protocol"
WriteRegStr HKCR "sip" "URL Protocol" ""

WriteRegStr HKCR "sip-vozer" "" "URL:sip-vozer Protocol"
WriteRegStr HKCR "sip-vozer" "URL Protocol" ""

WriteRegStr HKCR "vozer-config" "" "URL:vozer-config Protocol"
WriteRegStr HKCR "vozer-config" "URL Protocol" ""

WriteRegStr HKCR "sips" "" "URL:sips Protocol"
WriteRegStr HKCR "sips" "URL Protocol" ""

WriteRegStr HKCR "sips-vozer" "" "URL:sips-vozer Protocol"
WriteRegStr HKCR "sips-vozer" "URL Protocol" ""

WriteRegStr HKCR "tel" "" "URL:tel Protocol"
WriteRegStr HKCR "tel" "URL Protocol" ""

WriteRegStr HKCR "callto" "" "URL:callto Protocol"
WriteRegStr HKCR "callto" "URL Protocol" ""


# Application protocol handlers

## SIP
WriteRegStr HKCR "vozer.sip" "" "vozer sip Protocol"
WriteRegStr HKCR "vozer.sip\Shell" "" ""
WriteRegStr HKCR "vozer.sip\Shell\Open" "" ""
WriteRegStr HKCR "vozer.sip\Shell\Open\Command" "" "$INSTDIR\bin\vozer.exe $\"%1$\""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities\URLAssociations" "sip" "vozer.sip"

## SIP-vozer
WriteRegStr HKCR "vozer.sip-vozer" "" "vozer sip-vozer Protocol"
WriteRegStr HKCR "vozer.sip-vozer\Shell" "" ""
WriteRegStr HKCR "vozer.sip-vozer\Shell\Open" "" ""
WriteRegStr HKCR "vozer.sip-vozer\Shell\Open\Command" "" "$INSTDIR\bin\vozer.exe $\"%1$\""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities\URLAssociations" "sip-vozer" "vozer.sip-vozer"

## SIPS
WriteRegStr HKCR "vozer.sips" "" "vozer sips Protocol"
WriteRegStr HKCR "vozer.sips\Shell" "" ""
WriteRegStr HKCR "vozer.sips\Shell\Open" "" ""
WriteRegStr HKCR "vozer.sips\Shell\Open\Command" "" "$INSTDIR\bin\vozer.exe $\"%1$\""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities\URLAssociations" "sips" "vozer.sips"

## SIPS-vozer
WriteRegStr HKCR "vozer.sips-vozer" "" "vozer sips-vozer Protocol"
WriteRegStr HKCR "vozer.sips-vozer\Shell" "" ""
WriteRegStr HKCR "vozer.sips-vozer\Shell\Open" "" ""
WriteRegStr HKCR "vozer.sips-vozer\Shell\Open\Command" "" "$INSTDIR\bin\vozer.exe $\"%1$\""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities\URLAssociations" "sips-vozer" "vozer.sips-vozer"

## vozer-CONFIG
WriteRegStr HKCR "vozer.vozer-config" "" "vozer vozer-config Protocol"
WriteRegStr HKCR "vozer.vozer-config\Shell" "" ""
WriteRegStr HKCR "vozer.vozer-config\Shell\Open" "" ""
WriteRegStr HKCR "vozer.vozer-config\Shell\Open\Command" "" "$INSTDIR\bin\vozer.exe $\"%1$\""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities\URLAssociations" "vozer-config" "vozer.vozer-config"

## TEL
WriteRegStr HKCR "vozer.tel" "" "vozer tel Protocol"
WriteRegStr HKCR "vozer.tel\Shell" "" ""
WriteRegStr HKCR "vozer.tel\Shell\Open" "" ""
WriteRegStr HKCR "vozer.tel\Shell\Open\Command" "" "$INSTDIR\bin\vozer.exe $\"%1$\""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities\URLAssociations" "tel" "vozer.tel"

## CALLTO
WriteRegStr HKCR "vozer.callto" "" "vozer callto Protocol"
WriteRegStr HKCR "vozer.callto\Shell" "" ""
WriteRegStr HKCR "vozer.callto\Shell\Open" "" ""
WriteRegStr HKCR "vozer.callto\Shell\Open\Command" "" "$INSTDIR\bin\vozer.exe $\"%1$\""
WriteRegStr HKLM "SOFTWARE\Gnovit Communications\vozer\Capabilities\URLAssociations" "callto" "vozer.callto"
