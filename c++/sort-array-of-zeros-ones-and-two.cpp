// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s-1587115621/1/?track=amazon-sorting&batchId=192
void segragate012(int arr[], int n)
{
    int zeros = 0, ones = 0, two =0;
        
    for(int i =0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            zeros+=1;
        }
        else if(arr[i] == 1)
        {
            ones+=1;
        }
        else if(arr[i] == 2)
        {
            two+=1;
        }
    }
    
    int i=0;
    while(zeros--)
    {
        arr[i] = 0;
        i+=1;
    }
    
    while(ones--)
    {
        arr[i] = 1;
        i+=1;
    }
    
    while(two--)
    {
        arr[i] = 2;
        i+=1;
    }
}