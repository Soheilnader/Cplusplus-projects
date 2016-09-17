//By: Soheil Nadernezhad

#include "stdafx.h"
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	//generally pattern is un= an+b so
	// y[0]+a should be equal to x[0]

	int x[3], y[2], a;

	cout<<"Enter 4 numbers: ";

	//4 inputs
	cin>>x[0];
	cin>>x[1];
	cin>>x[2];
	cin>>x[3];

	y[0]=x[1]-x[0];
	y[1]=x[2]-x[1];
	y[2]=x[3]-x[2];

	if((y[0]==y[1])&&(y[1]==y[2]))
	{
		a=0;
		if(x[0]>y[0]+a)
		{
		for(a; x[0]>=y[0]+a; a++)
		{
			if(x[0]==y[0]+a)
			{
				cout<<y[0]<<"n+"<<a;
				break;
			}
		}
		}
		if(x[0]<y[0]+a)
		{
		for(a; x[0]<=y[0]+a; a--)
		{
			if(x[0]==y[0]+a)
			{
				cout<<y[0]<<"n"<<a;
				break;
			}
		}
		}
		if(x[0]==y[0])
		{
			cout<<y[0]<<"n";
		}
	
	}
	else
		cout<<"error";

	_getch();
  return 0;
}
