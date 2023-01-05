// Fake slc.dll for Windows 7 Games
// Please build it with MSVC:
//   cl slc.cpp /LD

#include <windows.h>

extern "C" __declspec(dllexport) HRESULT WINAPI SLGetWindowsInformationDWORD(PCWSTR pwszValueName, DWORD *pdwValue) {
    *pdwValue = 1;
    return S_OK;
}

BOOL WINAPI DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {
    return TRUE;
}
