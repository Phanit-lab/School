#include<iostream>
using namespace std;

void addWord(string wordList[], int& currentCount, int maxCount) {
    int count;
    cout << "How many words do you want to add? : ";
    cin >> count;

    // if (currentCount + count > maxCount) {
    //     cout << "You can only add up to " << maxCount - currentCount << " more words." << endl;
    //     count = maxCount - currentCount;
    // }

    for (int i = 0; i < count; i++) {
        cout << "Word [" << currentCount + 1 << "]: ";
        cin >> wordList[currentCount];
        currentCount++;
    }
}

int main() {
    const int ROW = 20;
    int currentCount = 0;
    string wordList[ROW];
    char con;
    
    do {
        addWord(wordList, currentCount, ROW);
        cout << "Do you want to add more? (Y/N): ";
        cin >> con;
    } while (con == 'Y' || con == 'y');
    
    cout << "\nYou entered the following words:\n";
    for (int i = 0; i < currentCount; i++) {
        cout << wordList[i] << endl;
    }

    for (size_t i = 0; i < currentCount; i++)
    {
        cout<<"The Word are ["<<i+1<<"]"<<wordList[i]<<endl;
    }
    

    return 0;
}
