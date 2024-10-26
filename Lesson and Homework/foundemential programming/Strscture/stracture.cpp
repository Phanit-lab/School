#include <iostream>
using namespace std;

struct Employee {
  int id;
  string name;
  double salary;
};
void employee(int num,Employee emp[]);

int main() {
  const int size = 100;
  Employee emp[size];
  int num;
  // Input
  cout<<"How many Student?";
  cin>>num;
  employee(num,emp);

  // Output
  for (int i = 0; i < num; i++) {
    cout << "ID: " << emp[i].id << " Name: " << emp[i].name
         << " Salary: " << emp[i].salary << endl;
  }

  return 0;
}
void employee(int num,Employee emp[]){
  for (int i = 0; i < num; i++) {
    cout << "Enter ID: ";
    cin >> emp[i].id;
    cout << "Enter name: ";
    cin >> emp[i].name;
    cout << "Enter salary: ";
    cin >> emp[i].salary;
  }
}