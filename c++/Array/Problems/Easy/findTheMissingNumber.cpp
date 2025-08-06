// Find the missing number in an array
#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    int xor1 = 0, xor2 = 0;

    for(int i = 0; i < n - 1; i++){
        xor1 = xor1^arr[i];
        xor2 = xor2^(i+1);
    }

    xor2 = xor2 ^ n;

    return xor1 ^ xor2;

}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int missingNum = findMissingNumber(arr, 5);
    cout << "Missing value: " << missingNum << endl;
    return 0;
}