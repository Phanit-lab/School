#include <iostream>
using namespace std;

int main() {
    //1. Store
    int number, rows, cols;
    //2. Input
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    //3. Process
    const int ROW = 10;
    const int COL = 10;
    int array[ROW][COL];
    int current_value = number;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = current_value;
            current_value += 1;
        }
    }
    //4. Output
    cout << "The created 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
