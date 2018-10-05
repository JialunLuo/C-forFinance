//
//  main.cpp
//  HW 4 P2
//
//  Created by Jialun Luo on 9/24/18.
//  Copyright © 2018 Jialun Luo. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char option;
    bool go = true;
    while(go){
        cout << "Do you want to play (Y/N)? ";
        cin >> option;
        int c = 0;//why cannot initiate inside the switch???
        switch (option) {
            case 'Y':
            case 'y':
                int n;
                cout << "Please enter a positive number: ";
                cin >> n;
                //use while instead of if because user may input negative number again
                while (n <= 0) {
                    cout << "try again: ";
                    cin >> n;
                }
                //create a counter to track number of steps
                while (n!=1){
                    if (n%2 == 0) {
                        n/=2;
                    } else {//an integer is either even or odd
                        n = n*3+1;
                    }
                    c++;
                }

                cout << "it took " << c << " steps to reduce " << n << " to 1.\n\n";
                
                break;
                
            default:
                go = false;
                break;
        }
    }
    return 0;
}
