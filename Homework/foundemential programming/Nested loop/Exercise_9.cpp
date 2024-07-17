#include <iostream>
#include <cmath> // For absolute value 

using namespace std;

int main() {
    int number, choice;
    int digitCount = 0, digitSum = 0, zeroCount = 0;
    double digitMean;
    enum Menu{
        Exit,
        countDigits,
        sumDigits,
        meanDigits,
        countZero,
        Exit
    };

    cout << "Enter a number: ";
    cin >> number;

    // Ensure the number is positive for calculations
    number = abs(number); 

    do {
        cout << "\nMenu:\n";
        cout << "1. Count digits\n";
        cout << "2. Calculate sum of digits\n";
        cout << "3. Calculate arithmetic mean of digits\n";
        cout << "4. Count zeros\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case countDigits:
                // Count digits
                int temp = number;
                while (temp > 0) {
                    digitCount++;
                    temp /= 10;
                }
                cout << "Number of digits: " << digitCount << endl;
                break;

            case sumDigits:
                // Calculate sum of digits
                temp = number;
                while (temp > 0) {
                    digitSum += temp % 10;
                    temp /= 10;
                }
                cout << "Sum of digits: " << digitSum << endl;
                break;

            case meanDigits:
                // Calculate arithmetic mean of digits (if already counted)
                if (digitCount > 0) {
                    digitMean = (double)digitSum / digitCount;
                    cout << "Arithmetic mean of digits: " << digitMean << endl;
                } else {
                    cout << "Count the digits first (option 1).\n";
                }
                break;

            case countZero:
                // Count zeros
                temp = number;
                while (temp > 0) {
                    if (temp % 10 == 0) {
                        zeroCount++;
                    }
                    temp /= 10;
                }
                cout << "Number of zeros: " << zeroCount << endl;
                break;

            case Exit:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
