#include <iostream>
using namespace std;

class Student {
private:
  string name;
  string id;
  string studentClass;
  int rollNumber;
  double mark;

public:
// constructor 
  Student(const string s_Name, const string s_Id, const string s_Class,
          int &s_RollNumber, double &s_Mark)
      : name(s_Name), id(s_Id), studentClass(s_Class), rollNumber(s_RollNumber),
        mark(s_Mark) {}
 string calculateGrade(){
    if(mark>=90){
        return "A+";
    }
    else if(mark>=80){
        return "A";
    }
    else if(mark>=70){
        return "B";
    }
    else if(mark>=60){
        return "C";
    }
    else {
        return "D";
    }
 }
 void displayInfomation(){
    cout<<"\nThe infomation of student "<<name<<" : "<<endl;
    cout<<"\nName: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Roll Number: "<<rollNumber<<endl;
    cout<<"Mark: "<<mark<<endl;
    cout<<"Grade: "<<calculateGrade()<<"\n"<<endl;
 }
  Student(/* args */);
  ~Student();
};

Student::Student(/* args */) {}

Student::~Student() {}
template<typename T>
void input(T& value, string text){
    cout<<text;
    cin>>value;
}

int main() {
    string name;
    string id;
    string studentClass;
    int rollNumber;
    double mark;
    input(name,"Enter Student Name: ");
    input(id,"Enter Student id: ");
    input(studentClass,"Enter class: ");
    input(rollNumber,"Enter Roll Number: ");
    input(mark,"Enter mark(0-100): ");

    Student student(name,id,studentClass,rollNumber,mark);
    student.displayInfomation();


    
     return 0; }