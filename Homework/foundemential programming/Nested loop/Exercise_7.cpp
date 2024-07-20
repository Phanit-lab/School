#include <iostream>
using namespace std;

int main() {
    //1. Sotre
    int A;

    //2.  Input
    cout << "Enter an integer A: ";
    cin >> A;

    //3. Process and Output of Output divisors
    cout << "Divisors of " << A << " are: ";
    for (int i = 1; i <= A; ++i) {
        if (A % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

