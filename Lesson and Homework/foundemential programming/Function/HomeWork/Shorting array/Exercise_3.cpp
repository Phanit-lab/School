#include <iostream>
using namespace std;

void retakeExam(int marks[], int size);
void retakeExam(int marks[], int size);
void checkScholarship(int marks[], int size);
void displayMenu();

enum Menu{ EXIT, OUTPUT, RETAKE_EXAM, CHECK_SCHOOLARSHIP };

int main() {
    const int size = 10;
    int marks[size];

    // Input 10 marks
    cout << "Enter 10 marks for the student:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case OUTPUT:
                outputMarks(marks, size);
                break;
            case RETAKE_EXAM:
                retakeExam(marks, size);
                break;
            case CHECK_SCHOOLARSHIP:
                checkScholarship(marks, size);
                break;
            case EXIT:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
// Display Menu
void displayMenu(){
    cout << "\nMenu:\n";
    cout << "1. Output marks\n";
    cout << "2. Retake exam\n";
    cout << "3. Check if there is a scholarship\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}
// Function to output the marks
void outputMarks(int marks[], int size) {
    cout << "Marks: ";
    for (int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}

// Function to retake an exam
void retakeExam(int marks[], int size) {
    int index, newMark;
    cout << "Enter the index (0 to 9) of the mark you want to change: ";
    cin >> index;

    if (index >= 0 && index < size) {
        cout << "Enter the new mark: ";
        cin >> newMark;
        marks[index] = newMark;
        cout << "Mark updated successfully." << endl;
    } else {
        cout << "Invalid index. Please try again." << endl;
    }
}

// Function to check if the student qualifies for a scholarship
void checkScholarship(int marks[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    double average = sum / size;

    cout << "Average mark: " << average << endl;
    if (average >= 10.7) {
        cout << "The student qualifies for a scholarship." << endl;
    } else {
        cout << "The student does not qualify for a scholarship." << endl;
    }
}