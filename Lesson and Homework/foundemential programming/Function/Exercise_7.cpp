#include <iostream>
using namespace std;

// Function to calculate the arithmetic mean of elements in an array
double calculateMean(const int array[], int size) {
    if (size <= 0) {
        cout << "Error: Size of the array must be greater than 0." << endl;
        return 0.0; // Return 0.0 as an indication of error
    }
    int sum = 0;
    // Calculate the sum of all elements
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    // Calculate the mean
    double mean = static_cast<double>(sum) / size;
    return mean;
}

