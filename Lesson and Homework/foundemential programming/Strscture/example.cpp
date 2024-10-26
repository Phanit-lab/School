#include <iostream>
using namespace std;

struct Student {
  int id;
  string name;
  string phoneNumber;
  DateOfBirth date;
};
struct DateOfBirth {
  short year;
  short month;
  short day;
};
int main() {
  const int SIZE = 100;
  Student student[SIZE];
  return 0;
}
void studentInfo(int count, Student student[]) {
  for (int i = 0; i < count; i++) {
    cout << "Enter Student ID: ";
    cin >> student[i].id;
    cout << "Enter Student Name: ";
    cin >> student[i].name;
    cout << "Enter Year of birth: ";
    cin >> student[i].date.year;
    cout << "Enter month of birth: ";
    cin >> student[i].date.month;
    cout << "Enter day of birth: ";
    cin >> student[i].date.day;
  }
}
void displayStudent(int count,Student student[]){
    for (int i = 0; i < count; i++)
    {
    cout<<"Name\tID\tDate of birth"
    }
    
}