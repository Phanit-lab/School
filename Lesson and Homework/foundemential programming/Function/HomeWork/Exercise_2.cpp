#include <iostream>
using namespace std;

// Maximum value in a 1D array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
string findMax(string arr[], int size) {
    string max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Maximum value in a 2D array
int findMax(int arr[][100], int rows, int cols) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
string findMax(string arr[][100], int rows, int cols) {
    string max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

// Maximum value in a 3D array
int findMax(int arr[][100][100], int depth, int rows, int cols) {
    int max = arr[0][0][0];
    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                if (arr[i][j][k] > max) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

// Maximum value of two integers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Maximum value of three integers
int findMax(int a, int b, int c) {
    int max = (a > b) ? a : b;
    return (max > c) ? max : c;
}
//Exercise_2
// Template function to find the maximum value in a 1D array
template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Template function to find the maximum value in a 2D array
template <typename T>
T findMax(T arr[][100], int rows, int cols) {
    T max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

// Template function to find the maximum value in a 3D array
template <typename T>
T findMax(T arr[][100][100], int depth, int rows, int cols) {
    T max = arr[0][0][0];
    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                if (arr[i][j][k] > max) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

// Template function to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return std::max(a, b); // Using std::max for conciseness
}

// Template function to find the maximum of three values
template <typename T>
T findMax(T a, T b, T c) {
    return max(a,max(b, c)); 
}