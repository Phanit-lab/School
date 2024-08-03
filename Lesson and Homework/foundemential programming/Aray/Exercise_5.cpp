#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE], arr2[SIZE], sumArr[SIZE];

    cout << "First array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr1[i];
    }

    cout << "Second array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr2[i];
    }

    for (int i = 0; i < SIZE; ++i) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    cout << "Sum of elements: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << sumArr[i] << " ";
    }
    cout << endl;

    return 0;
}
