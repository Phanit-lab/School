#include<iostream>
using namespace std;

int main(){

    int A,result,num;
    const int NUMBER = 500;
    cout<<"Enter Number from 0 to 500: ";
    cin>>num;


    for (num;num<=NUMBER;num++){
        num+num;
    }
   cout<<"the result form "<<num<<endl;


    return 0;
}