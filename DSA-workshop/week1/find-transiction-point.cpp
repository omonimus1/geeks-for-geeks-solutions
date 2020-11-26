// https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?track=dsa-workshop-1-arrays&batchId=308#
int transitionPoint(int arr[], int n) {
    if (n == 1)
    {
        if (arr[0] == 1)
            return 0;
        return -1;
    }
    int left = 0;
    int right = n - 1;
    int middle;
    while (left < right)
    {
        middle = left + (left + right) / 2;
        if (arr[middle] == 0 && arr[middle + 1] == 1)
            return 1 + middle;
        if (arr[middle] == 1 && arr[middle - 1] == 0)
            return middle;
        if (arr[middle] == 0)
            left += 1;
        if (arr[middle] == 1)
            right--;
    }
    return -1;
}