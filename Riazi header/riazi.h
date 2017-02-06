#ifndef HENDESE_H
#define HENDESE_H
#include <math.h>

class Hendese
{
public:
    //2D
        double circle_space(int x) {
            double y=x*x*3.14;
            return y;
        }
        double circle_periphery(int x) {
            double y=x*2*3.14;
            return y;
        }
        double square_space_side(int x){
            double y=x*x;
            return y;
        }
        double square_space_diameter(int x){
            double y=x*x/2.000;
            return y;
        }
        double square_periphery(int x){
            double y=x*x;
            return y;
        }
        double triangle_space_height(int x, int y){
            double z=x*y/2;
            return z;
        }
        double triangle_space_sin(int x, int y, int z){
            double a=abs(0.5*x*y*sin(z));
            return a;
        }

        //3D
        double sphere_space(int x) {
            double y;
            y=4*x*x*3.14;
            return y;
        }
        double sphere_hajm(int x) {
            double y;
            y=4/3*3.14*x*x*x;
            return y;
}
        double cube_space(int x){
            int y;
            y=x*x*6;
            return y;
        }
        double cube_space_janebi(int x){
            int y;
            y=x*4*x;
            return y;
        }
        double cube_hajm(int x){
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
