//  https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements-1/0
#include <bits/stdc++.h>
using namespace std;

int sum_distinct_elements()
{
    int n, number;
    cin >> n;
    unordered_set<int>s;
    while(n--)
    {
        cin >> number; 
        s.insert(number);
    }
    
    int sum = 0;
    unordered_set <int> :: iterator itr;
    for(itr = s.begin(); itr!= s.end(); itr++)
        sum += *itr;
    return sum; 
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    while(t--)
    {
        cout << sum_distinct_elements() << endl;
    }
    return 0;
}
