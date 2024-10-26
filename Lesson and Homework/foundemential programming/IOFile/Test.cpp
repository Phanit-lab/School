#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "file.txt";
    string lineToUpdate, updatedLine;
    bool lineFound = false;

    // Get input from the user
    cout << "Enter the line you want to update: ";
    getline(cin, lineToUpdate);

    cout << "Enter the updated line: ";
    getline(cin, updatedLine);

    // Open the original file for reading and a temporary file for writing
    ifstream inputFile(filename);
    ofstream tempFile("temp.txt");

    if (inputFile.is_open() && tempFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            if (line == lineToUpdate) {
                tempFile << updatedLine << endl; 
                lineFound = true;
            } else {
                tempFile << line << endl; 
            }
        }

        inputFile.close();
        tempFile.close();

        if (!lineFound) {
            cout << "Line not found in the file." << endl;
            remove("temp.txt"); // Clean up the temporary file
            return 1; 
        }

        // Replace the original file with the updated temporary file
        remove(filename.c_str());
        rename("temp.txt", filename.c_str());

        cout << "File updated successfully!" << endl;
    } else {
        cout << "Unable to open file(s)." << endl;
        return 1; 
    }

    return 0;
}