#include <iostream>
using namespace std;

int main(){

    //Enter number1: 10
    //Enter number2: 20
    //Enter operator(+,-,*,/): +
    //The result is 30

    //1. Store
    double number1;
    double number2;
    double result;
    int flag=0;
    int op;
    //2. Input

    //3. Process
    do{
        cout<<"1. addition"<<endl;
        cout<<"2. substraction"<<endl;
        cout<<"3. multiplication"<<endl;
        cout<<"4. divition"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter number1: ";
        cin>>number1;
        cout<<"Enter number2: ";
        cin>>number2;
        cout<<"Enter operator(+,-,*,/): ";
        cin>>op;
        switch(op){
            case 1:
                result = number1 + number2;
                break;
            case 2:
                result = number1 - number2;
                break;
            case 3:
                result = number1 * number2;
                break;
            case 4:
                if(number2==0){
                    flag=1;
                }else{
                    result = number1 / number2;
                }
                break;
            default:
                flag=2;
                break;
            }
        if(flag==0){
            cout<<"The result is "<<result<<endl;
        }else if(flag==1){
            cout<<"Error: can't divided by zero"<<endl;
        }else if(flag==2){
            cout<<"Error: invalid input"<<endl;
    }
    }while(op!= 0);


    //4. Output

    

    return 0;
}