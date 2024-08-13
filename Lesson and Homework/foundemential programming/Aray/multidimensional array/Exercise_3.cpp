#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //1. Store
    int row, cols, shifts;
    char direction;
    //2. Input
    cout << "Enter the number of row: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> cols;
    //3. Process
    // Initialize the 2D array 
    const int ROW = 20;
    const int COL = 20;
    int array[ROW][COL];
    //Random numbers
    srand(time(0));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 10; 
        }
    }
    // Display Random array
    cout << "Initial array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // The number of shifts and direction
    cout << "Enter the number of shifts: ";
    cin >> shifts;
    cout << "Enter the direction (L for left, R for right, U for up, D for down): ";
    cin >> direction;
    switch (direction) {
        case 'R':
        case 'r':
            // Shift right
            for (int i = 0; i < row; i++) {
                for (int s = 0; s < shifts; s++) {
                    int temp = array[i][cols - 1];
                    for (int j = cols - 1; j > 0; j--) {
                        array[i][j] = array[i][j - 1];
                    }
                    array[i][0] = temp;
                }
            }
            break;
        case 'L':
        case 'l':
            // Shift left
            for (int i = 0; i < row; i++) {
                for (int s = 0; s < shifts; s++) {
                    int temp = array[i][0];
                    for (int j = 0; j < cols - 1; j++) {
                        array[i][j] = array[i][j + 1];
                    }
                    array[i][cols - 1] = temp;
                }
            }
            break;
        case 'U':
        case 'u':
            // Shift up
            for (int s = 0; s < shifts; s++) {
                for (int j = 0; j < cols; j++) {
                    int temp = array[0][j];
                    for (int i = 0; i < row - 1; i++) {
                        array[i][j] = array[i + 1][j];
                    }
                    array[row - 1][j] = temp;
                }
            }
            break;
        case 'D':
        case 'd':
            // Shift down
            for (int s = 0; s < shifts; s++) {
                for (int j = 0; j < cols; j++) {
                    int temp = array[row - 1][j];
                    for (int i = row - 1; i > 0; i--) {
                        array[i][j] = array[i - 1][j];
                    }
                    array[0][j] = temp;
                }
            }
            break;
        default:
            cout << "Invalid direction!" << endl;
            return 1;
    }
    //4. Output
    cout << "Array after shift:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
