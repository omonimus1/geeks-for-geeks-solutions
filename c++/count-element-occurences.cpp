// https://practice.geeksforgeeks.org/problems/count-element-occurences/1/?track=amazon-searching&batchId=192
int countOccurence(int arr[], int n, int k) {
    
    int frequency = n/k;
    map<int, int>mp;
    for(int i =0; i < n; i++)
        mp[arr[i]]++;
    
    int count = 0;
    for(auto x : mp)
    {
        if(x.second > frequency)
            count++;
    }
    return count; 
}