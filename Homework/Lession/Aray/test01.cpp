#include <iostream>
using namespace std;

int main() {
    const int MAX_SUBJECT = 100;
    const int MAX_STUDENT = 100;
    int scores[MAX_STUDENT][MAX_SUBJECT];
    string names[MAX_STUDENT];
    int numSubjects[MAX_STUDENT];
    int numStudents = 0;
    int menuChoice;
    
    do {
        cout << "Menu: " << endl;
        cout << "1. Enter student data" << endl;
        cout << "2. Display results" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> menuChoice;
        
        switch (menuChoice) {
            case 1: {
                cout << "Enter number of students: ";
                cin >> numStudents;
                
                for (int i = 0; i < numStudents; ++i) {
                    cout << "Enter student name: ";
                    cin >> names[i];
                    
                    cout << "Enter number of subjects for student " << names[i] << ": ";
                    cin >> numSubjects[i];
                    
                    for (int j = 0; j < numSubjects[i]; ++j) {
                        cout << "Enter score for subject " << j + 1 << ": ";
                        cin >> scores[i][j];
                    }
                }
                break;
            }
            
            case 2: {
                // Display all students' data
                for (int i = 0; i < numStudents; ++i) {
                    int sum = 0;
                    int largest = scores[i][0];
                    
                    for (int j = 0; j < numSubjects[i]; ++j) {
                        sum += scores[i][j];
                        if (scores[i][j] > largest) {
                            largest = scores[i][j];
                        }
                    }
                    
                    double average = static_cast<double>(sum) / numSubjects[i];
                    
                    cout << "Student " << names[i] << " results:" << endl;
                    for (int j = 0; j < numSubjects[i]; ++j) {
                        cout << "Subject " << j + 1 << " score: " << scores[i][j] << endl;
                    }
                    cout << "Total score: " << sum << endl;
                    cout << "Average score: " << average << endl;
                    cout << "Highest score: " << largest << endl;
                    cout << "---------------------" << endl;
                }
                break;
            }
            
            case 3:
                cout << "Exiting program." << endl;
                break;
                
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        
    } while (menuChoice != 3);
    
    return 0;
}
