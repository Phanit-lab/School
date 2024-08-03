//------------------------------------------------------------------
// File name: Exercise_2.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose: calculates and outputs the value of x to the power of y.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){
    //1. store 
    int x,y;
    char choice;
    do{
    double result = 1.0;
    //2. Input
    cout<<"Enter the base inteder x: ";
    cin>>x;
    cout<<"Enter the exponent intergere y: ";
    cin>>y;
    //3. process
        for(int i=0 ; i<y ; ++i){
        result *=x;
        }
    //4. Output
    cout<< x << " power of "<< y<<" is "<< result<< endl;
    cout<<"Do you want to calculate more? (y/n): ";
    cin>>choice;

    }while(choice =='y'||choice =='Y');
    

    return 0;
}