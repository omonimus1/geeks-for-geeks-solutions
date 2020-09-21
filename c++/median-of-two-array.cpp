// https://practice.geeksforgeeks.org/problems/median-of-two-sorted-arrays1618/1/?track=DSASP-Searching&batchId=154
int findMedian(int arr[], int n, int brr[], int m){
    vector<int>final;
    int i;
    for(i=0; i< n; i++)
        final.push_back(arr[i]);
    for(i=0; i< m; i++)
        final.push_back(brr[i]);

    
    int len = m+n; 
    sort(final.begin(), final.end());
    if(len %2 ==0 )
        return (final[len/2] + final[len/2-1])/2;
    else
        return final[len/2];
}