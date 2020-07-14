// https://practice.geeksforgeeks.org/problems/balanced-array/0
#include <bits/stdc++.h>
using namespace std;

int solve_test()
{
    long int n;
    cin >> n;
    long int arr[n];
    int i;
    for(i =0; i < n; i++) cin >> arr[i];
    
    if(n == 2)
    {
        if(arr[0] == arr[1])
            return 0;
        return abs(arr[1] - arr[0]);
    }
    
    int sum_right_side =0, sum_left_side = 0;
    int end_first_half= (n/2)-1;
        
    for(i =0; i <=end_first_half; i++)
        sum_left_side += arr[i];
    for( i=end_first_half+1; i < n; i++)
        sum_right_side += arr[i];

    return abs(sum_right_side - sum_left_side);
    
}

int main()
{
    int t; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        cout << solve_test()<<endl;
    }
	
	return 0;
}