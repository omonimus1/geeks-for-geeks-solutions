// https://practice.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s/0
#include <bits/stdc++.h>
using namespace std;

int solve_test()
{
    int n; 
    cin >> n;
    bool arr[n];
    for(int i =0; i <n; i++)
    {
        cin >> arr[i];
    }
    if(arr[n-1] == false)
        return -1;
    for(int i =0; i < n; i++)
    {
        if(arr[i] == true)
            return i;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    while(t--)
    {
        cout <<solve_test()<<endl;
    }
    return 0;
}