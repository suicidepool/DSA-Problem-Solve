// Find the number that appears once and the otehr numbers twice

#include <iostream>

using namespace std;

int findOnceOccuredNumber(int arr[], int n){
    int numsXor = 0;
    for(int i = 0; i < n; i++){
        numsXor = numsXor ^ arr[i];
    }
    return numsXor;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 3, 2, 4, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    int num = findOnceOccuredNumber(arr, n);

    cout << "ans: " << num << endl;

    return 0;
}