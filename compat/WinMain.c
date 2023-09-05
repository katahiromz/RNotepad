#ifdef UNICODE
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdlib.h>

INT WINAPI
wWinMain(HINSTANCE   hInstance,
         HINSTANCE   hPrevInstance,
         LPWSTR      lpCmdLine,
         INT         nCmdShow);

INT WINAPI
WinMain(HINSTANCE   hInstance,
        HINSTANCE   hPrevInstance,
        LPSTR       lpCmdLine,
        INT         nCmdShow)
{
    WCHAR szCmdLine[1024];
    MultiByteToWideChar(CP_ACP, 0, lpCmdLine, -1, szCmdLine, _countof(szCmdLine));
    szCmdLine[_countof(szCmdLine) - 1] = UNICODE_NULL;
    return wWinMain(hInstance, hPrevInstance, szCmdLine, nCmdShow);
}
#endif
