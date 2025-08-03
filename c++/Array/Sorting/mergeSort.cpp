// merge sort
#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e){
    int l = s;
    int r = mid + 1;

    int arr2[e - s + 1];

    int k = 0;

    while(l <= mid && r <= e){
        if(arr[l] < arr[r]){
            arr2[k++] = arr[l++];
        }
        else{
            arr2[k++] = arr[r++];
        }
    }

    while(l <= mid){
        arr2[k++] = arr[l++];
    }

    while(r <= e){
        arr2[k++] = arr[r++];
    }

    for(int i = 0; i < e - s + 1; i++){
        arr[s+i] = arr2[i];
    }

}

void mergeSort(int arr[],int s, int e){
    if(s >= e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,mid,e);
}

int main()
{
    
    int arr[] = {1,4,5,3,2};

    mergeSort(arr,0,4);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}