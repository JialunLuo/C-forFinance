//
//  main.cpp
//  Vector
//
//  Created by Jialun Luo on 10/2/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "vector.hpp"
using namespace std;

int main() {
    ifstream infile("dataVector");
    ofstream outfile("result.txt");
    if (!infile) {
        cout << "can't open dataVector file to read\n";
        exit(1);
    }
    if (!outfile) {
        cout << "can't open result.txt file to write\n";
        exit(2);
    }
    
    double arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            infile>>arr[i][j];
        }
    }
    double vec1[4] = {arr[0][0],arr[0][1],arr[0][2],arr[0][3]};
    double vec2[4] = {arr[1][0],arr[1][1],arr[1][2],arr[1][3]};
    double vec3[4] = {arr[2][0],arr[2][1],arr[2][2],arr[2][3]};
    double vec4[4] = {arr[3][0],arr[3][1],arr[3][2],arr[3][3]};
    
    double sumVector[4];
    double angle;
    addVectors(vec1, vec2, sumVector, 4);
    addVectors(sumVector, vec3, sumVector, 4);
    addVectors(sumVector, vec4, sumVector, 4);
    
    outfile << "i.\n(" ;//FIXME: seems like printing out memory address
    int n;
    for (n = 0; n < 3; n++){
       outfile<< sumVector[n] << ", ";
    }
    outfile<< sumVector[n]<<")\n";
    
    outfile << "ii.\n" << lenVector(vec1, 4) << " " << lenVector(vec2, 4) << " "
    << lenVector(vec3, 4) << " " << lenVector(vec4, 4) << endl;
    outfile <<"iii.\ndot product: " << dotVectors(vec1, vec2, 4, angle)<<", angle: "<<angle<<"\n";
    outfile <<"dot product: "<< dotVectors(vec1, vec3, 4, angle)<<", angle: "<<angle<<"\n";
    outfile <<"dot product: "<< dotVectors(vec1, vec4, 4, angle)<<", angle: "<<angle<<"\n";
    outfile <<"dot product: "<< dotVectors(vec2, vec3, 4, angle)<<", angle: "<<angle<<"\n";
    outfile <<"dot product: "<< dotVectors(vec2, vec4, 4, angle)<<", angle: "<<angle<<"\n";
    outfile <<"dot product: "<< dotVectors(vec3, vec4, 4, angle)<<", angle: "<<angle<<"\n";
    
    return 0;
}
