#include "function.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // For std::swap

using namespace std;

// Integer functions
void FillIntArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Random values from 0 to 99
    }
}

void OutputIntArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int SearchIntMin(int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int SearchIntMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void SortIntArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void EditIntValue(int* arr, int index, int newValue) {
    if (index >= 0) {
        arr[index] = newValue;
    }
}

// Double functions
void FillDoubleArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = static_cast<double>(rand()) / RAND_MAX * 100; // Random values from 0.0 to 100.0
    }
}

void OutputDoubleArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double SearchDoubleMin(double* arr, int size) {
    double min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double SearchDoubleMax(double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void SortDoubleArray(double* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void EditDoubleValue(double* arr, int index, double newValue) {
    if (index >= 0) {
        arr[index] = newValue;
    }
}

// Char functions
void FillCharArray(char* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 'A' + rand() % 26; // Random uppercase letters
    }
}

void OutputCharArray(char* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

char SearchCharMin(char* arr, int size) {
    char min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

char SearchCharMax(char* arr, int size) {
    char max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void SortCharArray(char* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void EditCharValue(char* arr, int index, char newValue) {
    if (index >= 0) {
        arr[index] = newValue;
    }
}
