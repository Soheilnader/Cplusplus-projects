#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	char num[3], y;
	for (int x=0;x<3;x++)
		cin>>num[x];
	for(y=0;y<3;y++)
	{
		switch (num[y])
		{
		case'1':
			cout<<"one ";
			break;
		case'2':
			cout<<"two ";
			break;
		case'3':
			cout<<"three ";
			break;
		case'4':
			cout<<"four ";
			break;
		case'5':
			cout<<"five ";
			break;
		case'6':
			cout<<"six ";
			break;
		case'7':
			cout<<"seven ";
			break;
		case'8':
			cout<<"eight ";
			break;
		case'9':
			cout<<"nine ";
			break;
		case'0':
			cout<<"zero ";
			break;
		}
	}
	_getch();
}
