#include <iostream>
using namespace std;

int main() {
    //1. Store
    int A;
    int sum = 0;
    long cubeOfSum;
    long A_squared;
    

    //2. Input
    cout << "Enter an integer A: ";
    cin >> A;
    
    int originalA = A;

     
    //3. Process: Calculate the sum of digits of A
    while (A != 0) {
        int digit = A % 10;        
        A /= 10;       
        sum += digit;  
        cout<<digit<<endl; 
    }    
        // Calculate the cube of the sum of digits
    cubeOfSum = sum*sum*sum;


        // Calculate A squared
    A_squared = originalA * originalA;
    cout<<originalA<<endl;

    // 4. Output
    cout << "The cube of the sum of digits of " << originalA << " is " << cubeOfSum << endl;
    cout << "A squared is " << A_squared << endl;

    if (cubeOfSum == A_squared) {
        cout << "The cube of the sum of digits of " << originalA << " equals " << originalA << " squared" << endl;
    } else {
        cout << "The cube of the sum of digits of " << originalA << " does not equal " << originalA << " squared" << endl;
    }

    return 0;
}
