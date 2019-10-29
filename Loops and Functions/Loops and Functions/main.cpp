//
//  main.cpp
//  Loops and Functions
//
//  Created by Arun Godwin Patel on 14/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

// buffer - temporary array... data gets written to  buffer first before it gets stored in memory

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
const double PI = 3.14;
bool isValid(string);

int main() {
    
    int choice;
    char cont;
    
    do {
        // system("cls");
        initMenu();
        
        while (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores unnecessary characters
            initMenu();
            cout << "You have just typed the wrong data to the input..." << endl;
        }
        menuDecision(choice);
        
        do {
            cout << "Do you want to continue the program? (Y/N) " << endl;
            cin >> cont;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores unnecessary characters
        } while(cont != 'y' && cont != 'Y' && cont != 'N' && cont != 'n');
    
    } while (cont == 'y' || cont == 'Y');
    
    return 0;
}

void initMenu() {
    cout << "Enter option:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}

void menuDecision(int choice) {
    double r, a, b, h;
    switch(choice){
        case 1:
            cout << "Enter the radius: " << endl;
            do {cin >> r;} while (!isValid("The Radius is wrong!"));
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of the square: " << endl;
            do {cin >> a;} while (!isValid("The data is wrong!"));
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and height: " << endl;
            do {cin >> a >> b;} while (!isValid("The data is wrong!"));
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the width and height of the triangle: " << endl;
            do {cin >> a >> h;} while (!isValid("The data is wrong!"));
            areaTriangle(a, h);
            break;
        default:
            cout << "You didn't choose any of the options from above..." << endl;
    }
}

double areaCircle(double r) {
    double result = PI * (r*r);
    cout << "The area of a circle with radius: " << r << " is: " << result << endl;
    return result;
}

double areaSquare(double a) {
    double result = a*a;
    cout << "The area of a square with side: " << a << " is: " << result << endl;
    return result;
}

double areaRectangle(double a, double b) {
    double result = a*b;
    cout << "The area of a rectangle with sides: " << a << ", " << b << " is: " << result << endl;
    return result;
}

double areaTriangle(double a, double h) {
    double result = (1/2.0)*a*h;
    cout << "The area of a triangle with base and height: " << a << ", " << h << " is: " << result << endl;
    return result;
}

bool isValid(string error_msg) {
    if (cin.rdstate()) // state is wronf when it is not equal to 0
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores unnecessary characters
        initMenu();
        cout << error_msg << endl;
        return false;
    }
    return true;
}
