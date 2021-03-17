/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 6th Edition
 Chapter 2 - Exercise 24
 markdhoad@gmail.com
 
 One metric ton is approximately 2205 pounds. Write a program that prompts the 
 user to input the amount of rice, in pounds, in a bag. The program outputs 
 the number of bags needed to store one metric ton of rice.
 
 *****************************************************************************/


#include <iostream>
#include <math.h>

using namespace std;

const double POUNDS_PER_METRIC_TON = 2205;

int main(){
    double bagCapacity;
    
    cout << "How many pounds can the bag hold? ";
    cin >> bagCapacity;
    
    bagCapacity = POUNDS_PER_METRIC_TON / bagCapacity;
    bagCapacity = round(bagCapacity); // round off to the nearest digit for bags dont have decimals
 
    cout << "You would need " << bagCapacity << " bags to store a ton" << endl;
    return 0;
}
