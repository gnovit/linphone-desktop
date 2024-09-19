############################################################################
# Autotools.cmake
# Copyright (C) 2023  Belledonne Communications, Grenoble France
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

if("" STREQUAL "GNU")
	string(REGEX REPLACE "gcc$" "as" AS_COMPILER "gcc")
	if (AS_COMPILER STREQUAL "gcc")
		# Fallback for the case where gcc is found as /usr/bin/cc
		string(REGEX REPLACE "cc$" "as" AS_COMPILER "gcc")
	endif()
	set(AUTOTOOLS_AS_COMPILER ${AS_COMPILER})
endif()
set(C_LAUNCHER "")
set(CXX_LAUNCHER "")
if(NOT "" STREQUAL "")
       set(C_LAUNCHER " ")
endif()
if(NOT "" STREQUAL "")
       set(CXX_LAUNCHER " ")
endif()
set(AUTOTOOLS_C_COMPILER "${C_LAUNCHER}gcc")
set(AUTOTOOLS_CXX_COMPILER "${CXX_LAUNCHER}gcc")
set(AUTOTOOLS_OBJC_COMPILER "${C_LAUNCHER}gcc")
set(AUTOTOOLS_LINKER "")
set(AUTOTOOLS_AR "")

set(AUTOTOOLS_RANLIB "")
set(AUTOTOOLS_STRIP "")
set(AUTOTOOLS_NM "")
set(AUTOTOOLS_C_COMPILER_NO_LAUNCHER "gcc")
set(AUTOTOOLS_CXX_COMPILER_NO_LAUNCHER "gcc")
set(AUTOTOOLS_OBJC_COMPILER_NO_LAUNCHER "gcc")

set(AUTOTOOLS_AS_FLAGS "")
set(AUTOTOOLS_C_FLAGS "")
set(AUTOTOOLS_CPP_FLAGS "")
set(AUTOTOOLS_CXX_FLAGS "")
set(AUTOTOOLS_OBJC_FLAGS "")
set(AUTOTOOLS_LINKER_FLAGS "")

if(WIN32 AND "" MATCHES "")
	# Bug: it should be present in windows mingw path but cmake doesn't get it
	set(AUTOTOOLS_RANLIB "ranlib.exe")
endif()

if(CMAKE_VERBOSE_MAKEFILE)
	set(AUTOTOOLS_VERBOSE_MAKEFILE 1)
else()
	set(AUTOTOOLS_VERBOSE_MAKEFILE 0)
endif()
