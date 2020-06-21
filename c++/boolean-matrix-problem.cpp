// https://practice.geeksforgeeks.org/problems/boolean-matrix-problem/0/?track=md-arrays&batchId=144
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    int r=2, c=2;
    int mat[r][c] = { { 1, 0} , {0, 0}  };  
int i, j, a, b;

    // Print result
     for(i=0; i < r; i++)
     {
         for(j=0; j < c; j++)
            cout << mat[i][j] << " ";
         cout <<endl;
     }
    // cin >> r >> c;
    cout << "Starting to elaborate" <<endl;
    /*  for(i =0; i < r; i ++)
    {
        for(j=0; j < c; j++)
            cin >> mat[i][j];
    }
    */
    
     for(i=0; i < r;  i++)
     {
         for(j=0; j < c; j++)
         {
             if(mat[i][j] == 1)
             {
                 cout << "I got a  one" <<endl;
                 // Set all the row and columsn to 1
                 for(a=0; a < r; a++)
                 {
                     cout << "Before set a 1" <<endl;
                     cout << mat[i][a]<<endl;
                     mat[i][a] = 1;
                     cout << mat[i][a]<<endl;
                 }
                    
                // Set colums
                for(b =0; b < c; b++)
                    mat[b][j] = 1;
             }
         }
     }
        
     // Print result
     for(i=0; i < r; i++)
     {
         for(j=0; j < c; j++)
            cout << mat[i][j] << " ";
         cout <<endl;
     }
     
}

int main()
{
    int t=1; 
    //cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        solve_test();
    }
	
	return 0;
}