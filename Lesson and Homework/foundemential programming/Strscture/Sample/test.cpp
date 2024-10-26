#include <iostream>
#include "funnction.cpp"
using namespace std;

// Structure to hold Employee information


// Function prototypes
/*
Main Menu
1. Employee Management
*/


int main() {
    const int maxEmployees = 100;  // Maximum number of employees
    Employee employees[maxEmployees]; // Array to store Employee information
    int count = 0;          // Current count of employees
    int choice;

    do {
        // Display menu
        cout << "\nEmployee Information Managemetn System\n";
        cout << "1. Add a new employee\n";
        cout << "2. Display all employees\n";
        cout << "3. Edit an employee\n";
        cout << "4. Delete an employee\n";
        cout << "5. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle menu choices
        switch (choice) {
            case 1:
                addEmployee(employees, count, maxEmployees);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                editEmployee(employees, count);
                break;
            case 4:
                deleteEmployee(employees, count);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

