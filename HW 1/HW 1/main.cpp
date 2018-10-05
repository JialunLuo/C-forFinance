//
//  main.cpp
//  HW 1
//
//  Created by Jialun Luo on 9/4/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    //initiate integer variables
    int x, y, sum, product, squared;
    //prompt questions
    string ask_name = "Hello, what is your name? ";
    //string ask_int = "Please enter an integer: ";
    //initiate functions to be used
    
    string read_user_name(string ask_name);
    int read_integer(string ask_int);
    int add_two_integers(int x, int y);
    double divided_two_integers(int x, int y);
    int multiply_two_integers(int x, int y);
    int sqsum_two_integers(int x, int y);
    
    //store inputs
    string username = read_user_name(ask_name);
    x = read_integer("Please enter an integer: ");
    y = read_integer("Please enter another integer: ");
    sum = add_two_integers(x, y);
    double ratio = divided_two_integers(x, y);
    product = multiply_two_integers(x, y);
    squared = sqsum_two_integers(x, y);
    
    //print outputs to console
    cout << "Hello " << username << ", " << endl;
    cout << "the sum of " << x << " and " << y << " is " << sum << "; " << endl;
    cout << "the ratio of " << x << " and " << y << " is " << ratio <<  "; " << endl;
    cout << "the product of " << x << " and " << y << " is " << product <<  "; " << endl;
    cout << "the squared sum of " << x << " and " << y << " is " << squared <<  ". " << endl;
    
    return 0;
    
}

string read_user_name(string askname){
    string username;
    cout << askname;
    cin >> username;
    return username;
}

int read_integer(string ask_int){
    int x;
    cout << ask_int;
    cin >> x;
    return x;
}

int add_two_integers(int x, int y){
    return x+y;
}

double divided_two_integers(int x, int y){
    return (double)x/y;
}

int multiply_two_integers(int x, int y){
    return x*y;
}

int sqsum_two_integers(int x, int y){
    return pow(x,2)+pow(y,2);
}
