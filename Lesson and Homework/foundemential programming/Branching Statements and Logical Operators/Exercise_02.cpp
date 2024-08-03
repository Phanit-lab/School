//------------------------------------------------------------------
// File name: Exercise_2.cpp
// Assign ID: 
// Due Date: 18/06/24 at 11pm
//
// Purpose: Change Order of four digit.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
using  namespace std;

int  main(){
    //1. Store
    int number, digit1, digit2, digit3, digit4;
    const int TEN = 10;
    const int LOW_ERROR = 1000;
    const int HIGH_ERROR = 9999;
    bool error = false;

    //2.Input
    cout<<"Enter four Digit: ";
    cin>>number;

    //3. Process
        if (number < LOW_ERROR || number > HIGH_ERROR) {
        error = true;
    }
        //3.1 Extact number
    digit4 = number%TEN;
    number /= TEN;
    digit3 = number%TEN;
    number /= TEN;
    digit2 = number%TEN;
    number /= TEN;
    digit1 = number%TEN;

    //4. Output
    if (error){
        cout<<"Invalid input. Please enter a six-digit integer."<<endl;
    }
    else{
        cout<<"The number is: "<<digit2<<digit1<<digit4<<digit3<<endl;
    }
    
    return 0;
}