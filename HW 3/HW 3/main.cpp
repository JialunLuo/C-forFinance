//
//  main.cpp
//  HW 3
//
//  Created by Jialun Luo on 9/17/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
#include "NPV.h"
using namespace std;

int main() {
    gRiskFreeRate = 0.035;
    double result1 = riskfree_NPV(1000, 1.5);
    double result2 = Risky_NPV(1000, 1.0, 0.15);
    cout << "\tThe riskfree NPV of a cash payment of $1000 in 1.5 year of time is " << result1 << endl;
    cout << "\tThe risky NPV of a cash payment of $1000 from a CCC rated company in 1 year of time, using the default probability alpha=0.15 per year, is " << result2 << endl;
    return 0;
}
