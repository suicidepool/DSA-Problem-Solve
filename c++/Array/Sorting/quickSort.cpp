// quick sort
#include <iostream>
using namespace std;

int getPivotPoint(int arr[], int s, int e)
{
    int pivot = s;
    int pivotNumberIndex = s;
    int x = s;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] < arr[pivotNumberIndex])
        {
            int temp = arr[i];
            arr[i] = arr[x];
            arr[x] = temp;
            x++;
            pivotNumberIndex = x;
            pivot++;
        }
    }

    int temp = arr[pivot];
    arr[pivot] = arr[pivotNumberIndex];
    arr[pivotNumberIndex] = temp;


    return pivot;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int pivotPoint = getPivotPoint(arr, s, e);

    quickSort(arr, s, pivotPoint - 1);
    quickSort(arr, pivotPoint + 1, e);
}

int main()
{
    int arr[] = {1, 4, 5, 3, 2, 7, 10, 8, 9, 6, 6};

    quickSort(arr, 0, 10);

    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}