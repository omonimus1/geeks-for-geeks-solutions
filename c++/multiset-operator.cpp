// https://practice.geeksforgeeks.org/problems/multiset-operations/1/
multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
    for(int i=0; i<n; i++)
        s.insert(arr[i]);
    
    return s;
    
}


void multisetDisplay(multiset<int>s)
{
    multiset<int> :: iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++)
        cout << *itr<< " "; 
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    //If and else condition to erase x from multiset
    if(s.erase(x))
        cout<<"erased "<<x<<endl;
    else
        cout<<"not found"<<endl;
}