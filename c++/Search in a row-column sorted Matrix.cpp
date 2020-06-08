int search( int n,int m, int x, int mat[SIZE][SIZE])
{
   int row=0,col=m-1;
   while(row<n && col>=0)
   {
       if(mat[row][col]<x)
       {
           row++;
       }
       else if(mat[row][col]>x)
       {
           col--;
       }
       else if(mat[row][col]==x)
       {
           return 1;
       }
   }
   return 0;
   
}
