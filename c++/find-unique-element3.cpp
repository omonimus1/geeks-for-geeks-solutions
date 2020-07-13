// https://practice.geeksforgeeks.org/problems/find-unique-element/0    
#include <bits/stdc++.h>
using namespace std;

int get_unique()
{
    int n, k;
    cin >> n >> k;
    
    unordered_map<int, int> mp;
    int arr[n];
    for(int i =0; i < n; i++) 
        cin >> arr[i];
        
    
    for(int i =0; i < n; i++)
        mp[arr[i]]++;
        
    for(int i =0; i < n; i++)
    {
        if(mp[arr[i]] == 1)
            return arr[i];
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
        cout << get_unique() <<endl;
    }
    return 0;
}