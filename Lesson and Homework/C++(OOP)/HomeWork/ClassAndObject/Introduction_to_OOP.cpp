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
  int getNumerator() { return numerator; }
  int getDenominator() { return denominator; }
  void getData(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
  } // a/b + c/d = (ad+bc)/bd
  /*
  f1,f2 f3 = f1.add(f2);
  */
  Fraction add(const Fraction &fraction) const {
    Fraction result;
    result.numerator =
        (numerator * fraction.denominator) + (denominator * fraction.numerator);
    result.denominator = (denominator * fraction.denominator);
    result.getData(result.numerator, result.denominator);
    return result;
  }
  Fraction subtract(const Fraction &fraction) {
    Fraction result;

    result.numerator =
        (numerator * fraction.denominator) - (denominator * fraction.numerator);
    result.denominator = (denominator * fraction.denominator);
    result.getData(result.numerator, result.denominator);
    return result;
  }
  Fraction multiple(const Fraction &fraction) {
    Fraction result;

    result.numerator = (numerator * fraction.numerator);
    result.denominator = (denominator * fraction.denominator);
    result.getData(result.numerator, result.denominator);
    return result;
  }
  // a/b/c/d = ad/ac
  Fraction device(const Fraction &fraction) {
    Fraction result;
    result.numerator = numerator * fraction.denominator;
    result.denominator = denominator * fraction.numerator;
    result.getData(result.numerator, result.denominator);
    return result;
  }
  void display() { cout << numerator << "/" << denominator; }
  void display(Fraction result, Fraction f1, Fraction f2, string operation) {
    f1.display();
    cout << " " << operation << " ";
    f2.display();
    cout << " = ";
    result.display();
    cout << endl;
  }
};

int main() {
  Fraction f1;
  Fraction f2;
  Fraction result;
  f1.getData(2, 2);
  f2.getData(2, 3);
  result = f1.add(f2);
  result.display(result, f1, f2, "+");
  result = f1.subtract(f2);
  result.display(result, f1, f2, "-");
  result = f1.multiple(f2);
  result.display(result, f1, f2, "*");
  result = f1.device(f2);
  result.display(result, f1, f2, "/");
  return 0;
}