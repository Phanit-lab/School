
#include <iostream>
using namespace std;

int main() {
    // 1. Store or Declare Variables
    const int MAX_SUBJECT = 100;
    const int MAX_STUDENT = 100;
    int nums[MAX_SUBJECT];
    string name[MAX_STUDENT];
    int subject;
    int student;
    int menuChoice;
    enum Menu{DATA = 1,DISPLAY,EXIT};
    float sum = 0,average = 0;
    int largest = 0;

    // 2. Input 

    do{
        cout << "Menu: "<<endl;
        cout << "1. Enter student"<<endl;
        cout << "2. Display Results"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your choice: ";
        cin>>menuChoice;
        switch (menuChoice)
        {   
            case DATA:
                cout<< "How many students?: ";
                cin>>student;
                for (int j = 0; j < student ; j++)
                {
                    cout<<"Enter student name: ";
                    cin>>name[j];    
                    cout << "How many subject?: ";
                    cin >> subject;
                    for (int i = 0; i < subject; i++){
                        cout << "Enter subject[" << i+1 << "] " "scores: ";
                        cin >> nums[i];
                    }

                }
                // 3. Process
                // Reset 
                sum = 0;
                average = 0;
                largest = 0;
                //find the total student DATA
                for (int i=0; i < subject; i++){
                    sum += nums[i];
                }

                // Find the average student DATA
                average = sum/subject;

                // Find the largest student DATA
                largest = nums[0];
                for (int i=1; i < subject; i++){
                    if (nums[i] > largest){
                        largest = nums[i];
                    }
                } 
                break;
                
                

        // 4. Output
            case DISPLAY:
                for (int i = 0;i<student; i++)
                {

                    cout<<"------------------------------------"<<endl;
                    cout<<"Student "<<name[i]<<endl;
                    for(int j=0; i< subject;j++){
                        cout<<"Subject "<<j+1<<" score: "<<nums[j]<<endl;
                    }
                    cout << "Total student score is " << sum << endl;
                    cout << "Average score is " << average<< endl;
                    cout << "Hightest score is " << largest<< endl;
                    cout<<"------------------------------------"<<endl;
                
                }
                break;
                


            case EXIT:
                cout << "Exit" << endl;
                break;

            default:{
                cout<< "Invalid Choice. Please try again."<<endl;
            }
            }
    }while(menuChoice != EXIT);


    return 0;
}