//
//  main.cpp
//  Dynamic Allocation of Memory
//
//  Created by Arun Godwin Patel on 17/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    /*
    // how is it done normally?
    //int array[100]; // 100 x 4 bytes allocated next to each other.
    // when the program runs until it is stopped, the compiler is reserving 400 bytes of memory that cannot be used by other programs
    int amount;
     */
     
    int amount;
    
    cout << "how many numbers would you like to store in an array? " << endl;
    cin >> amount;
    
    int *p = new (nothrow) int[amount]; // this will avoid it throwing an error if we choose a number too large
    
    if (p != NULL) {
        for (int i=0; i<amount; i++) {
            cout << "Enter the " << (i+1) << " number: " << endl;
            cin >> p[i];
        }
        
        for (int i=0; i<amount; i++) {
            cout << "p[" << i << "] = " << p[i] << endl;
        }
    }
    else {
        cout << "Not enough memory " << endl;
    }
    
    delete []p;
    
    /*
     
    //int array[amount]; // by creating the array after user input, we are trying to reserve space for something, that is outside of our program... not good
    
    { // using these brackets means that outside of them, the variables are not available
        int *p = new int; // telling our computer that we need a free space after compiling
        *p = 50;
    
        cout << *p << endl; // if we run this, everytime we run it it will point to a different address, this is because we are dynamically allocating the memory
        delete p; // this just releases the address
        p = NULL;
        cout << *p << endl;
    }
    
     */
    
    return 0;
    
}
