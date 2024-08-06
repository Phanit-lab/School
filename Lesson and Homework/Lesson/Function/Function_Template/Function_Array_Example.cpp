#include<iostream>
#include "Function_Array_Example_L.cpp"
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
int main(){
    int choise;
    int count;
    displayMenu();
    input(choise, "chouse menu: ");
    menu(choise);


    return 0;
}