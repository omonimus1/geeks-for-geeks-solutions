// https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row/0
#include <bits/stdc++.h>
using namespace std;

int solve_test()
{u
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for(int i =0; i< n; i++)
    {    for(int j=0; j < m; j++)
            cin >> mat[i][j];
    }
    
    int counter, biggest_index=0; 
    int biggest_sum = -999999;
    for(int i =0; i< n; i++)
    {   counter = 0; 
        for(int j=0; j < m; j++)
        {
            if(mat[i][j] == 1)
               counter++; 
        }
        if(counter > biggest_sum)
        {
            biggest_sum = counter;
            biggest_index = i;
        }
    }
    return biggest_index;
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