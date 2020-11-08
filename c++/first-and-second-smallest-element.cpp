//  https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array/0/?company[]=Goldman%20Sachs&problemStatus=unsolved&difficulty[]=-1&page=1&query=company[]Goldman%20SachsproblemStatusunsolveddifficulty[]-1page1#
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i< n; i++)
        cin >> arr[i];
    if(n <= 1)
        cout <<"-1"<<endl;
    else
    {
        sort(arr, arr+n);

        // CHeck if there are two numbers
        if(n == 2)
        {
            if(arr[0] == arr[1])
                cout << "-1"<<endl; 
            else
                cout << arr[0] << ' ' << arr[1]<<endl; 
        }
        // There are > than 2 element, search first and second smallest; 
        int smallest = arr[0];
        int biggest = smallest;
        int i = 1; 
        while(i < n)
        {
            if(arr[i] != arr[0])
            {
                cout << smallest << ' ' << arr[i] <<endl; 
                return; 
            }
            i+=1; 
        }
        cout<< "-1" <<endl;
    }
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