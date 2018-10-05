//
//  main.cpp
//  Newton-Raphson
//
//  Created by Jialun Luo on 10/2/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//
#include "NR.hpp"
#include <iostream>
using namespace std;

int main() {
    bool go = true;
    int op = 0;
    while (go){
        cout << "Enter function number to continue(1, 2 ,3): ";
        cin >> op;
        if ((op == 1)||(op == 2)||(op == 3)){
            go = false;
        }
    }
    cout <<"The root for this function is: "<< newton_raphson(3, op, 0.0001)<<endl;
    return 0;
}
