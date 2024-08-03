#include <iostream>
using namespace std;

//1. function normal
//2. function overloading
//3. function template
//4. function recursive

template<typename T>
T add(T a, T b){
    return a+b;
}
template<typename T>
T add(T a, T b, T c){
    return a+b+c;
}
template<typename T>
T show(T str, int result){
    cout<<str<< result <<endl;
}
template<typename T>
int get_number(T str){
    int num;
    cout<<str;
    cin>>num;
    return num;
}

int main() {
    
    //Store
    double num1;
    double num2;
    double r;
    //Input
    num1 = get_number("Enter number1: ");
    num2 = get_number("Enter number2: ");
    //Process
    //r=add(10,20);
    r=add(num1, num2);
    //Output
    show("The result is " , r);

    return 0;
}