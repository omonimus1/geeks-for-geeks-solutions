//  https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?track=SPCF-Arrays&batchId=154
// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    if(n==1)
        return 1;
    /*
    The idea is to get total sum of array first. 
    Then Iterate through the array and keep updating the 
    left sum which is initialized as zero. In the loop, we 
    can get right sum by subtracting the elements one by one. 
    Then check whether Leftsum and Rightsum are equal.
    */
    int sum =0;
    for(int i =0; i <n; i++)
        sum += a[i];
    
    int left_sum =0;
    for(int i =0; i < n; i++)
    {
        sum -= a[i];
        if(sum == left_sum)
            return i+1; 
        left_sum += a[i];
    }
    return -1;
}