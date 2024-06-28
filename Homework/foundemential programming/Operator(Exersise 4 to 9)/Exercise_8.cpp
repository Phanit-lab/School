//------------------------------------------------------------------
// File name: Exercise_8.cpp
// Assign ID: 
// Due Date: 28/05/24 at 11pm
//
// Purpose: Time Convertion and Calculation
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
using namespace std;

int main (){

    //1. S: Store
    int H1, M1, S1, H2, M2, S2;                 //H, M and S are hour, minuutes and second respectively, 1 start, 2 end
    double spendTime, costOfcall;
    const int  HOUR_CONVERTION = 3600;          // 1 hour = 3600 seconnds
    const int MINUTE_CONCERTION = 60;           // 1 minnute= 60 seconds
    const int COST_PER_A_MINUTE = 50;           // Cost per one minute 50 cents
    const int USD_CONVERTION = 100;             // 1USD = 100 cents
    H1 = 1;
    H2 = 1;
    M1 = 1;
    M2 = 1;
    S1 = 1;
    S2 = 1;
    //2. I: Input
    cout<<"Enter the Start time (24h): ";
    cin>> H1>>M1>>S1;
    cout<<"Enter the End time (24h): ";
    cin>>H2>>M2>>S2;

    //3. P: Processing
    spendTime = (H2-H1)*HOUR_CONVERTION + (M2-M1)*MINUTE_CONCERTION + (S2-S1);  // calculated and convert to second
    costOfcall = spendTime * COST_PER_A_MINUTE/USD_CONVERTION;                  // calculated and convert to USD

    //4. O: Output
    cout<< "Cost of call is: "<<costOfcall<<" USD"<<endl;

    return 0;
}