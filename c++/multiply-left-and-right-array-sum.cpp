// https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum/0
#include <bits/stdc++.h>
using namespace std;


void solve_test()
{
    long int n;
    cin >> n;
    int i; 
    long int arr[n];
    for(i =0; i < n; i++)
        cin >> arr[i];
        
    int sum_first_half =0, sum_second_half=0;
    int end_first_half = (n/2)-1;

    for(i =0; i <= end_first_half; i++)
        sum_first_half += arr[i];
        
    for(i = end_first_half+1; i < n; i++)
        sum_second_half += arr[i];
        
    cout << sum_first_half * sum_second_half <<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    while(t--)
    {
        solve_test();   
    }
    return 0;
}