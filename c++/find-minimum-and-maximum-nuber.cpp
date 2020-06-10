// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    long int n;
    cin >> n;
    long int arr[n];
    for(int i =0; i< n; i++) cin >> arr[i];
    if(n == 1)
    {
        cout << arr[0] << " "<<arr[0] <<endl;
        return;
    }
    sort(arr, arr+n);
    
    cout << arr[0] << " " <<arr[n-1]<<endl; 
}

int main()
{
    int t; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        solve_test();
    }
	
	return 0;
}