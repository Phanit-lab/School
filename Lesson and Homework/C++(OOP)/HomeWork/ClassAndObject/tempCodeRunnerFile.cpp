//------------------------------------------------------------------
// File name: Introduction_to_OOP
// Assign ID:
// Due Date: 11/04/24 at 11pm
//
// Purpose:  Implement the class Fraction and perform arithmetic operation
//
// Done by KEO Sophanit
//------------------------------------------------------------------
#include <iostream>
using namespace std;

class Fraction {
private:
  int numerator;   // a,c
  int denominator; // b,d

public:
  void inputData(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
  } // a/b + c/d = (ad+bc)/bd
  /*
  f1,f2 f3 = f1.add(f2);
  */
  void setFraction(int numerator=0, int denominator=1) {

    this->numerator = numerator;
    this->denominator = denominator;
  }
  Fraction add(const Fraction &fraction) const {
    int numerator;
    int denominator;
    numerator =
        (numerator * fraction.denominator) + (denominator * fraction.numerator);
    denominator = (denominator * fraction.denominator);
    Fraction result;
    result.setFraction(numerator,denominator);
    return result;
  }
  // Fraction subtract(const Fraction &fraction) {
  //   int numerator;
  //   int denominator;

  //   numerator =
  //       (numerator * fraction.denominator) - (denominator * fraction.numerator);
  //   denominator = (denominator * fraction.denominator);
  //   return Fraction(numerator, denominator);
  // }
  // Fraction multiple(const Fraction &fraction) {
  //   int numerator;
  //   int denominator;

  //   numerator = (numerator * fraction.numerator);
  //   denominator = (denominator * fraction.denominator);
  //   return Fraction(numerator, denominator);
  // }
  // // a/b/c/d = ad/ac
  // Fraction device(const Fraction &fraction) {
  //   int numerator;
  //   int denominator;

  //   numerator = numerator * fraction.denominator;
  //   denominator = denominator * fraction.numerator;
  //   return Fraction(numerator, denominator);
  // }
  void display() { cout << numerator << "/" << denominator; }
};

int main() {
  Fraction f1;
  Fraction f2;
  Fraction result;
  f1.inputData(12, 6);
  f2.inputData(6, 12);
  result = f1.add(f2);
  f1.display();
  cout << " + ";
  f2.display();
  cout << " = ";
  result.display();
  // cout<<result.numerator;
  // cout<<result.denominator;

  return 0;
}