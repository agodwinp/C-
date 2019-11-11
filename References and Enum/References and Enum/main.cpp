//
//  main.cpp
//  References and Enum
//
//  Created by Arun Godwin Patel on 15/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;
// enumeration type is a type, that can define its own type
// enumeration means counting

enum dayOfWeek {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; // dayOfWeek is not really a variable, its a type... so in {} we now need to declare the set of what can be assigned to it

string getDay(dayOfWeek);

int main() {
    
    //dayOfWeek d = Monday;
    
    /*
     
    dayOfWeek e = Tuesday;
    cout << d << " " << e << endl;
    // this will output 0 1, because for each element in the set of possible values dayOfWeek - it is enumerating from 0, 1, 2, 3, 4, 5, 6 in this case...
    
    // d = 0; you can't reassign an enum because you can't convert from dayOfWeek to int
    
    cout << dayOfWeek(Tuesday) << endl;
    // we can use enum like a function too, this above line will output 1
    // you can assign specific values to each enumeration by assigning the element
    // e.g. ... {Monday = 5, Tuesday = 7, ... in this case Wednesday will = 8 because without assigning it just increased by 1
    
    */
    
    int i;
    cout << "Enter the day of the week: " << endl;
    cout << "1. Monday" << endl;
    cout << "2. Tuesday" << endl;
    cout << "3. Wednesday" << endl;
    cout << "4. Thursday" << endl;
    cout << "5. Friday" << endl;
    cout << "6. Saturday" << endl;
    cout << "7. Sunday" << endl;
    cin >> i;
    
    cout << getDay(dayOfWeek(i-1)) << endl;
    
    return 0;
}

string getDay(dayOfWeek d) {
    switch(d)
    {
        case Monday:
            return "Monday";
        case Tuesday:
            return "Tuesday";
        case Wednesday:
            return "Wednesday";
        case Thursday:
            return "Thursday";
        case Friday:
            return "Friday";
        case Saturday:
            return "Saturday";
        case Sunday:
            return "Sunday";
        default:
            return "You typed something wrong...";
    }
}
