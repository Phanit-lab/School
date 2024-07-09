//------------------------------------------------------------------
// File name: Exercise_4.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose: Find  the  product  of  all  integers  from  A  to  20  .
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    //1. store
    int A;
    long product = 1;
    //2. Input

    //3. process
    do{
    cout << "Enter an integer A (1 <= A <= 20): ";
    cin >> A;
    }while(A<1||A>20);
    
    for (int i = A; i <= 20; ++i) {
        product *= i;

        }
    //4. Output
    cout << "The product of integers from " << A << " to 20 is: " << product << endl;

    return 0;
}