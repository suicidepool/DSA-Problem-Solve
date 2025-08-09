#include <iostream>
using namespace std;

int findLongestSubarraySum(int arr[], int n, int k)
{
    int sumLength = 0;
    int i = 0;
    int j = 0;

    int sum = 0;

    while (j < n)
    {

        if (sum == k)
        {
            int len = j - i;
            if (len > sumLength)
            {
                sumLength = len;
            }
            j++;
            sum += arr[j];
        }
        else if (sum > k)
        {
            sum -= arr[i];
            i++;
        }
        else
        {
            sum += arr[j];
            j++;
        }
    }

    return sumLength;
}

int main()
{
    int arr[] = {2, 3, 0, 5, 1, 9};
    int k = 10;
    int n = sizeof(arr) / sizeof(int);

    int subarraySumLength = findLongestSubarraySum(arr, n, k);

    cout << "Length: " << subarraySumLength << endl;

    return 0;
}