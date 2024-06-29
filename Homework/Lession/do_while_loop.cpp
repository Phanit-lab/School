#include <iostream>
using namespace std;

int main()
{
    string name;
    int password;

    do{
        do{
            cout<<"Enter name: ";
            cin>>name;        
        }while(!(name.length()>3));

        do{
            cin.clear();
            cin.ignore();
            cout<<"Enter password: ";
            cin>>password;

        }while((password<=999) || cin.fail());

    }while(!(name=="dara" && password==123456));

    cout<<"Corect"<<endl;
    cout<<"Username: "<<name<<endl;
    cout<<"Password: "<<password<<endl;

    return 0;
}