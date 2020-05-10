// https://practice.geeksforgeeks.org/problems/find-immediate-smaller-than-x/1/
// User function to complete
// arr[]: input array
// n: size of array
// k: find element smaller and closest to it. 
int immediateSmaller(int arr[], int n, int x)
{
    // Sort the array
    sort(arr, arr+n);    
    for(int i=0; i < n-1; i++)
    {
        if(i==0 && arr[i] == x)
            return -1;
        if(arr[i] < x && arr[i+1] >= x)
            return arr[i];
    }
    return -1;
}