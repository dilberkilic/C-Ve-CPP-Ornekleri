#include <windows.h>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>



#define PCTRBOX1 401
#define PCTRBOX2 402
#define PCTRBOX3 403



HWND PictureBox1;
HWND PictureBox2;
HWND PictureBox3;

void ShowImage();
using namespace std;
LRESULT CALLBACK WndProc(HWND win_id, UINT Messengr, WPARAM prmw, LPARAM prml)
{
	switch (Messengr) {


	case WM_DESTROY: {
		PostQuitMessage(0);
		break;
	}


	case WM_COMMAND:

		switch (prmw)
		{



		}


	default:
		return DefWindowProc(win_id, Messengr, prmw, prml);
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wc;
	HWND hwnd;
	MSG msg;

	memset(&wc, 0, sizeof(wc));
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpfnWndProc = WndProc;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);

	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	if (!RegisterClassEx(&wc)) {
		MessageBox(NULL, "PENCERE OLUSTURMA", "HATASI", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}
	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE, "WindowClass", "RESÝM ÖRNEÐÝ", WS_VISIBLE | WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		1020,
		700,
		NULL, NULL, hInstance, NULL);



	PictureBox1 = CreateWindow("static", "picturebox", WS_CHILD | WS_VISIBLE | SS_BITMAP, 260, 60, 300, 300, hwnd, HMENU(PCTRBOX1), hInstance, NULL);
	PictureBox2 = CreateWindow("static", "picturebox", WS_CHILD | WS_VISIBLE | SS_BITMAP, 570, 60, 300, 300, hwnd, HMENU(PCTRBOX2), hInstance, NULL);
	PictureBox3 = CreateWindow("static", "picturebox", WS_CHILD | WS_VISIBLE | SS_BITMAP, 260, 250, 300, 300, hwnd, HMENU(PCTRBOX3), hInstance, NULL);

	if (hwnd == NULL) {
		MessageBox(NULL, "PENCERE OLUSTURMA HATASI", "HATA", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}

	ShowImage();

	while (GetMessage(&msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}
void ShowImage()
{
	HBITMAP bitmap1 = (HBITMAP)LoadImage(GetModuleHandle(NULL), "papatya1.bmp", IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION | LR_LOADFROMFILE);
	HBITMAP bitmap2 = (HBITMAP)LoadImage(GetModuleHandle(NULL), "papatya2.bmp", IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION | LR_LOADFROMFILE);
	HBITMAP bitmap3 = (HBITMAP)LoadImage(GetModuleHandle(NULL), "papatya3.bmp", IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION | LR_LOADFROMFILE);

	SendMessage(PictureBox1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bitmap1);
	SendMessage(PictureBox2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bitmap2);
	SendMessage(PictureBox3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)bitmap3);
}
