#include <iostream>
using namespace std;

void findSecondLargest(int arr[], int n)
{

    int lastMax = INT32_MIN;
    int firstMax = INT32_MIN;

    int lastMin = INT32_MAX;
    int firstMin = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstMax)
        {
            lastMax = firstMax;
            firstMax = arr[i];
        }
        else if (lastMax < arr[i] && arr[i] < firstMax)
        {
            lastMax = arr[i];
        }

        if (arr[i] < firstMin)
        {
            lastMin = firstMin;
            firstMin = arr[i];
        }
        else if (arr[i] < lastMin && arr[i] > firstMin)
        {
            lastMin = arr[i];
        }
    }

    cout << "second largest = " << lastMax << endl;
    cout << "second smallest = " << lastMin << endl;
}

int main()
{

    int arr[] = {6, 4, 5, 3, 2, 2};

    findSecondLargest(arr, 5);

    return 0;
}