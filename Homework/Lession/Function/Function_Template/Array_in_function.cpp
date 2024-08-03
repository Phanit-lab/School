#include <iostream>
using namespace std;

// Function declarations
void input(int arr[], int num, int &count);
void output(const int arr[], int count);

int main() {
    const int maxSize = 10;
    int arr[maxSize];
    
    int count = 0; // Initial number of elements
    int choice;

    do {
        // Display menu
        cout << "Menu\n";
        cout << "1. Input numbers\n";
        cout << "2. Output numbers\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:{
                int num;
                cout<<"How many numbers? ";
                cin>>num;
                input(arr, num, count);
                break;
            }
            case 2:
                output(arr, count);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}

// Function to input numbers into the array
void input(int arr[], int num, int &count) {
    // Add new numbers to the array
    for (int i = 0; i < num; i++) {
        cout << "Enter number: ";
        cin >> arr[count++];
    }

}

// Function to output the numbers in the array
void output(const int arr[], int count) {

    cout << "Output: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}