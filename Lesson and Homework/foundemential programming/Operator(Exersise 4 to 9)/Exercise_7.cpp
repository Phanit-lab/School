//------------------------------------------------------------------
// File name: Exercise_7.cpp
// Assign ID: 
// Due Date: 28/05/24 at 11pm
//
// Purpose: Calculate the speed
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
using namespace std;

int main (){

    //1. S: Store
    float D, t, v; //D distance to the airport, t tine need to go to the air port, v the speed he need too go
    D = 1.0;
    t = 1.0;

    //2. I: Input
    cout<<"The distance to the airport is(Km): ";
    cin>>D;
    cout<<"The time need to go to the airport(h): ";
    cin>>t;

    //3. P: Processing
    v = D/t;

    //4. O: Output Display
    cout<< "The speed he needs to go to the airport is: "<<v<<" Km/h"<<endl;

    return 0;
}