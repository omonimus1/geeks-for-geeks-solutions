// https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not/0/?track=md-bm&batchId=144
#include <bits/stdc++.h>
using namespace std;

string solve_test()
{
    long long int n=500; 
    //cin >> n;
    long long int k=3;
    //cin >> k;
    string bit ="";
    if(n == 1)
        return k == 0 ? "YES" : "NO";
    else if(n==2)
        return k == 1 ? "YES" : "NO";
    // n is >=3
    else
    {
        // Bild bitset of our decimal number
        while(n > 0)
        {
            bit.push_back(n%2);
            cout << n%2 << " ";
            n/=2;
        }
        if(bit.size() < k) 
            return "NO";
        // cout << bit <<endl;
        cout << k << endl;
        cout << "bit[bit.size()-1-k] " << bit[bit.size()-1-k] << endl;
        cout << "bit[bit.size()] " << bit[bit.size()] <<endl; 
        return bit[bit.size()+1-k] == 1 ?  "YES" : "NO";
    }
    
}   

int main()
{
    int t=1; 
    //cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        cout << solve_test() <<endl;
    }
	
	return 0;
}