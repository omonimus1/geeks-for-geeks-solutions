// https://practice.geeksforgeeks.org/problems/find-immediate-greater-than-x/1/?track=DSA-Foundation-Final-Arrays&batchId=193
int immediateGreater(int arr[], int n, int x){
    sort(arr, arr+n);
    
    if(arr[n-1] < x)
        return -1;
    for(int i =0; i < n; i++)
    {
        if(arr[i] > x)
            return arr[i];
    }
}