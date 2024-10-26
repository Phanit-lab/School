#include <iostream>
#include <fstream>
using namespace std;
int main() {

    //1. Open file
    ofstream outFile("test.dat", ios::app);
    //2. Write file
    outFile << "Bora 22\n"<<endl;
    //3. Close file
    outFile.close();


    return 0;
}