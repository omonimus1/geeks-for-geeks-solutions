// https://practice.geeksforgeeks.org/problems/array-delete-and-shift/1/?track=DSA-Foundation-Final-Arrays&batchId=193
void deleteFromArray(int arr[], int n, int index){
    for(int i = index; i < n-1; i++)
        arr[i] = arr[i+1];
    arr[n-1] = 0;
}