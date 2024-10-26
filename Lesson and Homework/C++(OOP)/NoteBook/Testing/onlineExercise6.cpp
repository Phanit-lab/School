#include <iostream>
using namespace std;

enum TypeOfTriangle { EQUILATERAL, ISOSCELES, SCALENE };

class Triangle {
private:
  double firstLength;
  double secondLength;
  double thirdLength;

public:
  Triangle(double L1, double L2, double L3)
      : firstLength(L1), secondLength(L2), thirdLength(L3) {}

  int checkTypeOfTriangle() {
    if (firstLength == secondLength && secondLength == thirdLength) {
      cout << "Equilateral Triangle" << endl;
      return EQUILATERAL;
    } else if (firstLength == secondLength || firstLength == thirdLength ||
               secondLength == thirdLength) {
      cout << "Isosceles Triangle" << endl;
      return ISOSCELES;
    } else {
      cout << "Scalene Triangle" << endl;
      return SCALENE;
    }
  }
};
void input(double &value, string text) {
  cout << text;
  cin >> value;
}
int main() {
  double side1, side2, side3;
  input(side1, "Enter the Fist Length of triangle: ");
  input(side2, "Enter the second Length of triangle: ");
  input(side3, "Enter the third Length of triangle: ");
  Triangle triangle(side1, side2, side3);

  triangle.checkTypeOfTriangle();

  return 0;
}