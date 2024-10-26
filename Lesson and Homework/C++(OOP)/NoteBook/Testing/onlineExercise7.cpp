#include <iostream>
using namespace std;

class Employee {
private:
  string name;
  int id;
  double salary;

public:
  // Constructor
  Employee(string employeeName, int employeeId, double employeeSalary)
      : name(employeeName), id(employeeId), salary(employeeSalary) {}

  // Function to calculate salary based on performance
  double calculateSalary(double performantRate) {
    if (performantRate >= 0.0 && performantRate <= 1.4) {
      salary *= performantRate;
      return salary;
    } else {
      cout << "Invalid performance rating. Salary remains unchanged." << endl;
      return -1;
    }
  }

  // Getters
  string getName() const { return name; }
  int getEmployeeId() const { return id; }
  double getSalary() const { return salary; }

  // Function to show employee info
  void showEmployeeInfo(double mainSalary) {
    cout << "Employee Name: " << getName()  << endl;
    cout << "Employee ID: [" << getEmployeeId() << "]" << endl;
    cout << "Employee Basic Salary: [$" << mainSalary << "]" << endl;
    cout << "Employee After Evaluation Salary: [%" << salary << "]" << endl;
  }
};

// Template to get value from user input
template <typename T> 
void getValue(T &value, string text) {  // Pass by reference
  cout << text;
  cin >> value;
}

int main() {
  string employeeName;
  int employeeId;
  double employeeSalary;
  double performantRate;

  // Get user inputs
  getValue(employeeName, "Enter the employee Name: ");
  getValue(employeeId, "Enter the employee ID: ");
  getValue(employeeSalary, "Enter the employee basic Salary: ");
  getValue(performantRate, "Enter the employee Performant (0 - 1.4): ");

  // Create employee object
  Employee employee(employeeName, employeeId, employeeSalary);

  // Calculate new salary and show information
  employee.calculateSalary(performantRate);
  employee.showEmployeeInfo(employeeSalary);

  return 0;
}
