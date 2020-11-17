#include <bits/stdc++.h>
using namespace std;

void StoreArray(int *arr, int len)
{
    for(int i =0; i < len; i++)
        cin >> arr[i];
}

int GetSumrrayElements(int *arr, int len)
{
    int sum_elements =0;
    for(int i =0; i< len; i++)
        sum_elements += arr[i];
    return sum_elements; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    int n;
    cin >> t; 
    
    while(t--)
    {   cin >> n; 
        int arr[n];
        StoreArray(arr, n);
        cout << GetSumrrayElements(arr, n)<<endl;
    }
    return 0;
}