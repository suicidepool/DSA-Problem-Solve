#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main()
{

    int arr[] = {1, 4, 5, 3, 2};

    int largest = findLargestElement(arr, 5);

    cout << "Largest element = " << largest << endl;

    return 0;
}