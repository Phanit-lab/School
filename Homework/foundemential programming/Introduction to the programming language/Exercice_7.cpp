#include <iostream>
using namespace std;

int main(){
    // d is distance, t is time, v is speed.
    float d, t, v;

    cout<<"input time";
    cin>>t;
    cout<<"input speed";
    cin>>v;
    d= v/t;
    cout<<"The Distance to the airport is "<<d<< endl;
    return 0;
}