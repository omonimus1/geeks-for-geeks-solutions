// https://practice.geeksforgeeks.org/problems/count-smaller-elements/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    long int n;
    cin >> n;
    long int arr[n];
    int counter;
    for(int i=0; i < n; i++) cin >> arr[i];
    
    for(int i =0; i < n-1; i++)
    {
        counter = 0;
        for(int j = i+1; j< n; j++)
        {
            if(arr[i] > arr[j])
                counter++;
        }
        cout << counter << " ";
    }
    cout << 0 <<endl;
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