//------------------------------------------------------------------
// File name: Exercise_8.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose: The user enters two range boundaries. Calculate the sum of all numbers of range. 
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>

using namespace std;

int main() {
    //1. Store
    int start, end;
    long long sum = 0;
    //.2 Input
    cout << "Enter the first boundary of the range: ";
    cin >> start;
    cout << "Enter the second boundary of the range: ";
    cin >> end;

    //3. Process
    if (start > end) {
        swap(start, end);
    }
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    //4. Output
    cout << "The sum of numbers from " << start << " to " << end << " is: " << sum << endl;

    return 0;
}