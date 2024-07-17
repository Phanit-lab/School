#include<iostream>
using namespace std;

int main(){
    //1. Store
    int A;

    //2. Input
    cout<<"Enter an integer A: ";
    cin>>A;

    //3. Process
    cout<<"Integers B for which A is divisible by B * B and not divisible by B * B * B: ";
    for (int B = 1; B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }
    cout << endl;
    //4. Output

    return 0;
}

