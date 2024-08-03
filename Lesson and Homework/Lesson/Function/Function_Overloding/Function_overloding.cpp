#include <iostream>
using namespace std;

//1. function normal
//2. function overloading
    /*
    Function overloading is the ability to create multiple functions with the same name in the same scope, 
    where each function has a different set of parameters (either in type or number). 
    The correct function to be called is determined by the number and types of the arguments passed
    */
//3. function template
//4. function recursive

int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
double add(double a, double b){
    return a+b;
}
double add(double a, double b, double c){
    return a+b+c;
}

void show(string str, int result){
    cout<<str<< result <<endl;
}
int get_number(string str){
    int num;
    cout<<str;
    cin>>num;
    return num;
}

int main() {
    
    //Store
    int num1;
    int num2;
    int r;
    //Input
    num1 = get_number("Enter number1: ");
    num2 = get_number("Enter number2: ");
    //Process
    r=add(10,20);
    r=add(10.5,20.5);
    //Output
    show("The result is " , r);

    return 0;
}