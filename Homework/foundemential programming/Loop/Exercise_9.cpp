//------------------------------------------------------------------
// File name: Exercise_9.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose:  Calculate the sum of these numbers and output it to the screen.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>

using namespace std;

int main() {
    //1. Store
    int number;
    int sum = 0;
    //2. Input

    cout << "Enter numbers (enter 0 to stop):" << endl;
    //3. Proces
    do {
        cin >> number;
        sum += number; // Add the entered number to the sum
    } while (number != 0); // Continue until the user enters 0
    //4. Output
    cout << "The sum of the entered numbers is: " << sum << endl;

    return 0;
}