#include <iostream>

#include "features.cpp"

using namespace std;

int main() {
  const int MAX = 100;
  User user[MAX];
  int num;
  cout<<"How many user you want to add? : ";
  cin>>num;
  addUser(user, num);
  displayUser(user, num);
  return 0;
}