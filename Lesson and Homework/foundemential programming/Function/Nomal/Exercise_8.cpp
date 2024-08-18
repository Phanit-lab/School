#include <iostream>
using namespace std;

// Function to count positive, negative, and zero elements in an array
void countElements(const int array[], int size, int &positiveCount, int &negativeCount, int &zeroCount) {
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            ++positiveCount;
        } else if (array[i] < 0) {
            ++negativeCount;
        } else {
            ++zeroCount;
        }
    }
}

