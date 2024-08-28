#include <iostream>
using namespace std;

int increment(int num1, int &num2, int *num3){
    num1= num1 + 1;
    num2= num2 + 1;
    *num3=*num3+ 1;
    cout<<num1<<" "<<num2<<" "<<*num3<<endl;//11 21 31
}

int main(){

    int num1=10;
    int num2=20;
    int num3=30;

    cout<<num1<<" "<<num2<<" "<<num3<<endl;//10 20 30
    increment(num1, num2, &num3);
    cout<<num1<<" "<<num2<<" "<<num3<<endl;//10 21 31


    return 0;
}