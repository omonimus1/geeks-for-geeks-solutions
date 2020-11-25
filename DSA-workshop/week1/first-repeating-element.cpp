// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?track=dsa-workshop-1-arrays&batchId=308
/*
Given an array arr[] of size N, find the first repeating element. 
The element should occurs more than once and the index of its 
first occurrence should be the smallest.
*/
int firstRepeated(int arr[], int n) {
    unordered_map<int, int>mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 1)
            return i + 1;
    }
    return -1;
}