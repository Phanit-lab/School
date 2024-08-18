#include <iostream>
using namespace std;

// Function to calculate the sum of numbers in a range between two integers
int sumInRange(int start, int end) {
    // Swap if start is greater than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    int sum = 0;
    // Calculate the sum
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}
