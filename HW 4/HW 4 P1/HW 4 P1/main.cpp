//
//  main.cpp
//  HW 4 P1
//
//  Created by Jialun Luo on 9/25/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
#include "myheader.h"
using namespace std;


int main() {
    
    int dig, n;
    cout << "Enter an integer number to sum all its digits: ";
    cin >> dig;
    cout << sum_of_digits(dig) << "\n\n";
    
    cout << "Enter an integer n to calculate nth gold mean ratio: ";
    cin >> n;
    cout << gold_mean_ratio(n) << "\n\n";
    
    return 0;
    
    
}
