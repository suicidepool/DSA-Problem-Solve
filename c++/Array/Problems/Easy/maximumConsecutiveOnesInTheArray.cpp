// Maximum consecutive one's in an array
#include <iostream>
using namespace std;

int findMaximumConsecutiveOnes(int arr[], int n)
{
    int cnt = 0;
    int tempCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            tempCnt++;
            if(tempCnt > cnt){
                cnt = tempCnt;
            }
        }
        else
        {
            tempCnt = 0;
        }
    }

    return cnt;
}

int main()
{
    int arr[] = {1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(int);
    int cnt = findMaximumConsecutiveOnes(arr, n);
    cout << "Ans: " << cnt << endl;
    return 0;
}