#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  MessageBox(NULL, L"Hello, World!", L"Message", MB_OK);
  return 0;
}
