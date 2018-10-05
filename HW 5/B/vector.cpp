//
//  vector.cpp
//  Vector
//
//  Created by Jialun Luo on 10/2/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <math.h>
#include <iostream>
using namespace std;
void addVectors(double vec1[], double vec2[], double sum[], int size){
    for (int i = 0; i < size; i++){
        sum[i] = vec1[i] + vec2[i];
    }
}

double lenVector(double vec[], int size){
    double ssq = 0;
    for (int i = 0; i < size; i++){
        //cout<<vec[i]<<endl;
        ssq+=pow(vec[i], 2);
    }
    return sqrt(ssq);
}

double dotVectors(double vec1[], double vec2[], int size, double &angle){
    double result = 0;
    for (int i = 0; i < size; i++){
        result += vec1[i]*vec2[i];
    }
    angle = acos(result/(lenVector(vec1, size)*lenVector(vec2, size)));
    return result;
}
