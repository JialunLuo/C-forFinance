//
//  my_area.cpp
//  HW 2
//
//  Created by Jialun Luo on 9/11/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//
#include <iostream>
#include "my_area.h"
#include <math.h>

//area of a circle given its radius
double area(double r){
    return M_PI * pow(r,2);
}

//area of a rectangle given its width and length
double area(double w, double l){
    return w * l;
}

//area of a triangle given lengths of 2 sides and the angle between these two sides
double area(double a, double b, double angle){
    return a * b * sin(angle) / 2;
}
