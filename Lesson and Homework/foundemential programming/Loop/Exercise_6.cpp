//------------------------------------------------------------------
// File name: Exercise_6.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose: Display all numbers from zero to a number entered by the user .
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>

using namespace std;

int main() {
    //1. Store
    int upperLimit;

    //2. Input

    cout << "Enter a positive integer: ";
    cin >> upperLimit;
    while (upperLimit < 0) {
        cout << "Invalid input. Please enter a non-negative integer: ";
        cin >> upperLimit;
    }
    cout << "Numbers from 0 to " << upperLimit << ":\n";
    //3. Process
    for (int i = 0; i <= upperLimit; ++i) {
        cout << i << " ";
    }
    cout << endl; 
    return 0;
}