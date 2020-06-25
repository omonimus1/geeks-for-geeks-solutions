// https://practice.geeksforgeeks.org/problems/operations-on-stack/1/?track=DSA-Foundation-Final-Stack&batchId=193
// Helper class to implement functions
// insert : to insert element to stack
// remove : to pop element from stack
// headOf_Stack : to return top of stack
// find : to find the element in stack

void insert(stack<int> &s,int x)
{
    s.push(x);
}

void remove(stack<int> &s)
{
    
    s.pop();
}

void headOf_Stack(stack<int> &s)
{
    int x= s.top();
    cout<<x<<" "<<endl; 
}

bool find(stack<int> s, int val)
{
    while(s.size())
    {
        if(s.top() == val)
            return true;
        s.pop();
    }
    return false;
}