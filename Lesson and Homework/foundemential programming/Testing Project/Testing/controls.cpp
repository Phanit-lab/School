#include <iostream>

#include "displays.cpp"
#include "features.cpp"
using namespace std;

// Enum
enum Login_Menu { LOGIN_EXIT, REGISTER, LOGIN };
enum Control_Menu {
  CONTROL_EXIT,
  ADD,
  EDIT,
  DELETE,
  SEARCH,
  SHORT,
  DISPLAY,
};
enum Admin_Menu { ADMIN_EXIT, WORD, ACCOUNT, PLAY };

void adminMenu(int choise) {
  switch (choise) {
    {
      int control;
      case WORD: {
        int controlWord;
        do {
          displayMenuControl("WORD");
          cin >> controlWord;
          controlMenuWord(controlWord);
        } while (controlWord != 0);
        break;
      }
      case ACCOUNT: {
        int controlAccount;
        do {
          displayMenuControl("ACCOUNT");
          cin >> controlAccount;
          controlMenuAccount(controlAccount);
        } while (controlAccount != 0);
        break;
      }
      case PLAY: {
        cout << RED << "GAME_WILL_RELEASE_SOON" << RESET << endl;
        break;
      }
      case ADMIN_EXIT: {
        cout << YELLOW << "Back to the Login Menu..." << RESET << endl;
        break;
      }

      default: {
        break;
      }
    }
  }
}
void controlMenuWord(int control)

{
  {
    switch (control) {
      case ADD: {
        addword(word, wordCount);
        cout << GREEN << "ADD... Successful!!" << RESET << endl;

        break;
      }
      case EDIT: {
        string updateWord;
        cout << "Enter Word you want to updated: ";
        cin >> updateWord;
        update(word, wordCount, updateWord, " word");
        cout << GREEN << "EDIT... Successful!!" << RESET << endl;
        break;
      }
      case DELETE: {
        string delete_word;
        cout << "Enter the word you want to delete: ";
        cin >> delete_word;
        deleteFunction(word, wordCount, delete_word);
        cout << GREEN << "DELETE... Successful!!" << RESET << endl;
        break;
      }
      case SEARCH: {
        string keyWord;
        cout << "What word you want to search: ";
        cin >> keyWord;
        linearSearch(word, wordCount, keyWord);
        cout << GREEN << "SEARCH... Successful!!" << RESET << endl;
        break;
      }
      case SHORT: {
        shortWord(word, wordCount);
        cout << GREEN << "SHORT... Successful!!" << RESET << endl;
        break;
      }
      case DISPLAY: {
        displayWord(word, wordCount);
        cout << GREEN << "DISPLAY... Successful!!" << RESET << endl;
        break;
      }
      case CONTROL_EXIT: {
        cout << YELLOW << "Back to the USER Menu..." << RESET << endl;
        break;
      }

      default: {
        cout << RED << "Invalid choise" << RESET << endl;
        break;
      }
    }
  }
}
void controlMenuAccount(int control) {
  {
    switch (control) {
      case ADD: {
        addUser(user,userCount);
        userCount++;
        cout << GREEN << "ADD... Successful!!" << RESET << endl;

        break;
      }
      case EDIT: {
        int edit, newId, newRole;
        string newName;
        cout << "What do you want to eddit? " << endl;
        cout << " 1. Name" << endl;
        cout << " 2. ID" << endl;
        cin >> edit;
        if (edit == 1) {
          cout << "Enter update Name: ";
          cin >> newName;
          update(user[].name,userCount, newName, " name");
        } else if (edit == 2) {
          cout << "Enter update Name: ";
          cin >> newId;
          update(id, accountCount, newId, " id");
        } else if (edit == 3) {
          cout << "Enter update Role: " << endl;
          cout << " 1. Admin" << endl;
          cout << " 2. User" << endl;
          cin >> newRole;
          update(role, accountCount, newRole, " role");
        }
        cout << GREEN << "EDIT... Successful!!" << RESET << endl;
        break;
      }
      case DELETE: {
        string deleteKey;
        cout << "Enter the name you want to delete: ";
        cin >> deleteKey;
        deleteFunction(name, accountCount, deleteKey);
        cout << GREEN << "DELETE... Successful!!" << RESET << endl;
        break;
      }
      case SEARCH: {
        string keyAccount;
        cout << "What word you want to search: ";
        cin >> keyAccount;
        linearSearch(name, accountCount, keyAccount);
        cout << GREEN << "SEARCH... Successful!!" << RESET << endl;
        break;
      }
      case SHORT: {
        shortWord(name, accountCount);
        cout << GREEN << "SHORT... Successful!!" << RESET << endl;
        break;
      }
      case DISPLAY: {
        displayFunction(name, username, password, id, role, accountCount);
        cout << GREEN << "DISPLAY... Successful!!" << RESET << endl;
        break;
      }
      case CONTROL_EXIT: {
        cout << YELLOW << "Back to the USER Menu..." << RESET << endl;
        break;
      }

      default: {
        cout << RED << "Invalid choise" << RESET << endl;
        break;
      }
    }
  }
}