// https://practice.geeksforgeeks.org/problems/greater-on-right-side/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    long int n;
    cin >> n;
    long int arr[n];
    for(int i=0; i < n; i++) cin >> arr[i];
    bool greater_found;
    int max;
    for(int i =0; i < n-1; i++)
    {
        max = -1;
        for(int j = i+1; j < n; j++)
        {
            if (arr[j] > max)
                max = arr[j];
        }
        if(max != -1)
            arr[i] = max;
        else
            arr[i] = -1;
    }
    
    // Print array
    arr[n-1] = -1;
    for(int i =0; i < n; i++) cout << arr[i] << " ";
    cout<<endl;
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