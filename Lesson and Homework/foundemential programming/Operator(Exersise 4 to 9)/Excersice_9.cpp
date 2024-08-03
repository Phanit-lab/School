//------------------------------------------------------------------
// File name: Exercise_9.cpp
// Assign ID: 
// Due Date: 28/05/24 at 11pm
//
// Purpose: Display a comparative table with a cost of travel using different types of gasoline.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //1. S: Store
    double distance, consumption, consumptionPer100Km, gasolinPrice1, gasolinPrice2, gasolinPrice3,cost1, cost2, cost3;
    string gasolinType1, gasolinType2, gasolinType3;

    //2. I: Inpput
    cout<<"Enter a distance(in Km): ";
    cin>> distance;
    cout<<"Enter gasolin consumption per 100 km: ";
    cin>>consumptionPer100Km;

    //Type and Price of gasolin
    cout<< "Enter Type of gasolin: ";
    cin>>gasolinType1;
    cout<<gasolinType1<<"Price (riel): ";
    cin>>gasolinPrice1;

    cout<< "Enter Type of gasolin: ";
    cin>>gasolinType2;
    cout<<gasolinType2<<"Price (riel): ";
    cin>>gasolinPrice2;

    cout<< "Enter Type of gasolin: ";
    cin>>gasolinType3;
    cout<<gasolinType3<<"Price (riel): ";
    cin>>gasolinPrice3;

    //3. P: Process
    consumption = distance/consumptionPer100Km;
    cost1 = consumption*gasolinPrice1;
    cost2 = consumption*gasolinPrice2;
    cost3 = consumption*gasolinPrice3;

    //4. O: Output 
    cout << "\n\nGasoline Type\t  Price per Liter\tTotal Cost(riel)\n";
    cout << "------------------------------------------------------\n";

    cout << left << setw(15) << gasolinType1 << "   " 
         << setw(15) << fixed << setprecision(2) << gasolinPrice1 << "    "
         << setw(10) << fixed << setprecision(2) << cost1 << endl;
    
    cout << left << setw(15) << gasolinType2 << "   " 
         << setw(15) << fixed << setprecision(2) << gasolinPrice2 << "    "
         << setw(10) << fixed << setprecision(2) << cost2 << endl;
    cout << left << setw(15) << gasolinType3 << "   " 
         << setw(15) << fixed << setprecision(2) << gasolinPrice3 << "    "
         << setw(10) << fixed << setprecision(2) << cost3 << endl;

    return 0;
}