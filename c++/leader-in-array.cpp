// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=sp-arrays-and-searching&batchId=152

// Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n){
    vector<int> res;
    // Ad last element of the vector beause it's always a leader
    res.push_back(arr[n-1]);
    
    int maxelement=arr[n-1];
    
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=maxelement){
            maxelement=arr[i];
            res.push_back(maxelement);
        }
    }
    reverse(res.begin(),res.end());
    return res;
    
}