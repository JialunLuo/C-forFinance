//
//  main.cpp
//  Sorting
//
//  Created by Jialun Luo on 9/30/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "sorting.hpp"
using namespace std;

int main() {

    ifstream char_in("dataChar");
    ifstream double_in("dataDouble");
    ifstream string_in("dataString");
    ofstream char_out("sortedChar.txt");
    ofstream double_out("sortedDouble.txt");
    ofstream string_out("sortedString.txt");
    if (!char_in) {
        cout << "can't open dataChar file to read\n";
        exit(1);
    }
    if (!char_out) {
        cout << "can't open sortedChar.txt file to write\n";
        exit(2);
    }
    if (!double_in) {
        cout << "can't open dataDouble file to read\n";
        exit(1);
    }
    if (!double_out) {
        cout << "can't open sortedDouble.txt file to write\n";
        exit(2);
    }
    if (!string_in) {
        cout << "can't open dataString file to read\n";
        exit(1);
    }
    if (!string_out) {
        cout << "can't open sortedString.txt file to write\n";
        exit(2);
    }


    int c_c = 0;
    int c_d = 0;
    int c_s = 0;
////////////////////////////////////////
    char array_ch[100];
    //read file into an array of larger size
    while (char_in) {
        char_in>>array_ch[c_c];
        //when load file into the array, also count the size
//        cout<< c_c <<": "<<array_ch[c_c]<<" ";
        c_c=c_c+1;
    }
    
    
    mySort(array_ch, c_c - 1);//Have to use c_c - 1 because the array read from file include an eof char
    for (int i=0; i<c_c-1; i++) {
        ////////WWWWW
        ////////EEEEE
        ////////IIIII
        ////////RRRRR
        ////////DDDDD
        ////////a random char in the front
        char_out << array_ch[i] << " ";
    }

    
    
    
/////////////////////////////////////////
    double array_db[100];
    //read file into an array of larger size
    
    while (double_in) {
        double_in>>array_db[c_d];
        c_d=c_d+1;
    }
    

    mySort(array_db, c_d);
    for (int i=0; i<c_d; ++i) {
        //cout<<array_db[i]<<" ";
        double_out << array_db[i] << " ";
    }
    
    /////////////////////////////////////////
    string array_st[100];
    //read file into an array of larger size
    
    while (!string_in.eof()) {
        string_in>>array_st[c_s];
        //when load file into the array, also count the size
        //        cout<< c_d <<": "<<array_db[c_d]<<" ";
        c_s=c_s+1;
    }
    
    
    mySort(array_st, c_s);
    for (int i=0; i<c_s; ++i) {
        //cout<<array_st[i]<<" ";
        string_out << array_st[i] << " ";
    }

    char_in.close();
    char_out.close();
    double_in.close();
    double_out.close();
    string_in.close();
    string_out.close();
    return 0;
}


