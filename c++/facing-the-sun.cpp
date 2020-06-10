// https://practice.geeksforgeeks.org/problems/facing-the-sun/0
#include <bits/stdc++.h>
using namespace std;

int solve_test()
{
    int n;
    cin >> n;
    if(n==1)
        return 1; 
    int arr[n];
    for(int i =0; i< n; i++) cin >> arr[i];
    
    if(n == 2)
    {
        return 1; 
    }
    int counter =0;
    int last_highest = -99999999;
    for(int i=0; i < n; i++)
    {
        if(i==0)
        {
            counter++;
            last_highest  = arr[0];
            continue;
        }
        if( i == n-1)
        {
            if(arr[i] > arr[i-1] && arr[i] > last_highest)
            {
                return ++counter;
            }
        }
        if(arr[i] > arr[i-1])
        {
            if(arr[i] > last_highest)
            {
                counter++;
                last_highest = arr[i];
            }
        }
    }
    return counter; 
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        cout << solve_test()<<endl;

	return 0;
}