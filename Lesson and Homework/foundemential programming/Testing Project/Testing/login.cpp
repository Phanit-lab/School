#include<iostream>
using namespace std;

bool login(string username, string password) {
  string keyName = "phanit";
  string keyPassword = "123";
  if (username == keyName && password == keyPassword) {
    return true;
  } else {
    return false;
  }
}