#include <iostream> 
#include <windows.h> // WinApi header 

using namespace std;

int main()
{
	Beep(510, 500); // 523 hertz (C5) for 500 milliseconds 
	Beep(587, 500);
	Beep(659, 500);
	Beep(698, 500);
	Beep(784, 500);

	cin.get(); // wait 
	return 0;
}