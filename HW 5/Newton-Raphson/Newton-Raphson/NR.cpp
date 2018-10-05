//
//  NR.cpp
//  Newton-Raphson
//
//  Created by Jialun Luo on 10/2/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//
#include <math.h>
#include <iostream>
using namespace std;
//implement 3 functions and their first derivatives
double f1(double x){
    return (4 * pow(x,2) - 8 * x - 5);
}
double d1(double x){
    return (8 * x - 8);
}
double f2(double x){
    return (exp(-pow(x,2)) - x);
}
double d2(double x){
    return (-2 * x * exp(-pow(x,2)) - 1);
}
double f3(double x){
    return (log(2*x/M_PI) + sin(x));
}
double d3(double x){
    return (cos(x)+(1/x));
}


//////////////////////
//implement Newton-Raphson Method
double newton_raphson(double x0, int f, double prec){
    double h;
    switch (f) {
        case 1:
            h = (f1(x0)/d1(x0));
            while (abs(h) > prec){
                h = (f1(x0)/d1(x0));
                x0 = x0 - h;
            }
            break;
        case 2:
            h = (f2(x0)/d2(x0));
            while (abs(h)> prec){
                h = (f2(x0)/d2(x0));
                x0 = x0 - h;
            }
            break;
        case 3:
            h = (f3(x0)/d3(x0));
            while (abs(h) > prec){
                h = (f3(x0)/d3(x0));
                x0 = x0 - h;
            }
            break;
            
        default:
            break;
    }
    return x0;//
}
