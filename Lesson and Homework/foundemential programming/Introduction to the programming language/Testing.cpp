#include <iostream>
using namespace std;

int main(){

    //1. Store 
    int id=0; //employeeId
    string name="unknown";//employeeName
    char sex='F';
    string phone="010";
    double salary=0;
    bool status=false;
    const string COMPANY="STEP";
    //2. Input
    // cout<<"Enter id: ";
    // cin>>id;
    // cout<<"Enter name: ";
    // cin>>name;
    // cout<<"Enter sex: ";
    // cin>>sex;
    // cout<<"Enter phone: ";
    // cin>>phone;
    // cout<<"Enter salary: ";
    // cin>>salary;
    // cout<<"Enter status: ";
    // cin>>status;
    cout<<"Enter id name sex phone salary status"<<endl;
    cin>>id>>name>>sex>>phone>>salary>>status;

    //3. Process
    //4. output
    cout<<"Employee Info"<<endl;
    cout<<"Employee Id: "<<id<<endl;
    cout<<"Employee Name: "<<name<<endl;
    cout<<"Employee Sex: "<<sex<<endl;
    cout<<"Employee Phone: "<<phone<<endl;
    cout<<"Employee Salary: "<<salary<<endl;
    cout<<"Employee Status: "<<status<<endl;

    return 0;
}