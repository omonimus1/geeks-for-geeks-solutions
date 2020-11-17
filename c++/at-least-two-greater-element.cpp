// https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements/0/?company[]=Amazon&problemStatus=unsolved&difficulty[]=-2&page=1&sortBy=submissions&query=company[]AmazonproblemStatusunsolveddifficulty[]-2page1sortBysubmissions
#include <bits/stdc++.h>
using namespace std;

void GetAndPrintArrayExpectToBiggest()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++)
        cin >> arr[i];
    if(n <= 2)
    {
        cout <<endl;
        return; 
    }
    sort(arr, arr+n);
    for(int i =0;  i < n-2; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t; 
    while(t>0)
    {
        t--; 
        GetAndPrintArrayExpectToBiggest();
    }
    return 0;
}