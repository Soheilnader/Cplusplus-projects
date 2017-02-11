#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
int x ,y;
while(1)
{
cin>>x;
cout<<"bakhshpazir bar: ";
for(y=1;y<=x;y++)
	if(x%y==0)
		cout<<y<<" ";
cout<<"\n";
}
	getchar();
  return 0;
}
