// https://practice.geeksforgeeks.org/problems/print-distinct-elements-1587115620/1/?track=ppc-hashing&batchId=221
// Function to print the non repeated elements in the array
// arr[]: input array
// n: size of array
vector<int> printNonRepeated(int arr[],int n)
{
    unordered_map<int, int>mp;
    for(int i =0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    
    vector<int>s;
    
    // Go through the map
    // unordered_map<int, int> ::iterator itr;
    for(int i =0; i < n; i++)
    {
        if(mp[arr[i]] == 1)
            s.push_back(arr[i]);
    }
    return s; 
}