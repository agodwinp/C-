//
//  main.cpp
//  Pointers
//
//  Created by Arun Godwin Patel on 17/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    /*
     so far we know how to store strings, integers, floats etc...
     but there is one more thing that we don't know how to store, and this is the address of a variable
     so we need a variable that can store addresses
     
     to do this, we need to use the type that we want to point to
        - then an asterisk
     
     pointers are ordinary variables that can store addresses of variables
     
    */
    
    int var = 5;
    int a = 30;
    int * p; // this variable can point (store) as a value the address of a variable that is of type 'int'
    // this asterisk here is used to INFORM the program that this variable is a pointer, so it is a variable that can point to the address of another variable
    p = &var;
    cout << "address: " << &var << " pointer: " << p << endl;
    
    /*
     Now let's see how we can get a value, just by having the address
    */
    
    cout << "this is the address: " << p << endl;
    cout << "and this is the value: " << *p << endl; // this asterisk is used to get value from indicated (pointed) area in our memory (address)
    
    // but we can also change the value that the pointer is pointing at
    *p = 20;
    
    cout << "var: " << var << endl;
    cout << "*p: " << *p << endl;
    
    var = 60;
    
    cout << "var: " << var << endl;
    cout << "*p: " << *p << endl;\
    
    // Now let's switch where p is pointing
    
    p = &a;
    cout << "var: " << var << endl;
    cout << "*p: " << *p << endl;
    
    // sometimes we don't want to allow the changing of where our pointer is pointing to
    // we can prevent this, by using the constant pointer, 'int * const p = &var;'
    
    int * const p_const = &a; // this is a pointer that has to be initialised when defined, because it can't be changed after definition of what it's pointing to (address)
    const int * p_2 = &a; // this is a pointer that cannot change the VALUE that it is pointing to
    const int * const p_3 = &a; // this is a pointer that cannot change the VALUE that it's address is pointing to, and it cannot change the address that it's pointing to
    
    // the pointers also live somewhere in the memory, therefore they have an address too
    
    int ordinary_var = 10;
    int *ordinary_p = &ordinary_var;
    cout << "ordinary_var: " << ordinary_var << endl; // integer value
    cout << "&ordinary_var: " << &ordinary_var << endl; // address of value
    cout << "ordinary_p: " << ordinary_p << endl; // address
    cout << "*ordinary_p: " << *ordinary_p << endl; // integer value from pointed place
    cout << "&ordinary_p: " << &ordinary_p << endl; // address of pointer itself
    
    int ** p_pointing_to_address_of_pointer = &ordinary_p;
    
    cout << "p_pointing_to_address_of_pointer: " << p_pointing_to_address_of_pointer << endl;
    
    ///////// Name of array - pointer
    
    cout << endl << endl << endl;
    
    int b[3]; // an array is always continuous, meaning that the elements of an array (3 in this case) are always stored next to each other
    b[0] = 10;
    b[1] = 15;
    b[2] = 24;
    short int zm;
    int * const t = &b[0];
    
    cout << b << endl;
    cout << t << endl;
    cout << &b[0] << endl;
    cout << &b[1] << endl;
    cout << &b[2] << endl;
    
    cout << endl << endl << endl;
    
    cout << b << endl;
    cout << b + 1 << endl; // by using +1, what this does is it moves 1 position allocated to the memory along, i.e for an integer it moves 4 along, for a double it moves 8
    cout << b + 2 << endl;
    
    cout << endl << endl << endl;
    
    cout << *b << endl;
    cout << *(b + 1) << endl; // by using +1, what this does is it moves 1 position allocated to the memory along, i.e for an integer it moves 4 along, for a double it moves 8
    cout << *(b + 2) << endl;
    
    cout << endl << endl << endl;
    
    cout << b[0] << endl;
    cout << b[1] << endl; // by using +1, what this does is it moves 1 position allocated to the memory along, i.e for an integer it moves 4 along, for a double it moves 8
    cout << b[2] << endl;
    
    cout << endl << endl << endl;
    
    int * p2 = &b[0];
    cout << *p2 << endl;
    cout << ++*p2 << endl;
    cout << *++p2 << endl;
    cout << *p2++ << endl;
    cout << *p2 << endl;
    
    /*
     need to be careful with pointers, because sometimes you can point to something
     that is not being used by our program... when this happens, the program stops
    */
    
    
    
    return 0;
}
