// Longest subarray with given sum K where the array contains both +ve and -ve numbers
#include <iostream>
using namespace std;

int findLongestSubarraySum(int arr[], int n, int k)
{
    int maxLength = 0;
    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j];
            int len = j - i + 1;
            if(sum == k && len > maxLength){
                maxLength = len;
            }
        }
    }

    return maxLength;
}

int main()
{
    int arr[] = {2, 3, 0, 5, 7, 2, -5, -4, 1, 9};
    int k = 10;
    int n = sizeof(arr) / sizeof(int);

    int subarraySumLength = findLongestSubarraySum(arr, n, k);

    cout << "Length: " << subarraySumLength << endl;

    return 0;
}