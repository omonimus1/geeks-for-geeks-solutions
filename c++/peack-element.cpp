// https://practice.geeksforgeeks.org/problems/peak-element/1
int peakElement(int arr[], int n)
{
   if(n == 1)
    return 0;
   if(n==2)
   {
        if(arr[0] > arr[1])
            return 0;
        return 1;
   }
   for(int i =0; i< n; i++)
   {
        if(i == 0)
       {
            if (arr[i] > arr[i+1])
                return i;
            continue;
       }
        if(i== n-1)
            return n-1;
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            return i; 
   }
}