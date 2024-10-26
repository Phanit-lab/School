#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

struct Books {
  string title;
  string autthor;
  string publisher;
  string genre;
};

void displayMenu() {
  cout << "----- MENU -----" << endl;
  cout << "1. Edit Books" << endl;
  cout << "2. Show Books" << endl;
  cout << "3. Search Book" << endl;
  cout << "4. Short Books" << endl;
}
void displayUpdate() {
  cout << "----- Edit -----" << endl;
  cout << "1. Title" << endl;
  cout << "2. Pubilsher" << endl;
  cout << "3. Auther" << endl;
  cout << "3. Genre" << endl;
}
void displaySort() {
  cout << "----- Short -----" << endl;
  cout << "1. Title" << endl;
  cout << "2. Auther" << endl;
  cout << "3. Pubilsher" << endl;
}
template <typename T> void input(T &inPut, const string &text) {
  cout << "--> " << text;
  cin >> inPut;
  while (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. " << endl;
    cout << "--> " << text;
    cin >> inPut;
  }
  cin.ignore(
      numeric_limits<streamsize>::max(),
      '\n'); // (For switching between different tpye of input int, string)
}
void addBook(Books book[], int &currentcout) {
  int count;
  input(count, "How many books you want to add? : ");
  for (int i = 0; i < count; i++) {
    cout << "Book[" << i + 1 << "]" << endl;
    input(book[i].title, "Title: ");
    input(book[i].autthor, "Auther: ");
    input(book[i].publisher, "Publisher: ");
    input(book[i].genre, "Genre: ");
    currentcout++;
  }
}
void displaybooks(Books book[], int count) {
  cout << "=========== BOOK INFORMATION ==========" << endl;
  cout << left << setw(5) << "No" << setw(25) << "Title" << setw(20) << "Author"
       << setw(20) << "Publisher" << setw(15) << "Genre" << endl;
  cout << "=========================================" << endl;

  for (int i = 0; i < count; i++) {
    cout << left << setw(5) << (i + 1) << setw(25) << book[i].title << setw(20)
         << book[i].autthor << setw(20) << book[i].publisher << setw(15)
         << book[i].genre << endl;
  }
}
void displayEachBook(Books book[], int index, const int MAX_BOOKS) {
  cout << "====== BOOK =====" << endl;
  cout << " Title: " << book[index].title << endl;
  cout << " Auther: " << book[index].autthor << endl;
  cout << " Publisher: " << book[index].publisher << endl;
  cout << " Genre: " << book[index].genre << endl;
}

int linearSearch(Books book[], int count, string key) {
  for (int i = 0; i < count; i++) {
    if (book[i].title == key) {
      return i;
    }
  }
  return -1;
}
int linearSearchAuther(Books book[], int count, string key) {
  for (int i = 0; i < count; i++) {
    if (book[i].title == key) {
      return i;
    }
  }
  return -1;
}

void update(Books book[], int count, int choice) {
  string title, publisher, auther, genre;
  string newTitle, newPublisher, newAuther, newGenre;
  int index;
  input(title, "Enter title: ");
  index = linearSearch(book, count, title);
  displayUpdate();
  switch (choice) {
  case 1:
    if (index != -1) {
      input(newTitle, "Enter new title: ");
      book[index].title = newTitle;
      cout << "New title successfull updated" << endl;
    } else {
      cout << "Book not found" << endl;
    }
    break;
  case 2:
    if (index != -1) {
      input(publisher, "Enter new Publisher: ");
      book[index].publisher = newPublisher;
      cout << "Publisher Successfull Updated" << endl;
    } else {
      cout << "Book not found\n" << endl;
    }
    break;
  case 3:
    if (index != -1) {
      input(newAuther, "Enter new auther: ");
      book[index].autthor = newAuther;
      cout << "Auther Successfull Updated" << endl;
    } else {
      cout << "Book not found\n" << endl;
    }
    break;
  case 4:
    if (index != -1) {
      input(newGenre, "Enter new auther: ");
      book[index].genre = newGenre;
      cout << "Auther Successfull Updated" << endl;
    } else {
      cout << "Book not found\n" << endl;
    }
    break;
  default:
    cout << "Invalid choice" << endl;
    break;
  }
}
void swappingUser(Books &a, Books &b) {
  Books t = a;
  a = b;
  b = t;
}
void sortByTitle(Books book[], int size) {
    for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
        if (book[j].title > book[j + 1].title) {
          swappingUser(book[j], book[j + 1]);
        }
      }
    }
    cout << "Already shorted by title increase Successful!!" << endl;}

    break;
  case 2:
    for (int i = 0; i < count - 1; i++) {
      for (int j = 0; j < count - i - 1; j++) {
        if (book[j].autthor > book[j + 1].autthor) {
          swappingUser(book[j], book[j + 1]);
        }
      }
    }
    cout << "Already shorted by auther increase Successful!!" << endl;
    break;
  case 3:
    for (int i = 0; i < count - 1; i++) {
      for (int j = 0; j < count - i - 1; j++) {
        if (book[j].publisher > book[j + 1].publisher) {
          swappingUser(book[j], book[j + 1]);
        }
      }
    }
    cout << "Already shorted by name publisher Successful!!" << endl;
    break;
  default:
    cout << "Invalid Choice!!" << endl;
    break;
  }
}
void app() {
  const int MAX_BOOKS = 5;
  Books book[MAX_BOOKS] = {
      {"The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company",
       "Fiction"},
      {"To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.",
       "Fiction"},
      {"1984", "George Orwell", "Secker & Warburg", "Dystopian"},
      {"Moby-Dick", "Herman Melville", "Harper & Brothers", "Adventure"},
      {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons",
       "Fiction"}};
  int curentCount = 0;
  int choice;
  do {
    displayMenu();
    input(choice, "Enter Chhoice: ");
    switch (choice) {
    case 1:
      int updateChoice;
      displayUpdate();
      input(updateChoice, "Enter Chhoice");
      update(book, curentCount, updateChoice);
      break;
    case 2:
      displaybooks(book, curentCount);
      break;
    case 3: {
      int searchChoice;
      string bookTitle, auther;
      cout << "----- Search -----" << endl;
      cout << "1. Title" << endl;
      cout << "2. Auther" << endl;
      input(searchChoice, "Enter Choice: ");
      switch (searchChoice) {
      case 1:
        input(bookTitle, "Enter Title: ");
        displayEachBook(book, linearSearch(book, curentCount, bookTitle),
                        MAX_BOOKS);
        break;
      case 2:
        input(auther, "Enter Title: ");
        displayEachBook(book, linearSearch(book, curentCount, auther),
                        MAX_BOOKS);
        break;
      default:
        cout << "Invalid Choice" << endl;
        break;
      }
      break;
    }
    case 4:
      sortBook(book, curentCount);
      break;

    default:
      cout << "Invalid Choice" << endl;
      break;
    }
  } while (choice != 0);
}
int main() {
  app();
  return 0;
}
