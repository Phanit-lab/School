#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Minimun element in array is: " << min << endl;
    cout << "Maximun element in array is: " << max << endl;

    return 0;
}