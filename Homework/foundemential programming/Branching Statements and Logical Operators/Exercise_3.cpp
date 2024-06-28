//------------------------------------------------------------------
// File name: Exercise_3.cpp
// Assign ID: 
// Due Date: 18/06/24 at 11pm
//
// Purpose: Ditermine the Min and Max.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

    //1. Store
    double number1, number2, number3, number4, number5, number6, number7;
    double min,max;

    //2. Input 
    cout<<"Enter seven Number: ";
    cin>>number1>>number2>>number3>>number4>>number5>>number6>>number7 ;

    //3. Process
    max = (number1 > number2) ? number1 : number2;
    max = (max > number3) ? max : number3;
    max = (max > number4) ? max : number4;
    max = (max > number5) ? max : number5;
    max = (max > number6) ? max : number6;
    max = (max > number7) ? max : number7;

    min = (number1 < number2) ? number1 : number2;
    min = (min < number3) ? min : number3;
    min = (min < number4) ? min : number4;
    min = (min < number5) ? min : number5;
    min = (min < number6) ? min : number6;
    min = (min < number7) ? min : number7;
    //4. Output
    cout<<"The max is: "<<max<<endl;
    cout<<"The min is: "<<min<<endl;

    return 0;
}