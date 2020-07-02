// https://practice.geeksforgeeks.org/problems/bubble-sort/1/?track=DSA-Foundation-Final-Sorting&batchId=193
void bubble(int arr[], int i, int n)
{
    for(int j=0;j<n-i-1;j++) 
    {
        if(arr[j] >arr[j+1])
            swap(&arr[j],&arr[j+1]);
    }
}