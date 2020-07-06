// https://practice.geeksforgeeks.org/problems/first-repeating-element/0/?track=SPCF-Hashing&batchId=154
#include <bits/stdc++.h>
using namespace std;


int solve_test()
{
    int list_size;
    cin >> list_size;
    int s[list_size];
    
    for(int i =0; i < list_size; i++)
    {
        cin >> s[i];
    }
    
    if(list_size <=1)
        return -1;
        
    unordered_map<int, int>mp;
    for(int i=0; i < list_size; i++)
        mp[s[i]]++;
    
    for(int i=0; i < list_size; i++)
    {
        if(mp[s[i]] > 1 )
        {
            return i+1;
        }
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
