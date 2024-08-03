#include <iostream>
using namespace std;

int main()
{

    // Exercise 2
    //1. Declare variables
    float subject_1, subject_2, subject_3, totalScore, avgScore;
    char letterGrade;
    bool flag=false;

    //2. User input
    cout << "Please enter your first subject score (0-100): ";
    cin >> subject_1;
    cout << "Please enter your second subject score (0-100): ";
    cin >> subject_2;
    cout << "Please enter your third subject score (0-100): ";
    cin >> subject_3;

    //3. Processing
    totalScore = subject_1 + subject_2 + subject_3;
    avgScore = totalScore / 3;
    if((subject_1>100  subject_1<0)  ||
        (subject_2>100  subject_2<0)  ||
        (subject_3>100 || subject_3<0)){
        flag=true;
        
    }else{
        if (avgScore >= 90){
            letterGrade = 'A';
        }
        else if (avgScore >= 80){
            letterGrade = 'B';
        }
        else if (avgScore >= 70){
            letterGrade = 'C';
        }
        else if (avgScore >= 60){
            letterGrade = 'D';
        }
        else if (avgScore >= 50){
            letterGrade = 'E';
        }
        else{
            letterGrade = 'F';
        }   
    }

    //4. Output
    if(flag){
        cout<<"Error: Invalid input"<<endl;
    }else{
        cout << "\nGrade Status:" << "\nTotal Score: " << totalScore << "\nAverage Score: " << avgScore << "\nGrade: " << letterGrade << endl;

    }
    

    return 0;
}