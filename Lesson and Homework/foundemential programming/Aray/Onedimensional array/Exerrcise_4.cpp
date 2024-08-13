#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int original[size] = {0, 1, -1, 3, 4, 4, 3, 2, 8, 9};
    int part1[size / 2], part2[size / 2];

    for (int i = 0; i < size / 2; ++i) {
        part1[i] = original[i];
        part2[i] = original[i + size / 2];
    }

    cout << "First part: ";
    for (int i = 0; i < size / 2; ++i) {
        cout << part1[i] << " ";
    }
    cout << endl;

    cout << "Second part: ";
    for (int i = 0; i < size / 2; ++i) {
        cout << part2[i] << " ";
    }
    cout << endl;

    return 0;
}
