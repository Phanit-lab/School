#include <iostream>
using namespace std;

int main()
{
    const int MONTHS = 12;
    double profits[MONTHS];
    int start, end;

    cout << "Enter profits each month:" << endl;
    for (int i = 0; i < MONTHS; ++i)
    {

        cout << "Month " << i + 1 << ": ";

        cin >> profits[i];
    }

    cout << "Enter the range (start and end month numbers, 1-12): ";
    cin >> start >> end;

    start--;
    end--;

    if (start < 0 || end >= MONTHS || start > end)
    {
        cout << "Invalid range!" << endl;
        return 1;
    }
    
    double minProfit = profits[start];
    double maxProfit = profits[start];
    int minMonth = start;
    int maxMonth = start;
    for (int i = start + 1; i <= end; ++i)
    {
        if (profits[i] < minProfit)
        {
            minProfit = profits[i];
            minMonth = i;
        }
        if (profits[i] > maxProfit)
        {
            maxProfit = profits[i];
            maxMonth = i;
        }
    }
    cout << "Min profit: " << minProfit << " in month " << minMonth + 1 << endl;
    cout << "Max profit: " << maxProfit << " in month " << maxMonth + 1 << endl;

    return 0;
}