//
//  main.cpp
//  Arrays
//
//  Created by Arun Godwin Patel on 07/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    const int a = 3; // we must define this first, so that the computer knows how many elements will be stored next to each other
    
    int array[a]; // TYPE NAME[SIZE=NUMBER OF ELEMENTS]
    
    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    
    cout << "array [0] = " << array[0] << ", address: " << &array[0] << endl; // & gives address of a variable in hexadecimal
    cout << "array [1] = " << array[1] << ", address: " << &array[1] << endl;
    cout << "array [2] = " << array[2] << ", address: " << &array[2] <<  endl;
    
    /*
     
     0 1 2 3 4 5 6 7 8 9 a b c d e f : 16 numbers, hexadecimal
     let's see what the following number hexadecimal represents:
     1 2 a = 1*16^2 + 2*16^1 + a*16^0 = 256 + 32 + 10 = 290
     
     If you run the above program and look at the addresses, you will notice that the last character are all a distance of 4 apart... this is because each element of the array takes up 4 BYTES in the memory and they are all stored next to each other.
     
     */
    
    if (&array[0] == array)
        cout << "Yep, we live in the same place!" << endl;
    
    ////////// multidimensional arrays
    
    int biArray[3][4] = {0}; // This is a 4x3 matrix, 4 columns, 3 rows (containers)
    
    cout << &biArray[0] << endl;
    cout << &biArray[0][0] << endl;
    cout << &biArray[0][1] << endl;
    cout << &biArray[0][2] << endl;
    cout << &biArray[0][3] << endl;
    cout << &biArray[1] << endl;
    cout << &biArray[1][0] << endl;
    
    // Look at the addresses again! Each element lives 4 BYTES away from the previous
    
    return 0;
    
}
