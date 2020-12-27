// https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?track=dsa-workshop-1-arrays&batchId=308
int transitionPoint(int arr[], int n) {
    int left = 0; 
    int right = n-1;
    int middle;
    while(left <= right)
    {
        middle =  (left+right)/2;
        if(arr[middle] == 0)
        {
            if(arr[middle+1] == 1)
                return middle+1;
            else
                left++;
        }
        else if(arr[middle] == 1)
        {
            if(arr[middle-1] ==0)
                return middle; 
            else
                right --;
        }
    }
    return -1;
}