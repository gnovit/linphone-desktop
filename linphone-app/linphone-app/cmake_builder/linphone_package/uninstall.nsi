ClearErrors
ExecWait '"cmd" /C ""%SystemRoot%\System32\tasklist" /NH /FI "IMAGENAME eq " | "%SystemRoot%\System32\find" /I /C """' $0
IntCmp $0 1 notRunningInUninstall
MessageBox MB_OK|MB_ICONEXCLAMATION " is running. Please close it first from the application menu and restart the installation." /SD IDOK
Abort

notRunningInUninstall:

## Application

DeleteRegKey HKLM "SOFTWARE\IM Providers\vozer"
DeleteRegKey HKLM "SOFTWARE\Gnovit Communications\vozer"
DeleteRegValue HKLM "SOFTWARE\RegisteredApplications" "vozer"

## Handlers

DeleteRegKey HKCR "vozer.sip"
DeleteRegKey HKCR "vozer.sip-vozer"
DeleteRegKey HKCR "vozer.sips"
DeleteRegKey HKCR "vozer.sips-vozer"
DeleteRegKey HKCR "vozer.vozer-config"
DeleteRegKey HKCR "vozer.tel"
DeleteRegKey HKCR "vozer.callto"

