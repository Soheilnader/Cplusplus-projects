//by Soheil Nadernezhad
#include "stdafx.h"
#include "iostream"

using namespace std;

double space(int x);
double periphery(int x);

int main(){
	int y;
	cout<<"Enter the radius of circle: ";
	cin>>y;
	cout<<"space: "<<space(y)<<endl;
	cout<<"periphery: "<<periphery(y)<<endl;
	cin>>y;
	getchar();
	return 0;
}
double space(int x){
	double a;
	a=x*x*3.14;
	return a;
}
double periphery(int x){
	double b;
	
	b=2*x*3.14;
	return b;
}
