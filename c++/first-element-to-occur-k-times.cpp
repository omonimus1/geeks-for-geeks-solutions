// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times/0
#include <bits/stdc++.h>
using namespace std;

int solve_test()
{
    int n, k, number; 
    cin >> n >> k;
    int arr[n];
    map<int, int> mp;
    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    
    for(auto x : arr)
    {
        if(mp[x] == k)
            return x;
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
        cout << solve_test() <<endl;
    }
    return 0;
}