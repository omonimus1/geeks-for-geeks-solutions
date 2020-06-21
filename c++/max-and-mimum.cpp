// https://practice.geeksforgeeks.org/problems/maximum-and-minimum-of-array-elements1523/1/?track=DSA-Foundation-Final-Arrays&batchId=193
//Complete the below functions
int maximumElement(int arr[],int n)
{
    sort(arr, arr+n);
    return arr[n-1];
}

int minimumElement(int arr[],int n)
{
    sort(arr, arr+n);
    return arr[0];
}