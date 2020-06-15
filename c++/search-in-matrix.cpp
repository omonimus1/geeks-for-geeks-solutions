// https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1/?track=ppc-matrix&batchId=221

/*  Function to search x in the input matrix
*   n, m: rows and columns of matrix
*   x: element to check presence in matrix
*   mat[][]: input matrix
*/
int search( int n,int m, int x, int mat[SIZE][SIZE])
{
   for(int  i=0; i < n; i ++)
   {
       for(int j=0; j < m; j++)
       {
           if(mat[i][j] == x)
                return 1;
       }
   }
   return 0;
}