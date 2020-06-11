// https://practice.geeksforgeeks.org/problems/map-operations/1/?track=module-6-sets-and-maps&batchId=113
map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
    for(int i =0; i < n; i++)
        mp[arr[i]] = i;
    
    return mp;
}


void mapDisplay(map<int,int>mp)
{
    for(auto x : mp)
        cout << x.first << " " << x.second << endl;
}


void mapErase(map<int,int>&mp,int x)
{
   //Write the if and else condition to erase x from map
    if (mp.count(x) != 0) {
        mp.erase(x);
        cout<<"erased "<<x<<endl;
    }
    else
        cout<<"not found"<<endl;
}