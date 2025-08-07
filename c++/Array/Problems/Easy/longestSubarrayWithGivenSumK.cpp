#include <iostream>
using namespace std;

int findLongestSubarraySum(int arr[], int n, int k){
    int sumLength = 0;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k){
                int len = j - i + 1;
                if(sumLength < len){
                    sumLength = len;
                }
            }
            else if(sum > k){
                break;
            }
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