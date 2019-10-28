//
//  main.cpp
//  Overloading Functions
//
//  Created by Arun Godwin Patel on 11/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int power(int, int);
double power(double, int); // we can have 2 functions of the same name, but with different types

// this is called overloading functions, because we are overloading the name

int main() {
    cout << power(2.57585, 3) << endl;
    return 0;
}

int power(int b, int e) {
    int tmp = b;
    while(e-- > 1) {
        b *= tmp;
    }
    return b;
}

double power(double b, int e) {
    double tmp = b;
    while(e-- > 1) {
        b *= tmp;
    }
    return b;
}

