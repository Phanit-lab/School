
#include <iostream>
using namespace std;

int main() {
    // 1. Store or Declare Variables
    const int SIZE=100;//fix
    int nums[SIZE];
    int count;
    float sum = 0;
    float average = 0;
    int largest;
    char choise;
    char contiue;

    // 2. Input 
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Enter score: "<<endl;
        cout<<"0. To Exit"<<endl;
        cin>>choise;
        switch (choise)
        {
        case 1:
            cout << "How many scores?: ";
            cin >> count;

            for (int i = 0; i < count; i++){
                cout << "Enter subject score[" << i+1 << "]: ";
                cin >> nums[i];
            }

            // 3. Process
            // Find the total student scores
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
            cout << "Total student scores is " << sum << endl;
            cout << "Average score is " << average << endl;
            cout << "Hightest score is " << largest << endl;
        
                    break;
        case 0:
            exit(0);
          
        }


        cout<<"Q to Quit ";
        cin>>contiue;
    }while(contiue != 'q'||contiue !='Q');




        // 4. Output




    return 0;
}