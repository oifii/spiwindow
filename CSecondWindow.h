/*
 * Copyright (c) 2015-2016 Stephane Poirier
 *
 * stephane.poirier@oifii.org
 *
 * Stephane Poirier
 * 3532 rue Ste-Famille, #3
 * Montreal, QC, H2X 2L1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#if !defined __CSecondWindow_H__
#define __CSecondWindow_H__

#include "CWindow.h"


class CSecondWindow : public CWindow 
{
public:
	CSecondWindow(LPCTSTR lpszCaption, LPWNDCLASSEX lpwndClassEx);
	CSecondWindow(LPCTSTR lpszCaption, HINSTANCE hInstance, LPCTSTR lpszClassName);
	CSecondWindow(LPCTSTR lpszCaption, HINSTANCE hInstance, LPCTSTR lpszClassName,
		UINT style, HICON hIcon, HCURSOR hCursor, HBRUSH hbrBackground,
		LPCTSTR lpszMenuName, HICON hIconSm);
	~CSecondWindow();
	virtual LRESULT CALLBACK wndProc(HWND, UINT, WPARAM, LPARAM);
};


#endif