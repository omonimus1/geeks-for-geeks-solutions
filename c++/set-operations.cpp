// https://practice.geeksforgeeks.org/problems/set-operations/1
set<int> setInsert(int arr[],int n)
{
    set<int>s;
    
    for(int i=0; i< n; i++)
        s.insert(arr[i]);
    
    return s;
}


void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    set <int> :: iterator itr;
    for(itr = s.begin(); itr!= s.end(); itr++)
        cout << *itr << " ";

    cout<<endl;
}


void setErase(set<int>&s,int x)
{
   //write if condition here
   if(s.erase(x))
   {
       s.erase(x);
       cout<<"erased "<<x<<endl;

   }
    else
        cout<<"not found"<<endl;
}