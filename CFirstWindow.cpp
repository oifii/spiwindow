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
#include "CFirstWindow.h"

CFirstWindow::CFirstWindow(LPCTSTR lpszCaption, LPWNDCLASSEX lpwndClassEx) 
: CWindow( lpszCaption, lpwndClassEx)
{

}

CFirstWindow::CFirstWindow(LPCTSTR lpszCaption, HINSTANCE hInstance, LPCTSTR lpszClassName) 
:CWindow(lpszCaption, hInstance, lpszClassName) 
{

}

CFirstWindow::CFirstWindow(LPCTSTR lpszCaption, HINSTANCE hInstance, LPCTSTR lpszClassName,
	UINT style, HICON hIcon, HCURSOR hCursor, HBRUSH hbrBackground,
	LPCTSTR lpszMenuName, HICON hIconSm)
	: CWindow(lpszCaption, hInstance, lpszClassName,
	style, hIcon, hCursor, hbrBackground,
	lpszMenuName, hIconSm)
{

}

CFirstWindow::~CFirstWindow()
{
}

LRESULT CALLBACK CFirstWindow::wndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) 
{

	switch (uMsg)
	{
	case WM_CREATE:
		
		return 0;
	case WM_DESTROY:
		::PostQuitMessage(0);
		//ShowWindow(hwnd, SW_HIDE);
		return 0;
	default:
		return ::DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
}
