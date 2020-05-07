// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree/0
#include <iostream>
using namespace std;

void solve_test()
{
    int n;
    cin >>n;
    int matrix[n][n];
    for(int i=0; i< n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> matrix[i][j];
    }
    for(int i=n-1; i >=0; i--)
    {
        for(int j=0; j<n; j++)
            cout << matrix[j][i] << " ";
    }
    cout << endl;
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