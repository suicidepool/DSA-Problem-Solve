// Move all the zeros to the end of an array

#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n){
    //better approach - time complexity O(2n)
    /* int zeroCount = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else{
            arr[j++] = arr[i];
        }
    }
    for(int i = n - zeroCount; i < n; i++){
        arr[i] = 0;
    } */

    //optimal approach - time complexity O(n)
    int j = -1;
    
    //finding the first occurance of 0
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    cout<<j<<endl;

    //check if there is and any zero or not and if not then we don't have to do anything
    if(j == -1){
        return;
    }

    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j++]);
        }
    }

}

int main()
{
    int arr[] = {1, 0, 2, 3, 0, 4, 0, 1};
    int size = sizeof(arr) / sizeof(int);
    moveZerosToEnd(arr,size);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}