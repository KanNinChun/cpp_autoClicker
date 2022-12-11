#include<windows.h>
#include<iostream>

using namespace std;

void instruction()
{
	std::cout << "Press Numpad 1 to Enable auto Left Click  , repress to disable" << std::endl;
	std::cout << "Press Numpad 2 to Enable auto Right Click , repress to disable" << std::endl;
}

void autoclick()
{
	while (true)
	{
		
		if (GetKeyState(VK_NUMPAD1) & 1)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1);
		}
		if (GetKeyState(VK_NUMPAD2) & 1)
		{
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			Sleep(1);
		}
	}
}

int main()
{
	instruction();
	autoclick();
	return 0;
}