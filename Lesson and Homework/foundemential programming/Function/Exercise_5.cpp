#include <iostream>
using namespace std;

bool isLuckyNumber(int number) {
    if (number < 100000 || number > 999999) {
        return false; // Not a six-digit number
    }

    bool digits[10] = {false}; // Array to track digit occurrences

    while (number > 0) {
        int digit = number % 10;
        if (digits[digit]) {
            return false; // Duplicate digit found
        }
        digits[digit] = true;
        number /= 10;
    }
    return true;
}