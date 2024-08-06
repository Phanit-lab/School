#include<iostream>
using namespace std;
//Menu
//1. Input number
//2. Output number
//0. Exit
//Enter choice: 1
//How many numbers? 3
//Enter number: 10
//Enter number: 20
//Enter number: 30
//Menu
//1. Input number
//2. Output number
//0. Exit
//Enter choice: 1
//How many numbers? 2
//Enter number: 40
//Enter number: 50
//Menu
//1. Input number
//2. Output number
//0. Exit
//Enter choice: 2
//Output: 10 20 30 40 50
void displayMenu(){
    cout<<"========Menu======="<<endl;
    cout<<"1. Input nuumber"<<endl;
    cout<<"2. Output number"<<endl;
    cout<<"0. Exit"<<endl;
}
int input(int number, string text){
    cout<<text;
    cin>>number;
    return number;
}
int output(int number, string text){
    cout<<text<<number;
    return number;
}
void inputNumber(int array[], int count){

    for (int i = 0; i <= count; i++)
    {
        cout<<"Enter number : ";
        cin>>i;
    }
}
void outputNuumber(int array[], int  count){
    for (int i = 0; i <= count; i++)
    {
        cout<<i;

    }
} 
void menu(int choise){
    const int SIZE =10;
    int array[SIZE];
    int number;
    switch (choise)
    {  
        
    case 1:
        input(number, "How many number you input: ");
        
        break;
    case 2:
    default:
        break;
    }
}
int main(){
    int number;

    return 0;
}
