#include<iostream>
using namespace std;

double divitions(double num1, double num2){
    return num1/num2;
}
int main(){
    int num1,num2;
    cout<<"Enter number1 and 2: ";
    cin>> num1>>num2;

    cout<<divitions(num1,num2);
    return 0;

}
