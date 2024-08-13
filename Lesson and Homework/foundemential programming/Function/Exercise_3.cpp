#include <iostream>
using namespace std;

// Function to check if a number is a perfect number
bool isPerfectNumber(int number) {
    if (number <= 0) return false;
    int sum = 0; 
    // Find all divisors and sum them up
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}
// Function to find and display perfect numbers in a given range
void findPerfectNumbersInRange(int start, int end) {
    cout << "Perfect numbers in the range [" << start << ", " << end << "] are:\n";
    
    for (int num = start; num <= end; ++num) {
        if (isPerfectNumber(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}