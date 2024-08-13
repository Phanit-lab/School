#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //1. Store
    int rows, cols;
    int sum = 0, minElement, maxElement;
    double mean;
    //2. Input
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    //3. Process
    const int ROW = 20;
    const int COL = 20;
    int array[ROW][COL];
    //Random array numbers
    srand(time(0));

    cout << "Random array elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 100;
            sum += array[i][j];
            cout << array[i][j] << " ";
            if (i == 0 && j == 0) {
                minElement = array[i][j];
                maxElement = array[i][j];
            }
            if (array[i][j] < minElement) {
                minElement = array[i][j];
            }
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
            }
        }
        cout << endl;
    }
    mean = static_cast<double> (sum) / (rows * cols);
    // 4. Output the results
    cout << "\nSum of all elements: \t\t" << sum << endl;
    cout << "Arithmetic mean of all elements:\t" << mean << endl;
    cout << "Minimum element: \t\t" << minElement << endl;
    cout << "Maximum element: \t\t" << maxElement << endl;
    return 0;
}
