
#include<iostream>
using namespace std;

int main() {

    double distance, consumption_per_100Km, gasolin_consumption;
    cout << "your distance is :";
    cin >> distance;
    cout << "consumption per Km is :";
    cin >> consumption_per_100Km;
    // gasoline consumtion 
    gasolin_consumption = distance * consumption_per_100Km / 100;
    // calculated the cost type of gasolin (total energy $2.5/L, PPT $2.45/L, Tela $2.40/L)
    double total_energy, PTT, Tela;
    total_energy = gasolin_consumption * 2.5;
    PTT = gasolin_consumption * 2.45;
    Tela = gasolin_consumption * 2.40;
    //Display the Table;
    cout << "\nComparative Table With the cost of traveling\n";
    cout << "...................................................\n";
    cout << "   Type of gasolin        |   Travel Cost of " << distance << endl << "\n";
    cout << "...................................................\n";
    cout << "   Total Energy           | $" << total_energy << endl;
    cout << "   PTT                    | $" << PTT << endl;
    cout << "   Tela                   | $" << Tela << endl;
    cout << "...................................................\n";

    return 0;
}