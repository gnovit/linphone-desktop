############################################################################
# LinphoneCxxConfig.cmake
# Copyright (C) 2017  Belledonne Communications, Grenoble France
#
############################################################################
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
#
############################################################################
#
# Config file for the Linphone++ package.
# Some components can be asked for: core, tester.
#
# It defines the following variables:
#
#  LINPHONECXX_FOUND - system has linphone++
#  LINPHONECXX_INCLUDE_DIRS - the linphone++ include directory
#  LINPHONECXX_LIBRARIES - The libraries needed to use linphone++
#  LINPHONECXX_LDFLAGS - The linking flags needed to use linphone++

include("${CMAKE_CURRENT_LIST_DIR}/LinphoneCxxTargets.cmake")

set(LINPHONECXX_LDFLAGS "")
set(LINPHONECXX_CPPFLAGS "")
set(LINPHONECXX_LIBRARIES liblinphone++)

#get_target_property(LINPHONECXX_INCLUDE_DIRS liblinphone++ INTERFACE_INCLUDE_DIRECTORIES)
#list(INSERT LINPHONECXX_INCLUDE_DIRS 0 "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/include")
set(LINPHONECXX_INCLUDE_DIRS "D:/git/vozer/vozer_ninja/linphone-desktop/linphone-app/OUTPUT/include")
list(REMOVE_DUPLICATES LINPHONECXX_INCLUDE_DIRS)

set(LINPHONECXX_FOUND 1)
