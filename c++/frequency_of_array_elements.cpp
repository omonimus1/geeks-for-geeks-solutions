// https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1/?track=DSASP-Arrays&batchId=154
void frequencyCount(vector<int>& arr,int N, int P)
{ 
    map<int, int>mp;
    for(int i =0; i< N; i++)
    {
        mp[arr[i]]++; 
    }
    
    for(int i =1; i<= N; i++){
        arr[i-1] =  mp[i];
    } 
}