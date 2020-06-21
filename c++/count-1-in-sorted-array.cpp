// https://practice.geeksforgeeks.org/problems/count-1s-in-binary-array-1587115620/1/?track=DSA-Foundation-Final-Searching&batchId=193
// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int N)
{
    int counter = 0;
    for(int i =0; i < N; i++)
    {
        if(arr[i] == 1)
            counter++;
        else // We have just 0's so we can stop checking 
            return counter;
    }
    return counter; 
    
}