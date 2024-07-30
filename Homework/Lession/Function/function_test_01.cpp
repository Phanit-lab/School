#include <iostream>
using namespace std;

// function declaration
void display(string display);
int addition(int num1, int num2);
void show(double result);
int readNum(string str);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
double division(double num1, double num2);
void menuChoice(int choice);
void displayMenu();

int main()
{
        int choice;
        do
        {
                // call function
                displayMenu();
                choice = readNum("Chouse number: ");
                while (cin.fail())
                {
                        cin.clear();
                        cin.ignore();
                        display("choose the menu agian: ");
                        cin >> choice;
                }
                menuChoice(choice);

        } while (choice != 0);

        return 0;
}

// Function implement

int readNum(string str)
{
        int num;
        cout << str;
        cin >> num;
        return num;
}
void display(string display)
{
        cout << display << endl;
}
void displayMenu()
{
        cout << "Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "0. Exit" << endl;
}
void show(double result)
{
        cout << "The result is: " << result << endl
             << endl;
}
int addition(int num1, int num2)
{
        return num1 + num2;
}
int subtraction(int num1, int num2)
{
        return num1 - num2;
}
int multiplication(int num1, int num2)
{
        return num1 * num2;
}
double division(double num1, double num2)
{
        return num1 / num2;
}

void menuChoice(int choice)
{
        int num1;
        int num2;

        switch (choice)
        {
        case 1:
                num1 = readNum("Enter number 1: ");
                num2 = readNum("Enter number 2: ");
                show(addition(num1, num2));
                break;
        case 2:
                num1 = readNum("Enter number 1: ");
                num2 = readNum("Enter number 2: ");
                show(subtraction(num1, num2));
                break;
        case 3:
                num1 = readNum("Enter number 1: ");
                num2 = readNum("Enter number 2: ");
                show(multiplication(num1, num2));
                break;
        case 4:
                num1 = readNum("Enter number 1: ");
                num2 = readNum("Enter number 2: ");
                if (num2 == 0)
                {
                        display("Invalid input number 2 can not be zero");
                        display("Please try again");
                }
                else
                {
                        show(division(num1, num2));
                };
                break;
        case 0:
                cout << "THE PROGRAM IS EXITED" << endl;
                exit(0);
        default:
                display("Invalid choice, choose the right option.");
                break;
        }
}
