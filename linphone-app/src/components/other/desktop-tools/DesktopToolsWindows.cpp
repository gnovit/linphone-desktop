/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of linphone-desktop
 * (see https://www.linphone.org).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "DesktopToolsWindows.hpp"

#include "components/core/CoreManager.hpp"
#include "components/settings/SettingsModel.hpp"
#include "components/videoSource/VideoSourceDescriptorModel.hpp"

#include <QDebug>
#include <Windows.h>
// =============================================================================

DesktopTools::DesktopTools(QObject *parent) : QObject(parent) {
}

DesktopTools::~DesktopTools() {
	setScreenSaverStatus(true);
}

bool DesktopTools::getScreenSaverStatus() const {
	return mScreenSaverStatus;
}

void DesktopTools::setScreenSaverStatus(bool status) {
	if (status == mScreenSaverStatus) return;

	if (status) SetThreadExecutionState(ES_CONTINUOUS);
	else SetThreadExecutionState(ES_CONTINUOUS | ES_DISPLAY_REQUIRED);

	mScreenSaverStatus = status;
	emit screenSaverStatusChanged(status);
}

HHOOK hMouseHook;
DesktopTools *gTools = nullptr;
LRESULT CALLBACK mouseProc(int nCode, WPARAM wParam, LPARAM lParam) {
	MOUSEHOOKSTRUCT *pMouseStruct = (MOUSEHOOKSTRUCT *)lParam;
	if (pMouseStruct != NULL) {
		if (wParam == WM_LBUTTONDOWN) {
			printf("clicked");
			auto id = WindowFromPoint(pMouseStruct->pt);
			UnhookWindowsHookEx(hMouseHook);
			QMetaObject::invokeMethod(CoreManager::getInstance(), [id]() {
				gTools->mVideoSourceDescriptorModel->setScreenSharingWindow(reinterpret_cast<void *>(id));
			});
			emit gTools->windowIdSelectionEnded();
		}
		qDebug() << "Mouse position X = " << pMouseStruct->pt.x << " Mouse Position Y = " << pMouseStruct->pt.y;
	}
	return CallNextHookEx(hMouseHook, nCode, wParam, lParam);
}

void DesktopTools::getWindowIdFromMouse(VideoSourceDescriptorModel *model) {
	gTools = this;
	gTools->mVideoSourceDescriptorModel = model;
	emit windowIdSelectionStarted();
	HINSTANCE hInstance = GetModuleHandle(NULL);
	hMouseHook = SetWindowsHookEx(WH_MOUSE_LL, mouseProc, hInstance, NULL);
}

uintptr_t DesktopTools::getDisplayIndex(void* screenSharing) {
	return *(uintptr_t*)(&screenSharing);
}
