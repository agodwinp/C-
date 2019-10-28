//
//  main.cpp
//  Functions and Pointers
//
//  Created by Arun Godwin Patel on 18/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

//void multiplyBy(int &, int);
void multiplyBy(int *, int);
void multiplyArrayBy(int *, int, int);
int main() {
    /*
    int a = 10;
    multiplyBy(&a, 50);
    cout << a << endl;
    */
    
    int array[10];
    int a_size = sizeof(array)/sizeof(array[0]);
    cout << "array size: " << a_size << endl;
    
    for (int i = 0; i < a_size; i++) {
        array[i] = i;
        cout << "array [" << i << "] = " << array[i] << endl;
    }
    
    cout << endl << endl << endl;
    
    multiplyArrayBy(array, 5, a_size); // have to send size of array to a function when iterating through an array
    for (int i = 0; i < a_size; i++) {
        cout << "array [" << i << "] = " << array[i] << endl;
    }
    
    
    return 0;
}

void multiplyBy(int * var, int amount) {
    *var *= amount;
}

void multiplyArrayBy(int * array, int amount, int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++) {
        array[i] = array[i]*amount;
    }
}


