
#include <iostream>
using namespace std;
// Function to add a Employee

struct Employee {
    int id;
    string name;
    double salary;
};

void addEmployee(Employee employees[], int &count, int maxEmployees) {
    if (count >= maxEmployees) {
        cout << "Error: Cannot add more employees. The list is full.\n";
        return;
    }

    cout << "Enter Employee ID: ";
    cin >> employees[count].id;
    cout << "Enter Employee Name: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, employees[count].name);
    cout << "Enter Employee Salary: ";
    cin >> employees[count].salary;

    count++;
    cout << "Employee added successfully!\n";
}

// Function to display all employees
void displayEmployees(Employee employees[], int count) {
    if (count == 0) {
        cout << "No employees to display.\n";
        return;
    }

    cout << "\nEmployee List:\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << employees[i].id << ", Name: " << employees[i].name << ", Salary: " << employees[i].salary << "\n";
    }
}
void editEmployee(Employee employees[], int count) {
    int id;
    cout << "Enter the ID of the Employee to edit: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, employees[i].name);
            cout << "Employee information updated successfully!" << endl;
            return;
        }
    }

    cout << "Employee not found!" << endl;
}

void deleteEmployee(Employee employees[], int& count) {
    int id;
    cout << "Enter the ID of the Employee to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            employees[i] = employees[--count];
            cout << "Employee deleted successfully!" << endl;
            return;
        }
    }

    cout << "Employee not found!" << endl;
}