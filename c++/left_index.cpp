// https://practice.geeksforgeeks.org/problems/left-index-1587115620/1/?track=SPCF-Searching&batchId=154
int leftIndex(int N, int arr[], int X){
    if(arr[N-1] < X)
        return -1;
        
    for(int i =0; i < N; i++)
    {
        if(arr[i] == X)
            return i;
    }
    return -1; 
}