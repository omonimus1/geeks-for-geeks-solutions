//https://practice.geeksforgeeks.org/problems/print-distinct-elements-1587115620/1/?track=dsa-workshop-1-hashing&batchId=308
vector<int> printNonRepeated(int arr[],int n)
{
    unordered_map<int, int>mp;
    for(int i =0; i< n; i++)
        mp[arr[i]]++;
        
    vector<int> result;
    for(int i =0; i< n; i++)
    {
        if(mp[arr[i]] == 1)
            result.push_back(arr[i]);
    }
    return result; 
}