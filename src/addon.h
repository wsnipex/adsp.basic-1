#pragma once
/*
 *      Copyright (C) 2014-2015 Team KODI
 *      http://kodi.tv
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#include "kodi/libXBMC_addon.h"
#include "kodi/libKODI_adsp.h"
#include "kodi/libKODI_guilib.h"

extern bool                          m_bCreated;
extern std::string                   g_strUserPath;
extern std::string                   g_strAddonPath;
extern ADDON::CHelper_libXBMC_addon *KODI;
extern CHelper_libKODI_guilib       *GUI;
extern CHelper_libKODI_adsp         *ADSP;
