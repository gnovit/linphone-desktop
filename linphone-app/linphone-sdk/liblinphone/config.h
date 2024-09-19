/***************************************************************************
 * config.h.cmake
 * Copyright (C) 2014  Belledonne Communications, Grenoble France
 *
 ****************************************************************************
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 ****************************************************************************/

#define LINPHONE_MAJOR_VERSION                                                                                         \
	$ { LINPHONE_MAJOR_VERSION }
#define LINPHONE_MINOR_VERSION                                                                                         \
	$ { LINPHONE_MINOR_VERSION }
#define LINPHONE_MICRO_VERSION                                                                                         \
	$ { LINPHONE_MICRO_VERSION }
#define LINPHONE_VERSION "5.3.0"
#define LIBLINPHONE_VERSION "5.3.0"

#define LINPHONE_ALL_LANGS ""

#define LINPHONE_PACKAGE_PLUGINS_DIR "./lib/liblinphone/plugins"
#define LINPHONE_CONFIG_DIR "Linphone"

#define GETTEXT_PACKAGE "liblinphone"

#define PACKAGE_LOCALE_DIR "./share/locale"
#define PACKAGE_DATA_DIR "./share"
#define PACKAGE_GRAMMAR_DIR "./share/belr/grammars"
#define PACKAGE_SOUND_DIR "./share/sounds/linphone"
#define PACKAGE_RING_DIR "./share/sounds/linphone/rings"

#define LIBLINPHONE_LOCAL_RESOURCE_LOCATION "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/tester"

#define VCARD_LOCAL_GRAMMAR_LOCATION "D:/git/vozer/vozer_ninja/linphone-desktop/belcard/src"
#define SDP_LOCAL_GRAMMAR_LOCATION "D:/git/vozer/vozer_ninja/linphone-desktop/belle-sip/src/sdp"
#define LIBLINPHONE_LOCAL_GRAMMARS_LOCATION "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-sdk/liblinphone/share"

#define MEDIASTREAMER2_LOCAL_PLUGINS_LOCATION "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/mediastreamer2/plugins"
#define LIBLINPHONE_LOCAL_PLUGINS_LOCATION "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib/liblinphone/plugins"

#define SOCI_LOCAL_PLUGINS_LOCATION "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/lib"

#define HAVE_ZLIB 1
/* #undef HAVE_CU_GET_SUITE */
/* #undef HAVE_CU_CURSES */
/* #undef HAVE_LIBUDEV_H */
#define HAVE_FLEXIAPI
#define HAVE_LIME_X3DH
#define HAVE_ADVANCED_IM
#define HAVE_DB_STORAGE
#define ENABLE_UPDATE_CHECK 1
/* #undef HAVE_GETIFADDRS */
#define HAVE_GOCLEAR
/* #undef HAVE_DLOPEN */
/* #undef ENABLE_SANITIZER */
