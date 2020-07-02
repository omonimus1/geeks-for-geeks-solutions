// https://practice.geeksforgeeks.org/problems/merge-sort/1/?track=DSA-Foundation-Final-Sorting&batchId=193
 void merge(int arr[], int l, int m, int r)
{
     int i, j, k;
     i = j = k = 0;
     int n1 = m - l +1;
     int n2 = r - m;
     // Create two temporary array
     int L[n1], R[n2];
     
     for(i = 0; i < n1; i++)
        L[i] = arr[l+i];
        
    for(j=0; j <n2; j++)
        R[j] = arr[m+1+j];
        
    i= j=0;
    k=l;
    
    
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while(j < n2)
    {
        arr[k] = R[j];
        k++;
        j++;
    }
    
    
}