//
//  main.cpp
//  HW 2
//
//  Created by Jialun Luo on 9/11/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
#include <math.h>
#include "my_area.h"
#include "my_volume.h"
using namespace std;

int main() {
    //    a. A circle with radius 2.5
    cout << "a. The area of a circle with radius 2.5 is " << area(2.5) << ". " << endl;
    //    b. A 1.5 x 2.5 rectangle
    cout << "b. The area of a rectangle with height 1.5 and length 2.5 is " << area(1.5, 2.5) << ". " << endl;
    //    c. An equal lateral triangle with side length 1
    cout << "c. The area of an equal lateral triange with side length 1 is " << area(1, 1, M_PI/3) << ". " << endl;
    //    d. A unit sphere
    cout << "d. The volume of a unit sphere is " << volume(1) << ". " << endl;
    //    e. A cylinder of radius 1 and height 4
    cout << "e. The volume of a cylinder of radius 1 and height 4 is " << volume(1, 4) << ". " << endl;
    //    f. A 2.5x4.2x6 rectangular prism
    cout << "f. The volume of a 2.5 x 4.2 x 6 rectangular prism is " << volume(2.5, 4.2, 6)  << ". " << endl;
    
    return 0;
}
