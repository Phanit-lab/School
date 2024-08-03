#include <iostream>
#include "Functtion_L.cpp"
using namespace std;

int main()
{

    // Store
    int num1;
    int num2;
    int r;
    // Input
    num1 = get_number("Enter number1: ");
    num2 = get_number("Enter number2: ");
    // Process
    r = add(num1, num2);
    // Output
    show("The result is ", r);

    return 0;
}
