//------------------------------------------------------------------
// File name: Exercise_7.cpp
// Assign ID: 
// Due Date: 09/06/24 at 11pm
//
// Purpose: The  user  enters  two  boundaries  of  range;  display  to  the  screen  all  numbers  from this  range.
//
// Author: Mr. KEO Sopahnit
//------------------------------------------------------------------
#include <iostream>

using namespace std;

int main() {
    //1. store
    int start, end;

    //2. Innput

    cout << "Enter the first boundary of the range: ";
    cin >> start;
    cout << "Enter the second boundary of the range: ";
    cin >> end;

    //3. Process

    if (start > end) {
        swap(start, end);
    }

    cout << "\nNumbers in the range from " << start << " to " << end << ":\n";
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
    }
    cout << endl;
    cout << "\nEven numbers in the range:\n";
    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "\nOdd numbers in the range:\n";
    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "\nNumbers divisible by 7 in the range:\n";
    for (int i = start; i <= end; ++i) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}