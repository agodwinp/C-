//
//  main.cpp
//  Functions
//
//  Created by Arun Godwin Patel on 09/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int globalVariable;

void welcome(); // if our function is not returning anything, use void to return nothing, this is informing the compiler than at some point, the function will need 'welcome'. This is called a 'prototype', it tells the program that there is a function called welcome coming and so it is able to run the main function, then it refers to the welcome body at the end of the program. We use void because we are not returning any value, usually we use a data type instead of void if we return something.

bool isNumber(string);
void enterName();
double add(double a, double b) {return a + b;} // you can use inline functions too
void changeValueTo10(int x) {x = 10;}

int main() {
    
    welcome();
    enterName();
    cout << add(6, 5) << endl;
    int a = 5;
    changeValueTo10(a);
    cout << a << endl;
    return 0;
    
}

// FUNCTIONS

void welcome() { // welcome function
    cout << "This is a function..." << endl;
}

bool isNumber(string tmp) { // checking if string is a number function
    if (tmp[0] == '0')
        return false;
    for (int i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
        {
            return false;
            break;
        }
    }
    return true;
}

void enterName() { // enter name function
    string tmp;
    
    cout << "Enter the number: " << endl;
    cin >> tmp;
    
    if (isNumber(tmp))
        cout << "Number entered properly" << endl;
    else
        cout << "Number wasn't entered properly" << endl;
}
