//https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1/?track=DSA-Foundation-Final-Sorting&batchId=193
// Cannot use sort built-in function
// Max time complecity: O(N);
// Function to sort the array A[]
// A[]: input array
// N: input array
void binSort(int A[], int N)
{
   int zeros = 0; 
   int ones = 0;
   for(int i =0; i < N; i++)
   {
       if(A[i] == 1)
         ones++;
       else
         zeros++;
   }
   
   int i=0;
   while(zeros != 0)
   {
       A[i] = 0;
       i++;
       zeros--;
   }
   
   while(ones != 0)
   {
       A[i]=1;
       i++;
       ones--;
   }
}