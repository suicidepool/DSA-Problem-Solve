// remove duplicate form a sorted array and return the number or unique elements in the array
#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int x = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || arr[i] != arr[i-1]){
            arr[x] = arr[i];
            x++;
        }
    }

    return x;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(int);

    int n2 = removeDuplicates(arr, n);

    for (int i = 0; i < n2; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}