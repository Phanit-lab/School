#include <iostream>
using namespace std;

int main(){
    //Loop statements
    //1. while 
    //2. do while
    //3. for
    string name;
    int password;
    
    cout<<"Enter name: ";
    cin>>name;
    while(!(name.length()>3)){
        cout<<"Enter name: ";
        cin>>name;
    }
    cout<<"Enter password: ";
    cin>>password;
    while((password<=999)){
        cin.fail();
        cin.clear();
        cout<<"Enter password: ";
        cin>>password;
    }

    while(!(name=="dara" && password==123456)){
            cout<<"Enter name: ";
            cin>>name;
            while(!(name.length()>3)){
                cout<<"Enter name: ";
                cin>>name;
            }
            cout<<"Enter password: ";
            cin>>password;
            while((password<=999)){
                cin.fail();
                cin.clear();
                cout<<"Enter password: ";
                cin>>password;
            }

    }
    cout<<"Corect"<<endl;
    cout<<"Username: "<<name<<endl;
    cout<<"Password: "<<password<<endl;


    return 0;
}