// https://practice.geeksforgeeks.org/problems/array-insert-at-index/1/?track=DSA-Foundation-Final-Arrays&batchId=193
void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
    // Shift from index to end arrays element by one
    for(int i = sizeOfArray-1; i >= index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = element;
    
}