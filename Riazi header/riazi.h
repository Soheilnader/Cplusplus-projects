#ifndef HENDESE_H
#define HENDESE_H
#include <math.h>

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
            double a=abs(0.5*x*y*sin(z));
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
#endif // HENDESE_H
