// https://practice.geeksforgeeks.org/problems/multimap-operations/1/?track=module-6-sets-and-maps&batchId=113
//User function Template for C++
multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
   //Insert arr[i] as key and i as value in the multimap 
    for(int i =0; i < n; i++)
    {
        mp.insert({arr[i], i});
    }
    return mp;
}


void multimapDisplay(multimap<int,int>mp)
{
    //Print the keys and value pairs in new line
    for(auto x : mp)
        cout << x.first << " " << x.second << endl;
}


void multimapErase(multimap<int,int>&mp,int x)
{
   //If and else condition to erase x from the multimap
   if(mp.erase(x))
   {
        cout<<"erased "<<x <<endl;  
   }
   else
    cout<<"not found"<<endl;
}