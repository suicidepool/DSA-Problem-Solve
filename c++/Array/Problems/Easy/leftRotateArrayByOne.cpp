// left rotate an array by one place
#include <iostream>
using namespace std;

void rotateArray(int arr[], int n){
    int leftElem = arr[0];
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i-1] = temp;
    }
    arr[n-1] = leftElem;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    rotateArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}