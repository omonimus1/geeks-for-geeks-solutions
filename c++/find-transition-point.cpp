// https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?track=ppc-arrays&batchId=221

int transitionPoint(int arr[], int n) {
    if(arr[n-1] == 0)
        return -1;
    
    if(n==1)
    {
        if(arr[0] == 1)
            return 0; 
        else
            return -1; 
    }
    int L = 0;
    int R = n-1;
    while(L <= R)
    {
        int mid = floor((L+R) /2);
        if(arr[mid] == 1 && arr[mid-1] != 1)
            return mid;
        else if(arr[mid] == 0)
            L = mid+1;
        else if(arr[mid] == 1)
            R = mid-1;
    }
    return -1;
}