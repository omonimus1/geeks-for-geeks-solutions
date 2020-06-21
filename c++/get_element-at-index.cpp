
// https://practice.geeksforgeeks.org/problems/get-element-at-index/1/?track=DSA-Foundation-Final-Arrays&batchId=193
//Complete this function
int getByIndex(int arr[],int n,int i)
{
    if(i > n-1)
        return -1;
    else
        return arr[i];
}