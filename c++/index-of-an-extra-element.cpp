// https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1/?track=amazon-searching&batchId=192
int findExtra(int a[], int b[], int n) {
    for(int i=0; i < n; i++)
    {
        if(a[i] != b[i])
            return i; 
    }
    // If both arrays are equals, return index N; 
    return n;
}