// systemblack.cpp : ����Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "systemblack.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	HWND hwnd = ::GetDesktopWindow();  //��ȡ������
	HDC hdc = ::GetWindowDC(hwnd); //��ȡ���������ĵľ��

	while (1) //��ѭ��
	{
		BitBlt(hdc, 0, 0,
			GetSystemMetrics(SM_CXSCREEN),/*��ȡ��Ļ���*/
			GetSystemMetrics(SM_CYSCREEN),/*��ȡ��Ļ�߶�*/
			hdc, 0, 0, BLACKNESS);
	}
    return (int)0;
}
