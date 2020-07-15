// https://practice.geeksforgeeks.org/problems/find-the-odd-occurence/0
#include <bits/stdc++.h>
using namespace std;

int solve_test()
{
    //map<int, int> mp;
    unordered_map<int, int> umap; 

    int n, number;
    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> number;
        umap[number]++;
    }
    
  
    // Traversing an unordered map 
    for (auto x : umap)
    {
        if( (x.second %2 ) != 0)
            return x.first;
    }
    // Eleemnt with odd frequency do not exists
    return 0; 
    
    
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