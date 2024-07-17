
#include <iostream>
using namespace std;

int main() {
    // 1. Store or Declare Variables
    const int SIZE=50;
    int nums[SIZE];
    int count;
    int menuChoice;
    enum Menu{
        SCORE = 1,
        DISPLAY,
        EXIT};
    float sum = 0,average = 0;
    int largest = 0;

    // 2. Input 

    do{
        cout << "Menu: "<<endl;
        cout << "1. Enter Scores"<<endl;
        cout << "2. Display Results"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your choice: ";
        cin>>menuChoice;
        switch (menuChoice)
        {   
            case SCORE:
                cout << "How many subject?: ";
                cin >> count;
                for (int i = 0; i < count; i++){
                    cout << "Enter subject[" << i+1 << "] " "score: ";
                    cin >> nums[i];
                }

                // 3. Process
                // Reset 
                sum = 0;
                average = 0;
                largest = 0;
                //find the total student score
                for (int i=0; i < count; i++){
                    sum += nums[i];
                }

                // Find the average student score
                average = sum/count;

                // Find the largest student score
                largest = nums[0];
                for (int i=1; i < count; i++){
                    if (nums[i] > largest){
                        largest = nums[i];
                    }
                }
                break;

        // 4. Output
            case DISPLAY:
                cout << "Total student scores is " << sum << endl;
                cout << "Average score is " << average << endl;
                cout << "Hightest score is " << largest << endl;
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