#include <iostream>
using namespace std;

int main() {
    //1. Store
    int num, total = 0; 
    const int NUMBER = 500;

    //.2 Input
    cout << "Enter a number from 0 to 500: ";
    cin >> num;

    //3. Process
    for (int i = num; i <= NUMBER; ++i) {
        total += i;  
    }

    //4. Output
    cout << "The sum of numbers from " << num << " to " << NUMBER << " is: " << total << endl;

    return 0;
}
