#include <iostream>
using namespace std;

void drawSquare(int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void drawRightTriangle(int size) {
    for (int i = 1; i <= size; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void drawShapes() {
    int choice, size;
    do {
        cout << "Menu:\n1. Square\n2. Right Triangle\n3. Exit\nEnter your choice: ";
        cin >> choice;
        if (choice == 3) break;
        cout << "Enter the size: ";
        cin >> size;
        switch (choice) {
            case 1: drawSquare(size); break;
            case 2: drawRightTriangle(size); break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);
}

int main() {
    drawShapes();
    return 0;
}
