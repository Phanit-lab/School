#include <iostream>
using namespace std;

int main() {
    string integer;
    string result;

    // Input
    cout << "Enter any integer: ";
    cin >> integer;

    // Process
    for (char digit : integer) {
        if (digit != '3' && digit != '6') {
            result += digit;
        }
    }

    // Output
    if (result.empty()) {
        cout << "After removing 3 and 6: 0" << endl;
    } else {
        cout << "After removing 3 and 6: " << result << endl;
    }

    return 0;
}
