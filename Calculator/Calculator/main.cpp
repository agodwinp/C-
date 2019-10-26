//
//  main.cpp
//  Calculator
//
//  Created by Arun Godwin Patel on 07/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double var1, var2;
    
    beginning:
    //system("cls"); // this will clear the console output
    
    cout << "Enter first number: ";
    cin >> var1;
    cout << "Enter second number: ";
    cin >> var2;
    
    cout << "What do you want to do with these numbers?" << endl;
    cout << "Add +" << endl;
    cout << "Subtract -" << endl;
    cout << "Multiply *" << endl;
    cout << "Divide /" << endl;
    
    char decision;
    cin >> decision;
    
    switch (decision)
    {
        case '+':
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        case '-':
            cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
            break;
        case '*':
            cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
            break;
        case '/':
            if (var2) // this means is var2 is anything but 0, ==> this is = to var2 != 0
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
            else
                cout << "You can't divide by 0..." << endl;
            break;
        default:
            cout << " You typed the wrong character..." << endl;
    }
    
    char decision2;
    cout << "Do you want to continue? (Y/N) ";
    cin >> decision2;
    
    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning;
    
    return 0;
    
}
