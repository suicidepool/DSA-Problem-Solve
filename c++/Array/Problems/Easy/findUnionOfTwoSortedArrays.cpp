// union of two sorted arrays
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> unionIt(int arr1[],int arr2[], int n, int m){
    map<int,int> mp;
    vector<int> Union;

    for(int i = 0; i < n; i++){
        mp[arr1[i]]++;
    }
    for(int i = 0;i < m; i++){
        mp[arr2[i]]++;
    }

    for(const auto& pair: mp){
        Union.push_back(pair.first);
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