#include <iostream>
#include <algorithm>
using namespace std;

// Function to initialize the matrix
void initializeMatrix(int matrix[][100], int size, int value) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value;
        }
    }
}

void initializeMatrix(double matrix[][100], int size, double value) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value;
        }
    }
}
// Function to initialize of square matrix
void initializeMatrix(char matrix[][100], int size, char value) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value;
        }
    }
}

// Function to output the matrix
template <typename T>
void outputMatrix(T matrix[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
// Function to determine the maximum and minimum elements on the main diagonal
template <typename T>
void findMaxMinDiagonal(T matrix[][100], int size, T &max, T &min) {
    max = matrix[0][0];
    min = matrix[0][0];
    for (int i = 1; i < size; i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }
}

// Function to sort each row in ascending order
template <typename T>
void sortRows(T matrix[][100], int size) {
    for (int i = 0; i < size; i++) {
        sort(matrix[i], matrix[i] + size);
    }
}
