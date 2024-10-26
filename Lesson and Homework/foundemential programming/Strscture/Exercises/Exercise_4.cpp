#include <iomanip>
#include <iostream>
using namespace std;

// Union for car number (either a five-digit number or a word up to 8
// characters)
union CarNumber {
  int number;   // Five-digit number
  char word[9]; // Word up to 8 characters + null terminator
};

// Enum to track which type of number is stored in the union
enum NumberType { NUMERIC, ALPHANUMERIC };
enum Option {EXIT,ADD,EDIT,PRINT,SEARCH};

// Structure for Car
struct Car {
  string color;
  string model;
  CarNumber number;
  NumberType numType;
};
template <typename T> void input(T inPut, string text) {
  cout << text;
  cin >> inPut;
}

// Function to fill car details
void fillCar(Car &car) {
  int choice;
  input(car.color, "Enter car color: ");
  input(car.model, "Enter car model: ");
  input(choice, "Is the car number a \n1) Numeric value \n2) Alphanumeric word "
                "\nEnter 1 or 2: ");

  if (choice == 1) {
    car.numType = NUMERIC;
    cout << "Enter the car's numeric number (five-digit): ";
    cin >> car.number.number;
  } else {
    car.numType = ALPHANUMERIC;
    cout << "Enter the car's alphanumeric number (up to 8 characters): ";
    cin >> car.number.word;
  }
}

// Function to print car details
void printCar(const Car &car) {
  cout << "\nCar Details: \n";
  cout << "Color: " << car.color << "\n";
  cout << "Model: " << car.model << "\n";
  if (car.numType == NUMERIC) {
    cout << "Number: " << car.number.number << "\n";
  } else {
    cout << "Number: " << car.number.word << "\n";
  }
}

// Function to edit car details
void editCar(Car &car) { fillCar(car); }

// Function to print all cars in the array
void printAllCars(const Car cars[], int size) {
  cout << "\n========== Car List ==========\n";
  for (int i = 0; i < size; ++i) {
    cout << "Car " << i + 1 << ":\n";
    printCar(cars[i]);
    cout << "-------------------------------\n";
  }
}

// Function to search for a car by number
void searchByNumber(const Car cars[], int size) {
  int choice;
  input(choice,"Do you want to search by \n1) Numeric number or \n2) Alphanumeric "
          "number? \n Enter 1 or 2: ");
  if (choice == 1) {
    int searchNum;
    input(searchNum,"Enter the numeric number: ");
    for (int i = 0; i < size; ++i) {
      if (cars[i].numType == NUMERIC && cars[i].number.number == searchNum) {
        cout << "Car found:\n";
        printCar(cars[i]);
        return;
      }
    }
    cout << "Car with numeric number " << searchNum << " not found.\n";
  } else {
    char searchWord[9];
    input(searchWord,"Enter the alphanumeric number: ");
    for (int i = 0; i < size; ++i) {
      if (cars[i].numType == ALPHANUMERIC &&
          (cars[i].number.word, searchWord) == 0) {
        cout << "Car found:\n";
        printCar(cars[i]);
        return;
      }
    }
    cout << "Car with alphanumeric number " << searchWord << " not found.\n";
  }
}

int main() {
  const int SIZE = 10;
  Car cars[SIZE]; // Array of 10 cars

  int option;
  int carIndex;

  // Fill 3 cars initially for testing purposes
  for (int i = 0; i < 3; i++) {
    cout << "\nEnter details for Car " << i + 1 << ":\n";
    fillCar(cars[i]);
  }

  while (true) {
    cout << "\n========== Menu ==========\n";
    cout << "1. Add/Fill Car\n";
    cout << "2. Edit Car\n";
    cout << "3. Print All Cars\n";
    cout << "4. Search Car by Number\n";
    cout << "5. Exit\n";
    cout << "Enter option: ";
    cin >> option;

    switch (option) {
    case ADD:
      if (carIndex < SIZE) {
        cout << "Enter details for Car " << carIndex + 1 << ":\n";
        fillCar(cars[carIndex++]);
      } else {
        cout << "Car array is full!\n";
      }
      break;

    case EDIT:
      cout << "Enter the car index to edit (1 to " << SIZE << "): ";
      cin >> carIndex;
      if (carIndex >= 1 && carIndex <= SIZE) {
        editCar(cars[carIndex - 1]);
      } else {
        cout << "Invalid car index.\n";
      }
      break;

    case PRINT:
      printAllCars(cars, carIndex);
      break;

    case SEARCH:
      searchByNumber(cars, carIndex);
      break;

    case EXIT:
      return 0;

    default:
      cout << "Invalid option.\n";
    }
  }

  return 1;
}
