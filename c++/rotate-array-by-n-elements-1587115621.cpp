//   https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?track=sp-arrays-and-searching&batchId=152

// This function rotate array by D elements
// arr: input elements
// n: size of the array
void rotateArr(int arr[], int d, int n){
    // Case 1: D == 1
    if(d == 1)
    {
        // We need to shift just last and first element
        int temp;
        temp = arr[n-1];
        arr[n-1] = arr[0];
        arr[0] = temp;
        return;
    }
    
    // Create temporary array
    int temp[d];
    for(int i =0; i < d; i++) temp[i] = arr[i];
    // Shift original array
    for(int i=d; i < n; i++) arr[i-d] = arr[i];
    // Add values of temporary array at the end of our original array    
    int a=0;
    for(int i=n-d; i < n; i++)
    {
        arr[i] = temp[a];
        a++;
    }
}