#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

// code color
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string BRIGHT_BLUE = "\033[94m";

// Function declaration
void registerUser();
void displayMenuAdmin();
void displayMenuLogin();
void displayMenuControl(string coontrol);
void controlMenu(int control);
void adminMenu(int choise);
void registerUser();

// Main Function

int main()
{
    int loginChoice;

    do
    {
        displayMenuLogin();
        cin >> loginChoice;
        switch (loginChoice)
        {
            enum
            {
                EXIT,
                REGISTER,
                LOGIN
            };
        case REGISTER:
            registerUser();
            break;
        case LOGIN:
        {
            string username, password;
            int choise;
            cout << BRIGHT_BLUE << "-------LOGIN_MENU-------" << RESET << endl;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            cout << GREEN << "Login Successful!!" << RESET << endl;
            do
            {
                displayMenuAdmin();
                cin >> choise;
                adminMenu(choise);
            } while (choise != 0);

            break;
        }
        case EXIT:
            cout << RED << "The Program is Exited" << RESET << endl;
            exit(0);
            break;
        default:
            cout << RED << "Invalid choice!" << RESET << endl;
            break;
        }
    } while (loginChoice != 0);

    return 0;
}

/*
All Function
*/

void controlMenu(int control)
{
    switch (control)
    {
        enum Menu
        {
            EXIT,
            ADD,
            EDIT,
            DELETE,
            SEARCH,
            SHORT,
            DISPLAY,
        };
    case ADD:
    {
        cout << GREEN << "ADD... Successful!!" << RESET << endl;
        break;
    }
    case EDIT:
    {
        cout << GREEN << "EDIT... Successful!!" << RESET << endl;
        break;
    }
    case DELETE:
    {
        cout << GREEN << "DELETE... Successful!!" << RESET << endl;
        break;
    }
    case SEARCH:
    {
        cout << GREEN << "SEARCH... Successful!!" << RESET << endl;
        break;
    }
    case SHORT:
    {
        cout << GREEN << "SHORT... Successful!!" << RESET << endl;
        break;
    }
    case DISPLAY:
    {
        cout << GREEN << "DISPLAY... Successful!!" << RESET << endl;
        break;
    }
    case EXIT:
    {
        cout << "Back to the USER Menu..." << endl;
        break;
    }

    default:
    {
        cout << RED << "Invalid Input" << RESET << endl;
        break;
    }
    }
}
void adminMenu(int choise)
{
    switch (choise)
    {
        {
            int control;

            enum Menu
            {
                EXIT,
                WORD,
                ACCOUNT,
                PLAY

            };
        case WORD:
        {
            int controlWord;
            do
            {
                displayMenuControl("WORD");
                cin >> controlWord;
                controlMenu(controlWord);
            } while (controlWord != 0);
            break;
        }
        case ACCOUNT:
        {
            int controlAccount;
            do
            {
                displayMenuControl("ACCOUNT");
                cin >> controlAccount;
                controlMenu(controlAccount);
            } while (controlAccount != 0);
            break;
        }
        case PLAY:
        {
            cout << RED << "GAME_WILL_RELEASE_SOON" << RESET << endl;
            break;
        }
        case EXIT:
        {
            cout << "Back to the Login Menu..." << endl;
            break;
        }

        default:
        {
            break;
        }
        }
    }
}
void registerUser()
{
    string name, username, password, id, role;
    cout << BRIGHT_BLUE << "---------REGISTER--------" << RESET << endl;
    cout << " Name: ";
    cin >> name;
    cout << " username: ";
    cin >> username;
    cout << " Password: ";
    cin >> password;
    cout << " ID: ";
    cin >> id;
    cout << " Role: " << endl;
    cout << " 1. Admin: " << endl;
    cout << " 2. User " << endl;
    cout << " Chouse role: ";
    cin >> role;
    cout << BRIGHT_BLUE << "------------------------" << RESET << endl;
    cout << GREEN << "Register Successful!!" << RESET << endl;
}

void displayMenuLogin()
{
    cout << BRIGHT_BLUE << "----------MENU----------" << RESET << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "0. Exit the program" << endl;
    cout << BRIGHT_BLUE << "------------------------" << RESET << endl;
    cout << "Enter your chooise: ";
}
void displayMenuAdmin()
{
    cout << BRIGHT_BLUE << "-------ADMIN_MENU-------" << RESET << endl;
    cout << "1. Word Control" << endl;
    cout << "2. User Account Control" << endl;
    cout << "3. Play Game" << endl;
    cout << "0. Back to MENU" << endl;
    cout << BRIGHT_BLUE << "------------------------" << RESET << endl;
    cout << "Enter your chooise: ";
}
void displayMenuControl(string control)
{
    cout << BRIGHT_BLUE << "-------" << control << "_CONTROL-------" << RESET << endl;
    cout << "1. Add " << control << endl;
    cout << "2. Edit " << control << endl;
    cout << "3. Delete " << control << endl;
    cout << "4. Search " << control << endl;
    cout << "5. Short " << control << endl;
    cout << "6. Display " << control << endl;
    cout << "0. Back to ADMIN_MENU" << endl;
    cout << BRIGHT_BLUE << "------------------------" << RESET << endl;
    cout << "Enter your chooise: ";
}