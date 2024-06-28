//------------------------------------------------------------------
// File name: Exercise_4.cpp
// Assign ID: 
// Due Date: 28/05/24 at 11pm
//
// Purpose: Calculate  the  value  of  the  resistance RO
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    // 1. S: Store 
    float R0, R1, R2, R3; 
    R0 = 0.0;
    R1 = 2.0;
    R2 = 4.0;
    R3 = 8.0;
    // 2. I: Input

    // 3. P: Perform Calculations
    R0 = (R1*R2*R3)/((R1*R2)+(R1*R3)+(R3*R2));

    // 4. O: Output Display
    cout<<"Test Example: R1 = "<<R1 <<", R2 = "<<R2<<", R3 = "<<R3<<", R0 = ";
    cout<<fixed<<setprecision(6)<<R0<<endl;
    return 0;
}