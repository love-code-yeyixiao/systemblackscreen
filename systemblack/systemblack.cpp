// systemblack.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "systemblack.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	HWND hwnd = ::GetDesktopWindow();  //获取桌面句柄
	HDC hdc = ::GetWindowDC(hwnd); //获取桌面上下文的句柄

	while (1) //死循环
	{
		BitBlt(hdc, 0, 0,
			GetSystemMetrics(SM_CXSCREEN),/*获取屏幕宽度*/
			GetSystemMetrics(SM_CYSCREEN),/*获取屏幕高度*/
			hdc, 0, 0, BLACKNESS);
	}
    return (int)0;
}
