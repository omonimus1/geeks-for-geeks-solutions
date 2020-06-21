// https://practice.geeksforgeeks.org/problems/count-distinct-elements-1587115620/1/?track=DSA-Foundation-Final-Hashing&batchId=193
int countNonRepeated(int arr[], int n)
{
    int counter = 0;
    unordered_map<int, int>mp;
    for(int i =0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto x : mp)
    {
        if(x.second > 1)
            continue;
        else
            counter++;
    }
    return counter;
}