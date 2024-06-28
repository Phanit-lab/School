//------------------------------------------------------------------
// File name: Exercise_5.cpp
// Assign ID: 
// Due Date: 28/05/24 at 11pm
//
// Purpose: calculate  the  radius
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    // 1. S: Store 
    float L, S, R;// L the leng of a circle, S the area, R the radius, 
    const float PI = 3.14;
    L = 0;
    S = 0;
    R = 0;

    // 2. I: Input
    cout<<"The Lenght of the circle(meters): ";
    cin>>L;

    // 3. P: Perform Calculations
    R = L/2*PI;
    S = PI*R*R;
    // 4. O: Output Display
    cout<<"The Area of the circle is: "<<S<<" square meter"<<endl;
    cout<<"The Radius of the circle is: "<<R<<" meters" <<endl;

    return 0;
}