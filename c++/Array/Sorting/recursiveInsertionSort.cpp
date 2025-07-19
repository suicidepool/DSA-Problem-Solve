// implementing insertion sort recursively
#include <iostream>
using namespace std;

void insertionSort(int *arr,int n, int i){

    //base case
    if(i >= n){
        return;
    }


    while(i >= 1 && arr[i] < arr[i-1]){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        i--;
    }


    //recursive part
    insertionSort(arr,n,i+1);

}

int main()
{
int arr[] = {1,4,5,3,2};

    insertionSort(arr,5,0);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}