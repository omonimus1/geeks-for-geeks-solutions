// https://practice.geeksforgeeks.org/problems/is-array-sorted/1/?track=DSA-Foundation-Final-Arrays&batchId=193
bool increasing_order(int arr[], int n)
{
    for(int i =1; i < n; i ++)
    {
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
}


bool decreasing_order(int arr[], int n)
{
    for(int i =1; i < n; i ++)
    {
        if(arr[i] > arr[i-1])
            return false;
    }
    return true;
}


//Complete this function
int isSorted(int arr[],int n)
{
    if(n <=1)
        return 1;
    if(n == 2)
    {
        if(arr[0] == arr[1])
            return false;
        return true;
    }
    return (increasing_order(arr, n) || decreasing_order(arr, n) );
}