//------------------------------------------------------------------
// File name: Exercise_1.cpp
// Assign ID: 
// Due Date: 18/06/24 at 11pm
//
// Purpose: Determines the lucky number.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {

    //1. Store
    int sixDigit, digit1, digit2, digit3, digit4, digit5, digit6;
    int firstThreeSum, lastThreeSum;
    string luckyNumber;
    const int TEN = 10;
    const int LOW_ERROR = 100000;
    const int HIGH_ERROR = 999999; 
    bool error = false;

    //2. Input 
    cout << "Enter a six-digit integer: ";
    cin >> sixDigit;


    //3. Process
        //3.1 Error 
    if (sixDigit < LOW_ERROR || sixDigit > HIGH_ERROR) {
        error = true;
    }

        //3.2 Extraction Digit
    digit6 = sixDigit % TEN;
    sixDigit /= TEN;
    digit5 = sixDigit % TEN;
    sixDigit /= TEN;
    digit4 = sixDigit % TEN;
    sixDigit /= TEN;
    digit3 = sixDigit % TEN;
    sixDigit /= TEN;
    digit2 = sixDigit % TEN;
    sixDigit /= TEN;
    digit1 = sixDigit;

        //3.3 Define The Lucky Number
    firstThreeSum = digit1+digit2+digit3;
    lastThreeSum = digit4+digit5+digit6;
    luckyNumber = (firstThreeSum == lastThreeSum) ? "LUCKY" : "not LUCKY";

    //4. Output
    if(error){
        cout << "Invalid input. Please enter a six-digit integer." << endl;
    }
    else{
        cout << " The Number is "<<luckyNumber<<endl;
    }

    return 0;
}