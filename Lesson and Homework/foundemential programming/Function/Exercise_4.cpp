#include <iostream>
#include <string>

using namespace std;

void displayCard(const string& rank, const string& suit) {
    // Define the card suits and their symbols
    const string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char suitSymbols[] = {'♥', '♦', '♣', '♠'};

    // Find the suit symbol
    char suitSymbol = ' ';
    for (int i = 0; i < 4; ++i) {
        if (suit == suits[i]) {
            suitSymbol = suitSymbols[i];
            break;
        }
    }

    if (suitSymbol == ' ') {
        cout << "Invalid suit." << endl;
        return;
    }

    // Print the card
    cout << "+------+" << endl;
    cout << "|" << rank << "    |" << endl;
    cout << "|      |" << endl;
    cout << "|  " << suitSymbol << "  |" << endl;
    cout << "|      |" << endl;
    cout << "|    " << rank << "|" << endl;
    cout << "+------+" << endl;
}
