#include "iostream"
#include <windows.h>
void gotoxy(int x,int y)
{
    HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
    if (INVALID_HANDLE_VALUE != hConsole)
    {
        COORD pos = {x, y};
        SetConsoleCursorPosition( hConsole, pos );
    }
}


int main()
{
	gotoxy(2,2);
	std::cout<<"*";
	getchar();
	return 0;
}

