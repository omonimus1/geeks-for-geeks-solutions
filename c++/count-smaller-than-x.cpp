// https://practice.geeksforgeeks.org/problems/count-smaller-than-x/1/?track=DSA-Foundation-Final-Arrays&batchId=193
int smallerThanX(int arr[],int n,int x)
{
    int count = 0;
    for(int i =0; i < n; i++)
    {
        if(arr[i] < x)
            count++;
    }
    return count;
}