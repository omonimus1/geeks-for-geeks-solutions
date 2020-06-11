
int maxDistance(int arr[], int n)
{
    if(n == 1)
        return 0;
    if(n==2)
    {
        if(arr[0] == arr[1])
            return 1;
        return 0;
    }
    int max = -99999999;
    for(int i =0; i < n-1; i++)
    {
        for(int j= i+1; j <n; j++)
        {
            if(arr[i] == arr[j])
            {
                // We found the same element
                if(j- i  > max )
                max =  j-i;
            }
        }
    }
    return max; 
}