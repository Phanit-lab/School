#include <iostream>
using namespace std;

struct Car {
  // Member variables
  double length;
  double clearance;
  double engineSize;
  double enginePower;
  double wheelDiameter;
  string color;
  string gearboxType;

  // Constructor with member initialization
  Car(double len, double clr, double engSize, double engPower, double wheelDia,
      string clrCar, string gbxType)
      : length(len), clearance(clr), engineSize(engSize), enginePower(engPower),
        wheelDiameter(wheelDia), color(clrCar), gearboxType(gbxType) {}
};

void display(Car car);
int main() {
  // Create a Car object with specified attributes
  Car myCar(4.5, 20.0, 2.0, 150, 18, "Red", "Automatic");

  // Display car details
  display(myCar);

  return 0;
}
// Function to display car details
void display(Car car) {
  cout << "\tCar Specifications:" << endl;
  cout << "Length: " << car.length << " meters" << endl;
  cout << "Clearance (Ride Height): " << car.clearance << " cm" << endl;
  cout << "Engine Size: " << car.engineSize << " liters" << endl;
  cout << "Engine Power: " << car.enginePower << " HP" << endl;
  cout << "Wheel Diameter: " << car.wheelDiameter << " inches" << endl;
  cout << "Color: " << car.color << endl;
  cout << "Gearbox Type: " << car.gearboxType << endl;
}
