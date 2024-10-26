#define INTEGER// Change to DOUBLE or CHAR as needed
#include "function.h"
#include "function.cpp"


int main() {
    srand(static_cast<unsigned>(time(0))); // Seed for random number generation

    const int SIZE = 10;
    DataType arr[SIZE];

    FillArray(arr, SIZE);
    cout << "Array values: ";
    OutputArray(arr, SIZE);
    cout << "Minimum value: " << SearchMin(arr, SIZE) << endl;
    cout << "Maximum value: " << SearchMax(arr, SIZE) << endl;
    SortArray(arr, SIZE);
    cout << "Sorted array: ";
    OutputArray(arr, SIZE);
    EditValue(arr, 2, 42); // Edit the value at index 2
    cout << "Array after editing index 2: ";
    OutputArray(arr, SIZE);

    return 0;
}
