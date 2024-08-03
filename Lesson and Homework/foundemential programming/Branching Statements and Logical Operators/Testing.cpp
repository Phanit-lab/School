/*15.06.2024 if, else if, elsee, switch, enum*/

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
    int choice;
    enum Menu {ADD=1, SUB, MUL, DIV, EXIT};
    
    //2. Input
    cout << "Menu" <<endl; 
    cout<< "1.Addition" << endl ;
    cout<< "2.Subtraction" << endl; 
    cout<< "3.Multiplication" <<endl; 
    cout<< "4.Division" << endl;
    cout<< "5.Exit" << endl;
    cout<<"Enter choice: ";
    cin>>choice;
    //3. Process
    switch(choice){
        case ADD:
            cout<<"Enter number1: ";
            cin>>number1;
            cout<<"Enter number2: ";
            cin>>number2;
            result = number1 + number2;
            break;
        case SUB:
            cout<<"Enter number1: ";
            cin>>number1;
            cout<<"Enter number2: ";
            cin>>number2;
            result = number1 - number2;
            break;
        case MUL:
            cout<<"Enter number1: ";
            cin>>number1;
            cout<<"Enter number2: ";
            cin>>number2;
            result = number1 * number2;
            break;
        case DIV:
            cout<<"Enter number1: ";
            cin>>number1;
            cout<<"Enter number2: ";
            cin>>number2;
            if(number2==0){
                flag=1;
            }else{
                result = number1 / number2;
            }
            break;
        case EXIT:
            exit(1);
        default:
            flag=2;
            break;
    }
    //4. Output
    if(flag==0){
        cout<<"The result is "<<result<<endl;
    }else if(flag==1){
        cout<<"Error: can't divided by zero"<<endl;
    }else if(flag==2){
        cout<<"Error: invalid input"<<endl;
    }
   

    return 0;
}