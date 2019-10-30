//
//  main.cpp
//  Loops
//
//  Created by Arun Godwin Patel on 07/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    ////// for
    
    /*
     
     for (initialisation; condition; inc/dec)
     {
        instruction
     }
     
     initialisation is the first thing that is executed, and won't be repeated again
     then PC will check the condition. condition is true when not = 0
     if this condition is met, then the instruction to repeat will be executed 1 time
     
     */
    
    for (int i = 0; i < 5; i++)
        cout << i << endl;
    
    cout << "Now we're done" << endl;
    
    int array[4];
    
    for (int i = 0; i < 4; i++)
        array[i] = 3;
        
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    
    // with {}
    
    /*for (int i = 0; i < 10; i++)
    {
        array[i] = i;
        cout << array[i] << endl;
    }
     */
    
    ////// while and do while
    
    int i = 0;
    
    while (i++ < 10)
    {
        cout << i << endl;
    }
    
    int j = 0;
    
    while (++j < 10)
    {
        cout << j << endl;
    }
    
    int k = 10;
    
    while (--k) // without a condition, it just keeps looping until false (0), so until k = 0
    {
        cout << k << endl;
    }
    
    // array
    
    const int SIZEOFARRAY = 10;
    int l = 0;
    int bigArray[SIZEOFARRAY];
    
    while (l < SIZEOFARRAY) // without a condition, it just keeps looping until false (0), so until k = 0
    {
        bigArray[l] = 10*l;
        cout << bigArray[l] << endl;
        l++;
    }
    
    // do while
    int m = 0;
    do {
        cout << "Butt" << endl;
        m++;
    } while(m<5); // the difference here is that the condition is checked after each loop, whereas with a for or while loop, the condition is checked before the execution of the operation.
        
    
    return 0;
}
