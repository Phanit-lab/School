#include <iostream>
using namespace std;

int main() {
    //1. Store
    int rows=3, cols=4;
    //2. Input
    //3. Process
    int const ROW = 10;
    int const COL = 10;
    int array[ROW][COL]={{3,5,6,7},{12,1,1,1},{0,7,12,1}};
    //store the sum of rows and columns
    int rowSum[ROW] = {0};
    int colSum[COL] = {0};
    int totalSum = 0;
    // Calculate the sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += array[i][j];
            colSum[j] += array[i][j];
            totalSum += array[i][j];
        }
    }
    //4. Output
    //The row sums
    cout << "\nArray with row sums:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << "| " << rowSum[i] << endl;
    }
    //The column sums
    cout << "---------------------\n";
    for (int j = 0; j < cols; j++) {
        cout << colSum[j] << " ";
    }
    cout << "| " << totalSum << endl;
    return 0;
}
