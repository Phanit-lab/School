#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //1. Store
    const int ROWS1 = 5;
    const int COLS1 = 10;
    const int ROWS2 = 5;
    const int COLS2 = 5;
    int array1[ROWS1][COLS1];
    int array2[ROWS2][COLS2] = {0};
    //2. Input (random)
    //the Random Array
    srand(time(0));
    cout << "5x10 Array (filled with random numbers):\n";
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            array1[i][j] = rand() % 51;
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }
    //3. Process
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            // Calculate the corresponding sum
            int index1 = i * 2;
            int index2 = j * 2;
            
            if (index2 + 1 < COLS1) {
                array2[i][j] = array1[i][index2] + array1[i][index2 + 1];
            }
        }
    }

    //4.Output
    cout << "\n5x5 Array (sums of pairs from the 5x10 array):\n";
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            cout << array2[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
