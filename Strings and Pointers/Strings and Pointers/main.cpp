//
//  main.cpp
//  Strings and Pointers
//
//  Created by Arun Godwin Patel on 17/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    string text = "widfj"; // this is actually 6 letters long, w i d f j \0
    // the last characteer \0 is an indicator to the program that it is the end of the string
    
    
    /*
    for (int i = 0; i < text.length(); i++) {
        cout << text[i] << endl;
    }
    */
    
    char ch = text[0];
    //cout << ch << endl;
    
    // a string is just an array of characters, the way it was done in the olden days
    
    char characters[] = "1234sqnsq";
    
    cout << characters[0] << endl;
    cout << *(characters) << endl;
    cout << characters[1] << endl;
    cout << *(characters+1) << endl;
    
    cout << endl << endl << endl;
    
    char *p = characters;
    cout << p[0] << endl;
    cout << *(p) << endl;
    
    cout << p[1] << endl;
    cout << *(p+1) << endl;
    
    char * text_2 = text.c_str();
    
    cout << text2 << endl;
    
    
    return 0;
}
