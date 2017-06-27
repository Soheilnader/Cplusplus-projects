#ifndef RIAZI_H
#define RIAZI_H
#include <math.h>
#include <iostream>
#include <conio.h>
#define PI 3.14159265


    // ////////////////////////////////////////Hendese/////////////////////////////// //
    //2D
    float circle_area(int x) {                         //calculates circle area by radius
            float y=x*x*3.14;
            return y;
        }
    float circle_periphery(int x) {                    //calculates circle periphery by radius
            float y=x*2*3.14;
            return y;
        }
    float square_area_side(int x){                     //calculates square area by side
            float y=x*x;
            return y;
        }
    float square_area_diameter(int x){                 //calculates square area by diameter
            float y=x*x/2.000;
            return y;
        }
    float square_periphery(int x){                     //calculates square periphery by side
            float y=x*x;
            return y;
        }
    float triangle_area_height(float x, int y){          //calculates triangle area by height and base
            float z=x*y/2;
            return z;
        }
    float triangle_area_sin(float x, float y, int z){      //calculates triangle area by two sides and an angle between them
            float a=0.5*x*y*sin(z*PI/180);
            return a;
        }

    //3D
    float sphere_area(int x) {                         //calculates sphere area by radius
            float y;
            y=4*x*x*3.14;
            return y;
        }
    float sphere_volume(int x) {                       //calculates sphere volume by radius
            float y;
            y=4/3*3.14*x*x*x;
            return y;
}
    float cube_area(int x){
            int y;
            y=x*x*6;
            return y;
        }
    float cube_area_janebi(int x){
            int y;
            y=x*4*x;
            return y;
        }
    float cube_volume(int x){
            int y;
            y=x*x*x;
            return y;
        }


    // ////////////////////////////////////////Bordar/////////////////////////////// //

    float two_point_distance(int x2,int x1,int y2,int y1){
        float z=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        return z;
    }

    // ////////////////////////////////////////Zavie/////////////////////////////// //

    float deg_rad(float x)               //converts degree to radian
    {
        float y = x*PI / 180;
        return y;
    }
    float deg_grad(float x)              //converts degree to grad
    {
        float y = x * 200 / 180;
        return y;
    }
    float grad_rad(float x)              //converts grad to radian
    {
        float y = x*PI / 180;
        return y;
    }
    float grad_deg(float x)              //converts grad to degree
    {
        float y = x * 180 / 200;
        return y;
    }
    float rad_grad(float x)              //converts radian to grad
    {
        float y = x * 200 / PI;
        return y;
    }
    float rad_deg(float x)               //converts radian to degree
    {
        float y = x * 180 / PI;
        return y;
    }

    // ////////////////////////////////////////Tarkibiat/////////////////////////////// //

    long int factorial(int x)       //factorial function
    {
        int y=1;
        for(int i=1;i<=x;i++)
            y=y*i;
        return y;
    }
    int tabdil(int n, int r){
    int x=factorial(n)/factorial((n-r));
    return x;
}
    int tarkib(int n, int r){
    int x=factorial(n)/(factorial(n-r)*factorial(r));
    return x;
}


    // ////////////////////////////////////////About////////////////////////////////// //
    void about_riazi()
    {
        std::cout<<"______ _           _   _   _                _           \n";
        std::cout<<"| ___ (_)         (_) | | | |              | |          \n";
        std::cout<<"| |_/ /_  __ _ _____  | |_| | ___  __ _  __| | ___ _ __ \n";
        std::cout<<"|    /| |/ _` |_  / | |  _  |/ _ \\/ _` |/ _` |/ _ \\ '__|\n";
        std::cout<<"| |\\ \\| | (_| |/ /| | | | | |  __/ (_| | (_| |  __/ |   \n";
        std::cout<<"\\_| \\_|_|\\__,_/___|_| \\_| |_/\\___|\\__,_|\\__,_|\\___|_|   \n";
        std::cout<<"==========================================================\n";
        std::cout<<"By: Soheil Soheil Nadernezhad\n";
        std::cout<<"github.com/Soheilnader";
    }

#endif // RIAZI_H
