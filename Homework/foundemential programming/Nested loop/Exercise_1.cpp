//------------------------------------------------------------------
// File name: Exercise_1_to_10.cpp
// Assign ID: 
// Due Date: 16/05/24 at 11pm
//
// Purpose:
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>
using namespace std;

int main(){
    //1. Store
    char choice;

    //2. Inpput
    do{
        cout<<"Manu"<<endl;
        cout<<"a"<<endl;
        cout<<"b"<<endl;
        cout<<"c"<<endl;
        cout<<"d"<<endl;
        cout<<"q = Exit"<<endl;
        cout<<"Enter: ";
        cin>>choice;
        //3. Process
        switch (choice)
        {
        case 'a':
        // a.
            for (int j = 1; j <=5; j++)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if(i>=j){
                        cout <<" * ";   
                    }
                    else{
                        cout<<"   ";
                    }
                    
                }
                cout<<endl;
            }
            /* code */
            break;
        case 'b':
        // b.
            for (int j = 1; j <=5; j++)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if(i<=j){
                        cout <<" * ";   
                    }
                    else{
                        cout<< "  ";
                    }
                    
                }
                cout<<endl;
            }
            cout<<endl;
        break;
        case 'c':
        // c.
            for (int j = 1; j <=5; j++)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if(i>=j ){
                        cout <<"  * ";   
                    }
                    else{
                        cout<< "  ";
                    }
                    
                }
                cout<<endl;
            }
        break;

        case 'd':
        // d.
            for (int j = 1; j <=5; j++)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if(i>= 5 - j + 1 ){
                        cout <<"  * ";   
                    }
                    else{
                        cout<< "  ";
                    }
                    
                }
                cout<<endl; 
            }
        break;

        default:
            break;
        }
    }while (choice == 'a'|| choice=='b' ||choice =='c'|| choice == 'd');

    
    
    return 0;
}