// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/?track=amazon-arrays&batchId=192
void subarraySum(int arr[], int n, int sum){
    
       /* Initialize curr_sum as value of  
    first element and starting point as 0 */
    int curr_sum = arr[0], start = 0, i; 
  
    /* Add elements one by one to curr_sum and  
    if the curr_sum exceeds the sum, 
    then remove starting element */
    for (i = 1; i <= n; i++) { 
        // If curr_sum exceeds the sum, 
        // then remove the starting elements 
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        // If curr_sum becomes equal to sum
        if (curr_sum == sum) { 
            cout << start+1 << " " << i; 
            return; 
        } 
  
        // Add this element to curr_sum 
        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    } 
  
    // If we reach here, then there is no subarray 
    cout << "-1"; 
}