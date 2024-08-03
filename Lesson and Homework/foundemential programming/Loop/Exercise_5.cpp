//------------------------------------------------------------------
// File name: Exercise_5.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose: A program that displays a multiplication table .
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>

using namespace std;

int main() {
    //1. Store
    int k;
    //2. Input

    cout << "Enter a number to display its multiplication table: ";
    cin >> k;
    cout << "Multiplication table for " << k << ":\n";
    //3. Process
    for (int i = 2; i <= 10; ++i) { 
    //4. Output
        cout << k << " x " << i << " = " << (k * i) << endl;
    }
    
    return 0;
}