#include <iostream>
using namespace std;

int main() {
    //1. Store
    int A, B;

    //2. Input
    cout << "Enter the first integer (A): ";
    cin >> A;
    cout << "Enter the second integer (B): ";
    cin >> B;

    //3. Process and Output of Find common divisors
    cout << "Common divisors of " << A << " and " << B << " are: ";
    for (int i = 1; i <= min(A, B); ++i) {
        if (A % i == 0 && B % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
