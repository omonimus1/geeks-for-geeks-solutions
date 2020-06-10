// https://practice.geeksforgeeks.org/problems/reverse-the-array/1/?track=sp-arrays-and-searching&batchId=152
int reverseArray(int arr[],int n)
{
   int start = 0;
   int end = n-1;
   //int temp;
   while(start <= end)
   {
        swap(arr[start], arr[end]);
        start++;
        end--;
   }
}