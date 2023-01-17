import QtQuick 2.7
//import QtQuick.Controls 2.3
//import Qt.labs.platform 1.0

import Linphone 1.0
import Common 1.0
import Utils 1.0

// =============================================================================

Item {
	id:menuParent
	property bool isOpenned: menu.visible
	function open () {
		menu.popup()
	}
	function close(){
		menu.close()
	}
	
	signal displayRecordings()
	
	// ---------------------------------------------------------------------------
	// Shortcuts.
	// ---------------------------------------------------------------------------
	
	Shortcut {
		id: settingsShortcut
		
		sequence: 'Ctrl+P'
		
		onActivated: App.smartShowWindow(App.getSettingsWindow())
	}
	
	Shortcut {
		id: quitShortcut
		
		context: Qt.ApplicationShortcut
		sequence: StandardKey.Quit
		
		onActivated: Qt.quit()
	}
	
	Shortcut {
		id: aboutShortcut
		
		sequence: StandardKey.HelpContents
		
		onActivated: {
			window.detachVirtualWindow()
			window.attachVirtualWindow(Qt.resolvedUrl('Dialogs/About.qml'))
		}
	}
	
	Shortcut {
		id: recordingsShortcut
		onActivated: menuParent.displayRecordings()
	}
	
	// ---------------------------------------------------------------------------
	// Menu.
	// ---------------------------------------------------------------------------
	
	Menu {
		id: menu
		title: qsTr('settings')
		
		MenuItem {
			text: qsTr('settings')
			
			onTriggered: settingsShortcut.onActivated()
		}
		
		MenuItem{
			//: 'Recordings' : Label for the recordings menu.
			text: qsTr('recordings')
			onTriggered: recordingsShortcut.onActivated()
		}
		
		MenuItem {
			visible: CoreManager.initialized && SettingsModel.isCheckForUpdateAvailable()
			//: 'Check for updates' : Item menu for checking updates
			text: qsTr('checkForUpdates')
			
			onTriggered: App.checkForUpdates(true)
		}
		
		MenuItem {
			text: qsTr('about')
			
			onTriggered: aboutShortcut.onActivated()
		}
		
		MenuItem {
			text: qsTr('quit')
			
			onTriggered: quitShortcut.onActivated()
		}
	}
}
