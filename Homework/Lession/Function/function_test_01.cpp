#include <iostream>
using namespace std;

//function declaration
int add(int num1, int num2);
void show(int sum);
int readNum(string str);
int main();
int subtraction(int num1,int num2);
int multiplication(int num1,int num2);
double division(double num1, double num2);
void menuChoice(char choice);
void displayMenu();

int main(){
    int choice;
    do
    {  
        displayMenu();
        choice = readNum("Chouse number: ");
        menuChoice(choice);

    } while (choice != 0 );

    return 0;
}

int readNum(string str){
    int num;
    cout<<str;
    cin>>num;
    return num;
}
void displayMenu(){
    cout << "Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "0. Exit" << endl;
}
void show(int result){
        cout<<"The result is: " <<result<<endl<<endl;
}
int add(int num1, int num2){
        return num1 + num2;
}
int subtraction(int num1,int num2){
    return num1 - num2;
}
int multiplication(int num1,int num2){
    return num1*num2;
}
double division(double num1, double num2){
    return num1/num2;
}

void menuChoice(char choice)
{
    int num1;
    int num2;
    int sum, substract, mitiplies, divice;
    enum Menu{
        ADD = 1,
        SUBTRACT,
        MULTIPLIES,
        DEVICE,
        EXIT
    };
    switch (choice)
    {
        case ADD:
            num1 = readNum("Enter number 1: ");
            num2 = readNum("Enter number 2: ");
            show(add(num1,num2));
            break;
        case SUBTRACT:
            num1 = readNum("Enter number 1: ");
            num2 = readNum("Enter number 2: ");
            show(subtraction(num1,num2));
            break;
        case MULTIPLIES:
            num1 = readNum("Enter number 1: ");
            num2 = readNum("Enter number 2: ");
            show(multiplication(num1,num2));
            break;
        case DEVICE:
            num1 = readNum("Enter number 1: ");
            num2 = readNum("Enter number 2: ");
            show(division(num1,num2));
            break;
        default:
            break;
    }
}