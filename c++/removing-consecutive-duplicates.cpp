// https://practice.geeksforgeeks.org/problems/removing-consecutive-duplicates-1587115621/1/?track=SPC-Stack&batchId=154
string removeConsecutiveDuplicates(string s)
{
    if(s.size()==1)
        return s; 
    stack<char>myStack;
    //Push first char inside the string
    myStack.push(s[0]);
    for(int i =1; i < s.size(); i++)
    {
        if(s[i] != myStack.top())
            myStack.push(s[i]);
    }
    
    s = "";
    while(!myStack.empty())
    {
        s.push_back(myStack.top());
        myStack.pop();
    }
    
    // Reverse string
    reverse(s.begin(), s.end());
    
    return s; 
}