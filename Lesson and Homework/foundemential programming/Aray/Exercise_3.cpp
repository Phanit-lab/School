#include <iostream>
using namespace std;

int main()
{
    double sumNegatives = 0;
    double productBetweenMinMax = 1;
    double productEvenIndexed = 1;
    double sumBetweenFirstAndLastNegatives = 0;

    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;
    int N;

    cout << "Enter the number of elements: ";
    cin >> N;

    double *arr = new double[N];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    double minElement = arr[0];
    double maxElement = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < N; ++i)
    {
        if (arr[i] < 0)
        {
            sumNegatives += arr[i];
            if (firstNegativeIndex == -1)
                firstNegativeIndex = i;
            lastNegativeIndex = i;
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    for (int i = min(minIndex, maxIndex) + 1; i < max(minIndex, maxIndex); ++i)
    {
        productBetweenMinMax *= arr[i];
    }

    for (int i = 0; i < N; i += 2)
    {
        productEvenIndexed *= arr[i];
    }

    if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && firstNegativeIndex != lastNegativeIndex)
    {
        for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; ++i)
        {
            sumBetweenFirstAndLastNegatives += arr[i];
        }
    }

    // Output
    cout << "Sum of negative elements: " << sumNegatives << endl;
    cout << "Product of elements between min and max elements: " << productBetweenMinMax << endl;
    cout << "Product of even-indexed elements: " << productEvenIndexed << endl;
    cout << "Sum of elements between the first and last negative elements: " << sumBetweenFirstAndLastNegatives << endl;

    return 0;
}
