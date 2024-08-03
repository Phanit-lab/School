#include<iostream>
using namespace std;

int main() {
    //1. Store
    int count = 0;
    //2. Input
    //3. Process
    for (int i = 100; i <= 999; i++) {
        int hun = i / 100;
        int ten = (i / 10) % 10;
        int one = i % 10;
        if (hun != ten && hun != one && ten != one) {
            count++;
        }
    }
    //4. Output
    cout << "Number of integers with all different figures: " << count << endl;
    return 0;
}
