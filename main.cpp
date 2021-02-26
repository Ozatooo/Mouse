#include <iostream>
#include <Windows.h>
#include <fstream>
#include <cstdlib>
#include <conio.h>

using namespace std;
	ofstream inFile;
class file
{

public:
	int loop(float x, float y);

};
int file::loop(float x, float y)
{
    inFile<<x<<" "<<y<<endl;   
}





using namespace std;
int main()
{
	file f;
	cout << "Hello World!\n";
	inFile.open("wynik.txt");
	
	while (1)

	{
		if (GetKeyState(VK_F12)) {// F12 wyłącza program
			    cout<<"plik zamknięty"<<inFile.close();

				exit(1);
		} 
		POINT cursorPos;
		GetCursorPos(&cursorPos);
		float x = 0;
		x = cursorPos.x;
		float y = 0;
		y = cursorPos.y;
		int popx;
		int popy;
		if ((GetKeyState(VK_LBUTTON) & 0x8000) != 0)
		{

			if(popx!=x || popy!=y){
			
			cout << x << ',' << y <<endl;
			f.loop(x,y);
			
			}
			popx=x;
			popy=y;
			

		}
		

	}
	


}
