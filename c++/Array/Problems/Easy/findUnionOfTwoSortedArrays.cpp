// union of two sorted arrays
#include <iostream>
#include <vector>
using namespace std;

vector<int> unionIt(int arr1[],int arr2[], int n, int m){
    vector<int> Union;
    int i = 0;
    int j = 0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            if(i == 0 || Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(j == 0 || Union.back() != arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n){
        if(Union.back() != arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }

    while(j < m){
        if(Union.back() != arr2[j]){
            Union.push_back(arr2[j]);
        }
        j++;
    }

    return Union;

}

int main()
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {2,3,4,4,5};
    int n = 5, m = 5;

    vector<int> a3 = unionIt(a1,a2,n,m);

    for(int a: a3){
        cout<<a<<" ";
    }

    return 0;
}