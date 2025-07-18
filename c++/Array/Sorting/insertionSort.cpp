// bubble sort and insertion sort
#include <iostream>
using namespace std;
    class MySort{
    public:
    void insertionSort(int *arr, int n){
        for(int i = 1; i < n; i++){
            int j = i;
            while(arr[j-1] > arr[j] && j > 0){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }
};
int main()
{
    int arr[] = {1,4,5,3,2};

    MySort().insertionSort(arr,5);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}