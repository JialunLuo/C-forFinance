//
//  moving_disk.cpp
//  HW 4 Bonus
//
//  Created by Jialun Luo on 9/26/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//
#include <iostream>
using namespace std;
void move_rings(int n, char from, char to, char spare){
    if (n == 1){
        cout << "Move from "<< from <<" to "<< to <<"\n";
    }
    else {
        move_rings(n-1, from, spare, to);
        move_rings(1, from, to, spare);
        move_rings(n-1, spare, to, from);
    }
}
