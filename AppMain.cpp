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

#include "CMainWindow.h"
#include "CFirstWindow.h"
#include "CSecondWindow.h"

void myPurecallHandler(void)
{
	//printf("In _purecall_handler.");
	exit(0);
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	_set_purecall_handler(myPurecallHandler);

	CMainWindow* pMainWindow = new CMainWindow(L"mymainwindowtitle", hInstance, L"mymainwindowclass");
	pMainWindow->Create();
	pMainWindow->Show();

	
	CFirstWindow* pFirstWindow = new CFirstWindow(L"myfirstwindowtitle", hInstance, L"myfirstwindowclass");
	pFirstWindow->Create();
	pFirstWindow->Show();
	
	CSecondWindow* pSecondWindow = new CSecondWindow(L"mysecondwindowtitle", hInstance, L"mysecondwindowclass");
	pSecondWindow->Create();
	pSecondWindow->Show();

	//// pump messages:
	MSG  msg;
	int status;
	while ((status = ::GetMessage(&msg, 0, 0, 0)) != 0)
	{
		if (status == -1) 
		{
			// handle the error, break
			break;
		}
		::TranslateMessage(&msg);
		::DispatchMessage(&msg);
	}
	//spi, begin
	delete pSecondWindow;
	delete pFirstWindow;
	delete pMainWindow;
	//spi, end
	return msg.wParam;
}



