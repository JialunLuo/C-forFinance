//
//  myfunctions.cpp
//  HW 4 P1
//
//  Created by Jialun Luo on 9/24/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//
#include <iostream>
using namespace std;
//a function sums all digits of an integer
int sum_of_digits(int i) {
    //the function should ignore negative sign
    if (i < 0) {
        i = -i;
    }
//    //check if this integer is single digit
    if (i < 10){
        return i;
    }
    //recursively add the right digit to the left
    else {
        return i%10 + sum_of_digits(i/10);
    }
}

//a function calculates nth gold mean ratio
double gold_mean_ratio(int n){
    
    //when n is 0, exit the function
    if (n==0){
        return 1;
    }
    //otherwise, recursively calculate
    else {
        n--;
        //use n as counter to track number of calculations left
        return 1.0/(1 + gold_mean_ratio(n));
    }
    
    
}
