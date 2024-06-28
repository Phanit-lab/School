#include <iostream>
using namespace std;

int main() {
    //1. Store 
    double distanceAB, distanceBC;
    double cargoWeight;
    double refuelingAmount;
    double fuelConsumption, fuelConsumptionAB, fuelConsumptionBC;
    const int MAX_FUEL = 300;
    enum WEIGHT { WEIGHT500 = 500, WEIGHT1000 = 1000, WEIGHT1500 = 1500, WEIGHT2000 = 2000 };
    enum CONSUMPTION{ CONSUM1 = 1, CONSUM4 = 4, CONSUM7 = 7, CONSUM9 = 9};
    int flag ;

    //2. Input and validation
    cout << "Enter the distance from point A to B (in km): ";
    cin >> distanceAB;
    cout << "Enter the distance from point B to C (in km): ";
    cin >> distanceBC;
    cout << "Enter the weight of cargo (in kg): ";
    cin >> cargoWeight;

    //3. Process
    if (distanceAB <= 0 || distanceBC <= 0) {
        cout << "Invalid distance. Distance must be greater than zero." << endl;
        exit(1);
    }

    // Determine fuel consumption per km
    if (cargoWeight <= WEIGHT500) {
        fuelConsumption = CONSUM1;
    } else if (cargoWeight <= WEIGHT1000) {
        fuelConsumption = CONSUM4;
    } else if (cargoWeight <= WEIGHT1500) {
        fuelConsumption = CONSUM7;
    } else if (cargoWeight <= WEIGHT2000) {
        fuelConsumption = CONSUM9;
    } else {
        flag == 0;
    }
    // Calculate fuel consumption
    fuelConsumptionAB = fuelConsumption * distanceAB;
    fuelConsumptionBC = fuelConsumption * distanceBC;

    // Checkrefueling amount

    if (fuelConsumptionAB > MAX_FUEL) {
        flag == 1;
        
    } else if (fuelConsumptionAB + fuelConsumptionBC > MAX_FUEL) {
        if(fuelConsumptionBC > MAX_FUEL){
            flag == 2;
        }else{
            refuelingAmount = MAX_FUEL - fuelConsumptionAB;
            flag == 3;
        }
    } else {
        flag == 4;
    }
    //4. Output
    switch (flag)
    {
    case 0:{
        cout << "Overweight!!! The plane cannot lift." << endl;
        exit(1);
    }
        break;
    case 1:{
        cout << "The aircraft cannot reach point B." << endl;
        exit(1);
    }
        break; 
    case 2:{
        cout << "The aircraft cannot fly from B to C." << endl;
    }
        break;
    case 3:{
        cout << "The aircraft needs to refuel " << refuelingAmount << " liters at point B." << endl;
    }
        break;
    case 4:{
        cout << "The aircraft can fly from A to C without refueling at B." << endl;
    }
        break;
    default:
        break;
    }
    

    return 0;
}
