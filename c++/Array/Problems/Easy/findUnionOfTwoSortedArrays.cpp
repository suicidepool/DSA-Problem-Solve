// union of two sorted arrays
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionIt(int arr1[],int arr2[], int n, int m){
    set<int> st;
    vector<int> Union;
    for(int i = 0; i < n; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i < m; i++){
        st.insert(arr2[i]);
    }
    for(int element : st){
        Union.push_back(element);
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