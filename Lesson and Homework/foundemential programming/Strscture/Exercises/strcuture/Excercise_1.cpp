#include <iostream>
using namespace std;

struct ComplexNumber {
  double real;
  double imag;
  // Constructor
    ComplexNumber(double r = 0, double i = 0) : real(r), imag(i) {}
};

// Addition of two complex numbers
ComplexNumber addition(ComplexNumber num1, ComplexNumber num2) {
  ComplexNumber result;
  result.real = num1.real + num2.real;
  result.imag = num1.imag + num2.imag;
  return result;
}

// Subtraction of two complex numbers
ComplexNumber subtraction(ComplexNumber num1, ComplexNumber num2) {
  ComplexNumber result;
  result.real = num1.real - num2.real;
  result.imag = num1.imag - num2.imag;
  return result;
}

// Multiplication of two complex numbers
// (a+bi)*(c+di)=(ac-bd)+(ad+bc)i
ComplexNumber multiplication(ComplexNumber num1, ComplexNumber num2) {
  ComplexNumber result;
  result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
  result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
  return result;
}

// Division of two complex numbers
// (a+bi)/(c+di)=(ac+bd)/(c^2+d^2) + (bc-ad)i/(c^2+d^2)
ComplexNumber division(ComplexNumber num1, ComplexNumber num2) {
  ComplexNumber result;
  double denominator = num2.real * num2.real + num2.imag * num2.imag;
  if (denominator == 0) {
    throw invalid_argument("Cannot divide by zero complex number");
  }
  result.real = (num1.real * num2.real + num1.imag * num2.imag) / denominator;
  result.imag = (num1.imag * num2.real - num1.real * num2.imag) / denominator;
  return result;
}

// Function to cout the operation in the print (a+bi) + (c+di)
void print(ComplexNumber num1, ComplexNumber num2, string operate) {
  cout << "(" << num1.real << " + " << num1.imag << "i)" << operate << "("
       << num2.real << " + " << num2.imag << "i)" << " = ";
}

// Function to print the result of a complex number operation
void results(ComplexNumber result) {
  if (result.imag >= 0) {
    cout << result.real << " + " << result.imag << "i" << endl;
  } else {
    cout << result.real << " - " << -result.imag << "i" << endl;
  }
}

int main() {
  ComplexNumber z1(1, 4); // 3 + 4i
  ComplexNumber z2(4, 7); // 1 + 7i

  // Addition
  print(z1, z2, " + ");
  results(addition(z1, z2));

  // Subtraction
  print(z1, z2, " - ");
  results(subtraction(z1, z2));

  // Multiplication
  print(z1, z2, " * ");
  results(multiplication(z1, z2));

  // Division
  print(z1, z2, " / ");
  results(division(z1, z2));

  return 0;
}