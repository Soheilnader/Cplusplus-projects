#ifndef HENDESE_H
#define HENDESE_H
#include <math.h>
#define PI 3.14159265

long int factorial(int x)       //factorial function
{
    int y=1;
    for(int i=1;i<=x;i++)
        y=y*i;
    return y;
}

class Hendese
{
public:
    //2D
        double circle_area(int x) {
            double y=x*x*3.14;
            return y;
        }
        double circle_periphery(int x) {
            double y=x*2*3.14;
            return y;
        }
        double square_area_side(int x){
            double y=x*x;
            return y;
        }
        double square_area_diameter(int x){
            double y=x*x/2.000;
            return y;
        }
        double square_periphery(int x){
            double y=x*x;
            return y;
        }
        double triangle_area_height(int x, int y){
            double z=x*y/2;
            return z;
        }
        double triangle_area_sin(int x, int y, int z){
            double a=abs(0.5*x*y*sin(z*PI/180));
            return a;
        }

        //3D
        double sphere_area(int x) {
            double y;
            y=4*x*x*3.14;
            return y;
        }
        double sphere_volume(int x) {
            double y;
            y=4/3*3.14*x*x*x;
            return y;
}
        double cube_area(int x){
            int y;
            y=x*x*6;
            return y;
        }
        double cube_area_janebi(int x){
            int y;
            y=x*4*x;
            return y;
        }
        double cube_volume(int x){
            int y;
            y=x*x*x;
            return y;
        }

};
class Bordar
{
public:
    double two_point_distance(int x2,int x1,int y2,int y1){
        double z=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        return z;
    }
};
class Zavie
{
public:
	double deg_rad(float x)               //converts degree to radian
	{
		double y = x*PI / 180;
		return y;
	}
	double deg_grad(float x)              //converts degree to grad
	{
		double y = x * 200 / 180;
		return y;
	}
	double grad_rad(float x)              //converts grad to radian
	{
		double y = x*PI / 180;
		return y;
	}
	double grad_deg(float x)              //converts grad to degree
	{
		double y = x * 180 / 200;
		return y;
	}
	double rad_grad(float x)              //converts radian to grad
	{
		double y = x * 200 / PI;
		return y;
	}
	double rad_deg(float x)               //converts radian to degree
	{
		double y = x * 180 / PI;
		return y;
	}
};
class Tarkibiat
{
public:

int tabdil(int n, int r){
    int x=factorial(n)/factorial((n-r));
    return x;
}
int tarkib(int n, int r){
    int x=factorial(n)/(factorial(n-r)*factorial(r));
    return x;
}
};
#endif // HENDESE_H
