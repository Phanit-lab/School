#include <iostream>
using namespace std;

//Array: 10 50 40 30 20
//index: 0  1  2  3  4 

//Bubole Short
//Step1
//Process1: 10 50 40 30 20
//Process2: 10 40 50 30 20
//Process3: 10 40 30 50 20
//Process4: 10 40 30 20 50
//Step2
//Process1: 10 30 40 20 50
//Process2: 10 30 20 40 50
//Process3: 10 30 20 40 50



//Sort algorithm
//Array: 10 20 30 40 50
//index: 0  1  2  3  4


// Function declarations
void add_numbers(int arr[], int num, int &count);
void view_numbers(const int arr[], int count);
int linear_search(int arr[], int count, int key);
void edit_number(int arr[], int count, int updated_number);
void delete_number(int arr[], int &count, int deleted_number);
void swapping_number(int &a, int &b);
void sort_number(int arr[], int count);

int main() {
    const int maxSize = 10;
    int arr[maxSize];
    int count = 0; // Initial number of elements
    int choice;
    enum Menu {EXIT, ADD_NUMBER, VIEW_NUMBERS, EDIT_NUMBER, DELETE_NUMBER, SORT_NUMBER};

    do {
        // Display menu
        cout << "Menu\n";
        cout << "1. add numbers\n";
        cout << "2. view all numbers\n";
        cout << "3. edit number\n";
        cout << "4. delete number\n";
        cout << "5. Sort numbers\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case ADD_NUMBER:{
                int num;
                cout<<"How many numbers? ";
                cin>>num;
                add_numbers(arr, num, count);
                break;
            }
            case VIEW_NUMBERS:{
                view_numbers(arr, count);
                break;
            }
            case EDIT_NUMBER:{
                int new_number;
                cout<<"Edit number:";
                cin >> new_number;
                edit_number(arr,count,new_number);
                break;
            }
            case DELETE_NUMBER:{
                int new_number;
                cout<<"Delete number:";
                cin >> new_number;
                delete_number(arr, count, new_number);
                break;
            }
            case SORT_NUMBER:{
                sort_number(arr, count);
                cout<<"sorted number"<<endl;
                break;
            }
            case EXIT:{
                cout << "Exiting...\n";
                break;
            }
            default:{
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }

    } while (choice != EXIT);

    return 0;
}

// Function to input numbers into the array
void add_numbers(int arr[], int num, int &count) {
    // Add new numbers to the array
    for (int i = 0; i < num; i++) {
        cout << "Enter number: ";
        cin >> arr[count++];
    }

}

// Function to output the numbers in the array
void view_numbers(const int arr[], int count) {

    cout << "Output: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Function to search the number in the array
int linear_search(int arr[], int count, int key){
    for(int i=0;i<count;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
// Function to edit the number in the array
void edit_number(int arr[], int count, int updated_number){
    int new_number;
    int index = linear_search(arr, count, updated_number);
    if(index!=-1){
        cout<<"Enter new number: ";
        cin>>new_number;
        arr[index]=new_number;
    }else{
        cout << "Number not found"<<endl;
    }
}
// Function to delete the number in the array
void delete_number(int arr[], int &count, int deleted_number){
    int index = linear_search(arr, count, deleted_number);
    if(index!=-1){
        for(int i = index; i<count-1; i++){
            arr[i] = arr[i+1];
        }
        count--;
    }else{
        cout << "Number not found"<<endl;
    } 
}
void swapping_number(int &a, int &b){
    int t;
    t = a;
    a = b;
    b = t;
}
void sort_number(int arr[], int count){
    for(int i=0;i<count;i++){
        for(int j=0;j<count-i-1;j++){
            if(arr[j]<arr[j+1]){
                swapping_number(arr[j],arr[j+1]);
            }
        }
    }
}