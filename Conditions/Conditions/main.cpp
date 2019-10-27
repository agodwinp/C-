//
//  main.cpp
//  Conditions
//
//  Created by Arun Godwin Patel on 07/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int a = 9, b = 10;
    
    /*
    
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    
    if (a > b)
        cout << a << " > " << b << endl;
     
     */
    
    if (7 > 4)
    {
        cout << "something" << endl;
        cout << "test" << endl;
    }
    
    // {} are used to group instructions after a conditional
    
    if (2223212.111)
        cout << "condition above is surely not equal to 0";
    
    if (7 < 4 || 0 < 10)
        cout << "7 < 4 || 0 < 10" << endl;
    
    if ((7 < 4 || 0 < 10) && (10 == 9))
        cout << "7 < 4 || 0 < 10 haha" << endl;
    
    if (a > b)
        cout << a << " > " << b << endl;
    else if (a < b)
    {
        cout << a << " < " << b << endl;
        if (a < 10)
            cout << "a is smaller than 10" << endl;
    }
    else
        cout << "this instruction is only executed if all of the conditions aren't met";
    
    
    // used to switch between cases depending on the value of the variable
    
    int x = 50;
    
    switch (x)
    {
        case 0:
            cout << "this is a place for the instructions to be executed when switch value = 0" << endl;\
            break;
        case 25:
            cout << "this is a place for the instructions to be executed when switch value = 25" << endl;
            break;
        case 50:
            cout << "this is a place for the instructions to be executed when switch value = 50" << endl;
            break;
        default:
            cout << "this is a place for the instructions to be executed when value of switched variable is not equal to any case" << endl;
        // once a case is true, it then executes every instruction up to the final '}' unless there is a break
    }
    
    // for switch, we can only use variable that is char or int
    
    // conditional operator
    int c = 25, d = 20;
    
    // CONDITION ? so instruction that will be executed if condition is true : if condition is not true
    string message = (c > d) ? "c > d": "c <= d";

    
    cout << ((c > d ? c : d) + 10) << endl;
    
    return 0;

}
