#include <iostream>
using namespace std;

// Function to calculate the power of a number
double power(double base, int exponent) {
    double result = 1.0;
    //The exponent is negative
    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }
    // Calculate exponent
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2; 
    }
    return result;
}
