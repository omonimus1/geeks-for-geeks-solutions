// https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/1/?track=DSA-Foundation-Final-Arrays&batchId=193
int sumElement(int arr[],int n)
{
    int sum = 0;
    for(int i =0; i < n; i ++)  
        sum += arr[i];
    return sum;
}