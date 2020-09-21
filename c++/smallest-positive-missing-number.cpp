// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/?track=DSASP-Searching&batchId=154
int missingNumber(int arr[], int n) { 
    
    sort(arr, arr+n);
    int smallest = 1; 
    for(int i =0; i< n; i++)
    {
        if(arr[i] == smallest)
            smallest ++; 
    }

    return smallest; 
    
} 