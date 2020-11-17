//https://practice.geeksforgeeks.org/problems/reverse-an-array/1/?track=DSASP-LinkedList&batchId=154
#include <bits/stdc++.h>
using namespace std;

void ReverseArray (int *arr, int len)
{
    int start; 
    int end = len-1; 
    for(start = 0; start < len/2; start++)
    {
        swap(arr[start], arr[end]);
        end--; 
    }
}

void PrintArray (int *arr, int len)
{
    for(int i =0; i< len; i++)
        cout << arr[i] << " ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    int n; 
    cin >> t; 
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i =0; i< n; i++)
            cin >> arr[i];
        ReverseArray(arr, n);
        PrintArray(arr, n);
    }
    return 0;
}