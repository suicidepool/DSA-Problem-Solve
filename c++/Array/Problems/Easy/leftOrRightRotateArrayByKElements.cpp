// Left or right rotate an array by D places
#include <iostream>
using namespace std;

void reverse(int arr[], int s, int e){
    while(s < e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void rotate(int arr[],int n, int k, string side){
    // first approach
    // if(side == "left"){
    //     int k2 = k % n;
    //     int temp[k2];
    //     for(int i = 0; i < k2; i++){
    //         temp[i] = arr[i];
    //         cout<<"entered"<<endl;
    //     }
        
    //     int x = 0;
    //     for(int i = k2; i < n; i++){
    //         arr[x++] = arr[i];
    //     }
        
    //     for(int i = 0; i < k2; i++){
    //         arr[n-k2+i] = temp[i];
    //     }
    // }

    //second approach
    if(side == "left"){
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        reverse(arr,0,n-1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);

    rotate(arr,n,4,"left");

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}