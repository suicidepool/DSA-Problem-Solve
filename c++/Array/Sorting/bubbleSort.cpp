// bubble sort and insertion sort
#include <iostream>
using namespace std;
class MySort{
    public:
    void bubbleSort(int *arr, int n){
        for(int i = 0;i < n - 1;i++){
            for(int j = 0; j < n - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp; 
                }
            }
        }
    }
};
int main()
{
    int arr[] = {1,4,5,3,2};

    MySort().bubbleSort(arr,5);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}