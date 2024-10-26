#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void app(const string &name) {
  ofstream myfile("Example.txt");
  myfile.open("Example.txt", ios::app);
  if (myfile.is_open()) {
    cout << "Enter the text:" << endl;
    cin >> name;
    myfile << name << "\n";
    myfile.close();
  } else
    cout << "Unable to open file";
}
int main() {
  int choice;
  string name;
  do {
    cout << "enter Choice: ";
    cin >> choice;
    for (int i = 0; i < choice; i++) {
      app(name);
    }
  }while(choice!=0);
  return 0;
}