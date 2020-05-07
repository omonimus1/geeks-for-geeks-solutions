// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
void sort012(int a[], int n)
{
   if(n == 1)
   {
       return;
   }
   sort(a, a+n);
   
}