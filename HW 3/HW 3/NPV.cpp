//
//  NPV.cpp
//  HW 3
//
//  Created by Jialun Luo on 9/17/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//


#include <math.h>
//1. Declares a global variable and initialize it to zero
double gRiskFreeRate = 0;
//2. A function riskfree_NPV that calculates the Net Present Value of a riskfree cash payment
double riskfree_NPV(double pmt, double nyrs) {
    
    return pmt*exp(-(gRiskFreeRate*nyrs));
    
}
//3. A function risky_NPV that calculates the Net Present Value of a risky cash payment
double Risky_NPV(double pmt, double nyrs, double alpha) {
    
    return pmt*exp(-(gRiskFreeRate + alpha)*nyrs);
    
}
