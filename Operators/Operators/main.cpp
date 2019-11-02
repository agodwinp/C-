//
//  main.cpp
//  Operators
//
//  Created by Arun Godwin Patel on 06/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    /////// arithmetic operators
    
    int a = 10;
    int b = 4;
    
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl; // two integer numbers divided is an integer. To ensure that the result is a fraction, change one of the variables to a double or float
    
    int A = 10;
    float B = 4;
    
    cout << A+B << endl;
    cout << A-B << endl;
    cout << A*B << endl;
    cout << A/B << endl;
    
    cout << a % b << endl; // modulo
    
    // incrementation = increasing value by 1
    // decrementation = decreasing value by 1
    
    int c = 1;
    // c = c + 1;
    c += 1; // same as c = c + 1 (/=, -=, %=, *=)
    cout << c << endl;
    
    // incrementation
    
    int d = 1;
    cout << "d: " << d++ << endl; // ++ here is an increment operator
    cout << d << endl; // POST incrementation
    
    int e = 1;
    cout << "e: " << ++e << endl; // ++ here is an increment operator
    cout << e << endl; // PRE incrementation
    
    // decrementation
    
    int f = 1;
    cout << "f: " << f-- << endl; // -- here is an decrement operator
    cout << f << endl; // POST decrementation
    
    int g = 1;
    cout << "g: " << --g << endl; // -- here is an decrement operator
    cout << g << endl; // PRE decrementation
    
    // PRE = incremented/decremented by one, then sent to output. POST = sent to output, and then incremented/decremented by one
    
    /////// relational operators
    
    int h = 10;
    int i = 14;
    
    cout << (h == i) << endl; // returns 0 if false, or 1 if true
    cout << (h != i) << endl;
    cout << (h > i) << endl;
    cout << (h < i) << endl;
    cout << (h >= i) << endl;
    cout << (h <= i) << endl;
    
    cout << !(h == i) << endl; // this will return the opposite, the relation in the () will return 0, so the ! will change it to a 1. ! = NOT
    
    /////// logical operators
    
    cout << (7 > 5 && 5 != 10) << endl; // AND, both operators have the be = 1 for entire operation to = 1
    cout << (5 > 7 || 5 != 10) << endl; // OR, just one of the operators have to be = 1 for entire operation to = 1
    cout << !(5 > 7 || 5 != 10) << endl;
    
    /////// bitwise operators
    
    // bit is the smallest operation that can be stored in our computer, 0 and 1's. 8 bits = BYTE.
    // if you want to operate on the 0's and 1's, you have to use bitwise operations
    
    /*
     
     126 = 1*10^2 + 2*10^1 + 6*10^0 = 100 + 20 + 6 = 126
     
     1 0 1 0 = 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 8 + 0 + 2 + 0 = 10
     
     Notice that in the first equation, we are working in the decimal space, so we multiple by 10.
     In the second equation, the bitwise one, we only have 2 numbers (0 and 1), so we multipy by 2.
     Also notice the size of the power at each stage.
     In the first equation we have 3 numbers, 1 is at position 2, 2 is at position 1 and 6 is at position 0.
     These are the numbers that we use for the indices.
     Now see how this applies to the second equation, we have 4 numbers so each numbers is to the power of 3, then 2, 1, 0...
     So 1 0 1 0 in decimal notation is = 10
     
     1 0 1 1 0 0 = 1*2^5 + 1*2^3 + 1*2^2 = 32 + 8 + 4 = 44
     
     */
    
    // Bitwise AND &, OR \, NOT ~, XOR ^ (exclusive OR, cannot have more than one exclusive value of 1 and 0), left shift <<, right shift >>,
    
    cout << (10 & 2) << endl;
    
    /*
     
     In bitwise form:
     
     1 0 1 0 = 10
     0 0 1 0 = 2
     -----------
     0 0 1 0 = Result = 2
     
     
     */
    
    cout << (10 | 2) << endl;
    
    /*
     
     In bitwise form:
     
     1 0 1 0 = 10
     0 0 1 0 = 2
     -----------
     1 0 1 0 = Result = 10
     
     
     */
    
    cout << (10 ^ 2) << endl;
    
    /*
     
     In bitwise form:
     
     1 0 1 0 = 10
     0 0 1 0 = 2
     -----------
     1 0 0 0 = Result = 8
     
     
     */
    
    cout << ~(10) << endl;
    
    /*
     
     In bitwise form:
     
     0000000000000000000000000000 1 0 1 0 = 10
     -----------
     1111111111111111111111111111 0 1 0 1 = Result = -11
     
     
     */
    
    cout << (10 << 3) << endl; // this means that we're mutliplying 10 by 2 raised ^ 3
    
    cout << (10 >> 1) << endl; // this means that we're dividing 10 by 2 raised ^ 1
    
}
