//
//  main.cpp
//  Nested Loops
//
//  Created by Arun Godwin Patel on 08/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int nr = 1234; // 4 digits
    int nrOfDigits = 1;
    
    cout << 1234 / 10 << endl;
    cout << 123 / 10 << endl;
    cout << 12 / 10 << endl;
    cout << 1 / 10 << endl;
    
    int tmp = nr;
    
    while (tmp /= 10) // tmp = 1234, then 123, then = 12, then = 1, then = 0 <- then it stops!
        nrOfDigits ++;
    
    cout << "the number " << nr << " has " << nrOfDigits << " digits" << endl;
    
    // nested loops
    
    /*
     
     1  2  3  4  5   6   7   8   9   10
     2  4  6  8  10  12  14  16  18  20
     3  6  9  12  ...
     4  8  12  ...
     5  10 ...
     
     we mutliply the new line, by the top line
     
     */
    
    for (int i = 1; i <= 10; i++) // amount of rows, length of columns
    {
        for (int j = 1; j <= 10; j++) // amount of columns, length of rows
        {
            cout.width(4); // this formats the output with equal spacing
            cout << i * j << " ";
        }
        cout << endl;
    }
    
    
    // now let's do the same as abovem but exclude row 5
    
    
    for (int i = 1; i <= 10; i++) // amount of rows, length of columns
    {
        if (i == 5)
            continue; // EVERYTHING AFTER continue instruction WONT BE executed, but loop won't end
        for (int j = 1; j <= 10; j++) // amount of columns, length of rows
        {
            if (j == 5)
                break; // EVERYTHING AFTER break won't be executed and we are leaving the loop
            cout.width(4); // this formats the output with equal spacing
            cout << i * j << " ";
        }
        cout << endl;
    }
    
    // we can do both of these loops in one loop
    
    for (int i = 1, j = 1; i <= 10; i++)
    {
        cout.width(4); // this formats the output with equal spacing
        cout << i * j << " ";
        
        if (i == 10)
        {
            j++;
            i = 0;
        }
        
        if (j == 10 + 1)
            break;

    }
        
        

}
