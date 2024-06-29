#include <iostream>
using namespace std;

int main()
{
    char choice;
    do{
      //-| Display menu and read choice.
      cout<<"Menu"<<endl;
      cout<<"A for add"<<endl;
      cout<<"V for view"<<endl;
      cout<<"Q for quit"<<endl;
      cout<<"Enter choice: ";
      cin>>choice;
      //-| Perform menu choice.
      switch (choice)
      { 
        case 'A':
        case 'a':
            cout<<"add"<<endl;
            break;
        case 'V':
        case 'v':
            cout<<"view"<<endl;
        default:
            cout<<"invalid"<<endl;
       
      }//switch
   }while (choice != 'Q' || choice !='q');


    return 0;
}