/*
https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?track=dsa-workshop-1-arrays&batchId=308
Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction.
*/
void rotateArr(int arr[], int d, int n) {
    int temp[d];
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];

    // Shift array
    int j = 0;
    for (int i = d; i < n; i++)
    {
        arr[j] = arr[i];
        j++;
    }

    j = 0;
    // store temp elements in original array, starting from index d;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[j++];
    }
}