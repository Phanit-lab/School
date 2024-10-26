#include <algorithm> // For std::sort
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Structure representing a book
struct Book {
  string title;
  string author;
  string publisher;
  string genre;
};

// Function 
void editBook(Book &book);
void printBooks(const Book books[], int size);
void searchByAuthor(const Book books[], int size, const string &author);
void searchByTitle(const Book books[], int size, const string &title);
void sortByTitle(Book books[], int size);
void sortByAuthor(Book books[], int size);
void sortByPublisher(Book books[], int size);

int main() {
  const int SIZE = 5;
  Book library[SIZE] = {
      {"The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company",
       "Fiction"},
      {"To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.",
       "Fiction"},
      {"1984", "George Orwell", "Secker & Warburg", "Dystopian"},
      {"Moby-Dick", "Herman Melville", "Harper & Brothers", "Adventure"},
      {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons",
       "Fiction"},
};

  int choice;
  do {
    cout << "\n===== Library Menu =====\n";
    cout << "1. Edit a book\n";
    cout << "2. Print all books\n";
    cout << "3. Search books by author\n";
    cout << "4. Search books by title\n";
    cout << "5. Sort books by title\n";
    cout << "6. Sort books by author\n";
    cout << "7. Sort books by publisher\n";
    cout << "8. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cin.ignore(); // To ignore newline character after input
    switch (choice) {
    case 1: {
      int index;
      cout << "Enter book number (1-10) to edit: ";
      cin >> index;
      if (index >= 1 && index <= SIZE) {
        editBook(library[index - 1]);
      } else {
        cout << "Invalid book number!" << endl;
      }
      break;
    }
    case 2:
      printBooks(library, SIZE);
      break;
    case 3: {
      string author;
      cout << "Enter author name: ";
      getline(cin, author);
      searchByAuthor(library, SIZE, author);
      break;
    }
    case 4: {
      string title;
      cout << "Enter book title: ";
      getline(cin, title);
      searchByTitle(library, SIZE, title);
      break;
    }
    case 5:
      sortByTitle(library, SIZE);
      cout << "Books sorted by title." << endl;
      break;
    case 6:
      sortByAuthor(library, SIZE);
      cout << "Books sorted by author." << endl;
      break;
    case 7:
      sortByPublisher(library, SIZE);
      cout << "Books sorted by publisher." << endl;
      break;
    case 8:
      cout << "Exiting program..." << endl;
      break;
    default:
      cout << "Invalid choice! Please try again." << endl;
    }
  } while (choice != 8);

  return 0;
}

// Function to edit a book's details
void editBook(Book &book) {
  cout << "Editing book: " << book.title << endl;
  cout << "Enter new title: ";
  getline(cin, book.title);
  cout << "Enter new author: ";
  getline(cin, book.author);
  cout << "Enter new publisher: ";
  getline(cin, book.publisher);
  cout << "Enter new genre: ";
  getline(cin, book.genre);
}

// Function to print all books in the library
void printBooks(const Book books[], int size) {
  cout << "\n========== All Books ==========\n";
  cout << setw(10) << left << "Book No." << setw(30) << left << "Title"
       << setw(20) << left << "Author" << setw(20) << left << "Publisher"
       << setw(20) << left << "Genre" << endl;
  cout << string(95, '-') << endl;

  for (int i = 0; i < size; ++i) {
    cout << setw(10) << left << i + 1 << setw(30) << left << books[i].title
         << setw(20) << left << books[i].author << setw(20) << left
         << books[i].publisher << setw(20) << left << books[i].genre << endl;
  }
}

// Function to search for books by a specific author
void searchByAuthor(const Book books[], int size, const string &author) {
  cout << "\nBooks by " << author << ":\n";
  bool found = false;
  for (int i = 0; i < size; ++i) {
    if (books[i].author == author) {
      cout << i + 1 << ". Title: " << books[i].title << endl;
      found = true;
    }
  }
  if (!found) {
    cout << "No books found by that author." << endl;
  }
}

// Function to search for books by title
void searchByTitle(const Book books[], int size, const string &title) {
  cout << "\nSearching for book: " << title << endl;
  bool found = false;
  for (int i = 0; i < size; ++i) {
    if (books[i].title == title) {
      cout << "Found: " << books[i].title << " by " << books[i].author << endl;
      found = true;
    }
  }
  if (!found) {
    cout << "No books found with that title." << endl;
  }
}

// Function to sort books by title
void swapBooks(Book &a, Book &b) {
  Book temp = a;
  a = b;
  b = temp;
}

// Bubble sort function to sort books by title
void sortByTitle(Book books[], int size) {
  for (int i = 0; i < size - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < size - i - 1; j++) {
      if (books[j].title > books[j + 1].title) {
        swapBooks(books[j], books[j + 1]);
        swapped = true;
      }
    }
    // If no two elements were swapped, the array is already sorted
    if (!swapped) {
      break;
    }
  }
  cout << "Sorted by title in ascending order successfully!" << endl;
}
// Bubble sort function to sort books by title
void sortByAuthor(Book books[], int size) {
  for (int i = 0; i < size - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < size - i - 1; j++) {
      if (books[j].author > books[j + 1].author) {
        swapBooks(books[j], books[j + 1]);
        swapped = true;
      }
    }
    // If no two elements were swapped, the array is already sorted
    if (!swapped) {
      break;
    }
  }
  cout << "Sorted by title in ascending order successfully!" << endl;
} // Bubble sort function to sort books by title
void sortByPublisher(Book books[], int size) {
  for (int i = 0; i < size - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < size - i - 1; j++) {
      if (books[j].publisher > books[j + 1].publisher) {
        swapBooks(books[j], books[j + 1]);
        swapped = true;
      }
    }
    // If no two elements were swapped, the array is already sorted
    if (!swapped) {
      break;
    }
  }
  cout << "Sorted by title in ascending order successfully!" << endl;
}
