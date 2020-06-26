
int bin_search(int A[], int left, int right, int k)
{
    if (right >= left) { 
        int mid = left + (right - left) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (A[mid] == k) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (A[mid] > x) 
            return bin_search(A, left, mid - 1, k); 
  
        // Else the element can only be present 
        // in right subarray 
        return bin_search(A, mid + 1, right, k); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}
