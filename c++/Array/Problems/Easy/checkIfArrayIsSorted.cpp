// check if the given array is sorted or not
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 0)
    {
        return false;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5};

    if (isSorted(arr, 6))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}