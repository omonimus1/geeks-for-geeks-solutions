// https://practice.geeksforgeeks.org/problems/minimum-product-pair/0/
#include <bits/stdc++.h>
using namespace std;

long int get_min_product()
{
    long int n;
    cin >> n;
    long int arr[n];
    
    for(int i =0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);
    
    return (arr[0] * arr[1]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    while(t--)
    {
        cout << get_min_product()<<endl;
    }
    return 0;
}