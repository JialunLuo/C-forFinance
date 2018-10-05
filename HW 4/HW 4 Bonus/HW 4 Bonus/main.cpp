//
//  main.cpp
//  HW 4 Bonus
//
//  Created by Jialun Luo on 9/24/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
#include "moving_disk.hpp"
using namespace std;


int main() {
    int n;
    cout << "How many rings in stack A? ";
    cin >> n;
    move_rings(n, 'A', 'C', 'B');
    return 0;
}

