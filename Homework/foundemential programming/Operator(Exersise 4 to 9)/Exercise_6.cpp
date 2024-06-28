//------------------------------------------------------------------
// File name: Exercise_6.cpp
// Assign ID: 
// Due Date: 28/05/24 at 11pm
//
// Purpose: Calculate the traveled distance
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
using namespace std;

int main (){

    //1. S: Store
    double S, v, t, a; // S the traveled distance, v the speed, t the time, a the acceleration.
    S = 1.0;
    v = 1.0;
    t = 1.0;
    a = 1.0;

    //2. I: Input
    cout<<"Enter speed (m/s), time (s), and acceleration (m/s2) : ";
    cin>>v>>t>>a;

    //3. P: Processing
    S = (v*t)+((a*t*t)/2);

    //4. O: Output
    cout<< "The Travel distance is: "<<S<<" meter"<<endl;

    return 0; 
}