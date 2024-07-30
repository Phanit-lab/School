#include <iostream>
using namespace std;

int main() {
    int cellSize = 3;

    for (int row = 0; row < 2; ++row) { 
        for (int subRow = 0; subRow < cellSize; ++subRow) {
            for (int col = 0; col < 8; ++col) { 
                for (int subCol = 0; subCol < cellSize; ++subCol) { 
                    if ((row + col) % 2 == 0) {
                        cout << '*';
                    } else {
                        cout << '-';
                    }
                }
           }
            cout << endl;
        }
    }

    return 0;
}
