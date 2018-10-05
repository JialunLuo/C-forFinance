//
//  my_volume.cpp
//  HW 2
//
//  Created by Jialun Luo on 9/11/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include "my_volume.h"
#include <math.h>
#include "my_area.h"

//volume of sphere given its radius
double volume(double r){
    return pow(r,3) * M_PI * 4 / 3;
}
//volume of a cylinder given its radius and height
double volume(double r, double h){
    return area(r) * h;
}
//volume of a rectangular prism given its width, length, and height
double volume(double w, double l, double h){
    return w * l * h;
}
