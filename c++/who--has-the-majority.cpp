// https://practice.geeksforgeeks.org/problems/who-has-the-majority/1/?track=ppc-arrays&batchId=221
int majorityWins(int arr[], int n, int x,int y)
{
    int count_x=0;//counter to count frequency of x
    int count_y=0;//counter to count frequency of y
    
    for(int i =0; i < n; i ++)
    {
        if(arr[i] == x)
            count_x++;
        else if(arr[i] == y)
            count_y++;
    }
    if(count_x>count_y)
        return x;
    else if(count_y>count_x)
        return y;
    else
    {
        // they have same frequency
        return min(x, y);
    }
    
}