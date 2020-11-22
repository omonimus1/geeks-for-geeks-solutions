// https://practice.geeksforgeeks.org/problems/who-has-the-majority/1/?track=dsa-workshop-1-arrays&batchId=308#
/*
Given an array arr[] of size N and two elements x and y, use counter variables to find which element 
appears most in the array, x or y. If both elements have the same frequency, then return the smaller 
element.
Note:  We need to return the element, not its count.
*/
int majorityWins(int arr[], int n, int x,int y)
{
    int frequency_x = 0, frequency_y = 0; 
    for(int i =0;  i< n; i++)
    {
        if(arr[i] == x)
            frequency_x ++;
        if(arr[i] == y)
            frequency_y++;
    }
    if(frequency_x == frequency_y)
        return min(x, y);
    else if(frequency_x > frequency_y)
        return x; 
    else
        return y; 
}