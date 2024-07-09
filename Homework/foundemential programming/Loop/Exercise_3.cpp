//------------------------------------------------------------------
// File name: Exercise_3.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose: calculates and outputs the value of x to the power of y.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    //1. Store
    double sum = 0; 
    const int start = 1;
    const int end = 1000;
    double average;
    //2. Innput
    //3. Process

    for (int i = start; i <= end; ++i) {
        sum += i;
        average = sum / (end - start + 1);
        cout <<average<<endl;
    }
    //4. Output
    cout << "The average of integers from " << start << " to " << end << " is: " << average << endl;

    return 0;
}
