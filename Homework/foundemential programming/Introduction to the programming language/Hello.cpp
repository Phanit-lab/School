#include <iostream>
using namespace std;

//program, library, function, statement
//Data types
//1. Numberic
//1.1. Integer number(short, int and long)
//1.2. Floating point number(float, double and long double)
//2. Text
//2.1. Character(char)
//2.2. String(string)
//3. Logic
//3. Boolean(bool)

int main(){

    //store student data (id, name, sex, phone, address, status)
    //variable declaration and initialization
    int id=101;
    string name="Dara";
    char sex='M';
    string phone="011";
    string address="PP";
    bool status=true;
    int id2=102;
    string name2="Lina";
    char sex2='F';
    string phone2="012";
    string address2="BB";
    bool status2=false;
    //ID    Name    Sex     Phone       Address     Status
    //101   Dara    M       011         PP          1
    //102   Lina    F       012         BB          0
    name2="Kaka";
    cout<<"ID\tName\t\tSex\t\tPhone\t\tAddres\t\tStatus\n";
    cout<<id<<"\t"<<name<<"\t\t"<<sex<<"\t\t"<<phone<<"\t\t"<<address<<"\t\t"<<status<<"\t\n";
    cout<<id2<<"\t"<<name2<<"\t\t"<<sex2<<"\t\t"<<phone2<<"\t\t"<<address2<<"\t\t"<<status2<<"\t\n";

    cout<<sizeof(id)<<" bytes"<<endl;
    cout<<sizeof(name)<<" bytes"<<endl;


    
    return 0;
}