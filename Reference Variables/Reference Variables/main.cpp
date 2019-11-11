//
//  main.cpp
//  Reference Variables
//
//  Created by Arun Godwin Patel on 16/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int, int);

int main() {

    string name = "Agnes";
    cout << "Value of variable is: " << name << ", address is: " << &name << endl;
    
    string &nr_6 = name; // this is a reference for the variable name, almost like a nickname
    cout << "Value of variable is: " << nr_6 << ", address is: " << &nr_6 << endl;
    
    nr_6 = "Scott"; // this will now change both name and nr_6
    
    cout << "Value of variable is: " << name << ", address is: " << &name << endl;
    cout << "Value of variable is: " << nr_6 << ", address is: " << &nr_6 << endl;
    
    // note, the & for the reference variable is different to the & for the address
    // if we use an & after a type, it is a reference, if it is doesnt have a type, then it is an address
    // reference variables also cannot change associations/connections, e.g. nr_6 is now always associated with name. You can change it's value, but not it's association
    // reference variabes must be the same type as associated variables
    
    /////// reference variables in functions
    
    int a = 10, b = 25;
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    swap(a, b);
    
    return 0;
    
}

void swap(int x, int y) {
    int t;
    // let's say we want to swap the values in a and b
    t = x; // t = 10
    x = y; // a = 20
    y = t; // b = 10;
    
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

