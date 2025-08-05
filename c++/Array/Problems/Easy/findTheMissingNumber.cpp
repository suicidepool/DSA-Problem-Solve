// Find the missing number in an array
#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    int sum1 = n*(n+1)/2;
    int sum2 = 0;
    for(int i = 0; i < n-1; i++){
        sum2 += arr[i];
    }

    return sum1 - sum2;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int missingNum = findMissingNumber(arr, 5);
    cout << "Missing value: " << missingNum << endl;
    return 0;
}