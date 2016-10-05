//By Soheil Nadernezhad
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
void main(){
	int b, c, d;
double *a;
cout<<"Insert the number of inputs: \n";
cin >> b;
a = new double[b];

		for(c=0;c<b;c++){
			if(c>b)
				break;
			else{
			cin>>d;
			a[c]=d;
			}
		}
		system("cls");
		for(c=0;c<b;c++)
			cout<<a[c]<<"\n";
		cout<<"___________________________________\n"<<
		  	  "Total numbers you entered:"<<b;
  _getch();
}