#include<iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 100; i <= 999; i++) {
        int hun = i / 100;
        int ten = (i / 10) % 10;
        int one = i % 10;
        if (hun == ten || hun == one || ten == one) {
            count++;
        }
    }
    cout << "Number of integers with two identical figures: " << count << endl;
    return 0;
}
