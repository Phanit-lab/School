#include <iostream>
using namespace std;



int main(){
    
    const int SIZE=5;
    int nums[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout<<"Enter numeber: "<<i+1;
        cin>>nums[i];
    }
    
    for (int i = 0; i < SIZE; i++)
    {
         cout<<"Num"<<i+1<<": "<<nums[i]<<endl;
    }
    return 0;
}