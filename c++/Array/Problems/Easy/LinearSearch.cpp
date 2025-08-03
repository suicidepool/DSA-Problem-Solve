// find an element is prsent on the arry or not using leanr search
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == num)
            return true;
    return false;
}

int main()
{
    int arr[] = {1, 5, 6, 3, 2, 8, 7};
    int n = sizeof(arr) / sizeof(int);
    int num = 5;
    bool isPresent = linearSearch(arr, n, num);
    if (isPresent)
    {
        cout << num << " is present";
    }
    else
    {
        cout << num << " is not present";
    }
    return 0;
}