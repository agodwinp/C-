//
//  main.cpp
//  Lottery
//
//  Created by Arun Godwin Patel on 18/10/2019.
//  Copyright © 2019 Arun Godwin Patel. All rights reserved.
//

#include <iostream>
using namespace std;

// pseudo random number generator

void lottery(int, int);

int main() {
    
    // to make something that is truly random, we need to use something that is constantly changing... e.g. time
    
    /*
     
    srand(time(NULL)); // s stands for seeds. Change this number to generate different numbers
    
    int nr = rand();
    cout << nr << endl; // when we run this, it returns the same random number each time...
    // it is a pseudo random number
    // it is a random number that follows some rules, you can define the rules using srand()
    
    int nr2 = rand();
    cout << nr2 << endl;
    int nr3 = rand();
    cout << nr3 << endl;
     
     */
    
    // lottery
    
    lottery(49, 10);
    
    return 0;
}

void lottery(int total_balls, int balls_to_draw) {
    if (total_balls <  balls_to_draw)
        return;
        
    srand(time(NULL)); // s stands for seeds. Change this number to generate different numbers
    
    int * balls = new int[balls_to_draw];
    for (int i = 0; i < balls_to_draw; i++) {
        balls[i] = rand() % 49 + 1; // draw random numbers from 0 - 49
        float thing = balls[i]/49.0;
        
        for (int j = 0; j < i+1; j++) {
            if (balls[i] ==  balls[j] && i != j) { //  is balls[0] == balls[0]
                i--;
                break;
            }
            else if (j == i) {
                cout << balls[i] << " " << thing << endl;
            }
        }
    }
    
    int sum;
    for (int k = 0; k < balls_to_draw; k++) {
        sum += balls[k];
    }
    
    cout << "sum: " << sum << endl;
    
    delete[] balls; // freeing memory that was dynamically allocated to balls
}
