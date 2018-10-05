//
//  sorting.cpp
//  Sorting
//
//  Created by Jialun Luo on 9/30/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//
#include <string>
#include <iostream>

using namespace std;

void mySwap(char &ra, char &rb){
    char temp;
    temp = ra;
    ra = rb;
    rb = temp;
    return;
}

void mySwap(double &rc, double &rd){
    double temp;
    temp = rc;
    rc = rd;
    rd = temp;
    return;
}

void mySwap(string &re, string &rf){
    string temp;
    temp = re;
    re = rf;
    rf = temp;
}


void mySort(char arr[], int size_of_array){

    if (size_of_array<=1){
        return;
    }

    for (int c = 0; c < size_of_array - 1; c++){
        for(int i=0; i < size_of_array - 1; i++){
            if (arr[i]>arr[i+1]) {
                
                mySwap(arr[i], arr[i+1]);
                
            }
        }
    }
}

void mySort(double arr[], int size_of_array){
    
    if (size_of_array<=1){
        return;
    }
    for (int c = 0; c < size_of_array - 1; c++){
        for(int i=0; i < size_of_array - 1; i++){
            if (arr[i]>arr[i+1]) {
                
                mySwap(arr[i], arr[i+1]);
                
            }
        }
    }
}

void mySort(string arr[], int size_of_array){
    
    if (size_of_array<=1){
        return;
    }
    for (int c = 0; c < size_of_array - 1; c++){//assume worst case
        for(int i=0; i < size_of_array - 1; i++){
            if (arr[i]>arr[i+1]) {
                
                mySwap(arr[i], arr[i+1]);
                
            }
        }
    }
}
