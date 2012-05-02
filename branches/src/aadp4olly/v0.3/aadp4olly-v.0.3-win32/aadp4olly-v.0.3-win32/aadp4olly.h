// $Id$

/*
 Anti-Anti-Debugging Plugin for Ollydbg v0.3 - LGPL 3.0

 Copyright (C) 2012 +NCR/CRC! [ReVeRsEr] http://crackinglandia.blogspot.com

 This library is free software: you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation, either
 version 3 of the License, or any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library.  If not, see <http://www.gnu.org/licenses/>.

 Author: Nahuel C. Riva
 Date: -
 @: nahuelriva@gmail.com
 Blog: http://crackinglandia.blogspot.com
 Twitter: @crackinglandia
*/


#include <windows.h>
#include <Windowsx.h>
#include <Shlwapi.h>

#include "helpers.h"

#ifndef __AADPGLOBALS_H__
#include "aadpglobals.h"
#endif

#ifndef __AADPCONSTANTS_H__
#include "aadpconstants.h"
#endif

#include "aadpdlgcallbacks.h"

#ifndef __AADPRESOURCES_H_
#include "resources\\resource.h"
#endif

#ifndef __OLLYHEADER_H__
#include "external\\plugin.h"
#endif

#ifndef TABS_H
#include "external\\tabs.h"
#endif

#ifndef __AADPLIB_H__
#include "aadlib\\aadlib-v0.2-win32.h"
#endif

#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "external\\OLLYDBG.LIB")
#pragma comment(lib, "aadlib\\aadlib-v0.2-win32.lib")

