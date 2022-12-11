#include<windows.h>
#include<iostream>

using namespace std;

void autoclick()
{
	while (true)
	{
		
		if (GetKeyState(VK_XBUTTON2) & 1)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1);
		}
		if (GetKeyState(VK_XBUTTON1) & 1)
		{
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			Sleep(1);
		}
	}
}

int main()
{
	autoclick();
	return 0;
}