#include <iostream>
using namespace std;

//function
//1. function has return type and has parameters
//2. function has return type and no parameters
//3. function no return type and has parameters
//4. function no return type and no parameters

//function declaration
int add1(int num1, int num2);
int add2();
void add3(int num1, int num2);
void add4();

int main()
{
        int num1;
        int num2;
        int sum;
        cout<<"Enter number1: ";
        cin>>num1;
        cout<<"Enter number2: ";
        cin>>num2;
        //function calls
        sum=add1(num1, num2); //num1, num2 are arguments
        cout<<sum<<endl;

        sum=add2();
        cout<<sum<<endl;

        add3(num1,num2);

        add4();

    return 0;
}
//function implemention
int add1(int num1, int num2){//parameters
        //Store
        int sum;
        //Process
        sum = num1 + num2;
        return sum;
}

int add2(){
        //Store
        int num1;
        int num2;
        int sum;
        //Input
        cout<<"Enter numeber1: ";
        cin>>num1;
        cout<<"Enter number2: ";
        cin>>num2;
        //Process
        sum = num1 + num2;
        return sum;
}

void add3(int num1, int num2){
        int sum;
        //Process
        sum = num1 + num2;
        //Output
        cout<<"Ther sum is "<<sum<<endl;
}

void add4(){
        //Store
        int num1;
        int num2;
        int sum;
        //Input
        cout<<"Enter numeber1: ";
        cin>>num1;
        cout<<"Enter number2: ";
        cin>>num2;
        //Process
        sum = num1 + num2;
        //Output
        cout<<"Ther sum is "<<sum<<endl;

}