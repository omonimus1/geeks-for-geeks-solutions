// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1/?track=dsa-workshop-1-hashing&batchId=308
bool check(vector<ll> arr, vector<ll> brr, int n) {
    int len1 = arr.size();
    int len2 = brr.size();
    
    if(len1 != len2)
        return false;
    unordered_map<char, int>mp, mp2;
    for(int i =0;  i< len1; i++)
        mp[arr[i]]++;
    for(int i =0; i < len2; i++)
        mp2[brr[i]]++;
        
    for(auto x : mp)
    {
        if(mp2[x.first] != x.second)
            return false; 
    }
    return true; 
}