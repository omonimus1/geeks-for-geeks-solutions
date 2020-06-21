// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1/?track=DSA-Foundation-Final-Searching&batchId=193
// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searched
int searchInSorted(int arr[], int N, int K) 
{ 
    for(int i =0; i< N; i++)
    {
        if(arr[i] == K)
            return 1;
        else if(arr[i] > K)
            return -1;
    }
    return -1; 
   
}