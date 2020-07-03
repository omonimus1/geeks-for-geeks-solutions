// https://practice.geeksforgeeks.org/problems/operations-on-queue/1/?track=SPC-Queue&batchId=154
void enqueue(queue<int> &s,int x)
{
   s.push(x);
}
 // Function to remove front element from queue
void dequeue(queue<int> &s)
{
    s.pop();
}
 // Function to find the front element of queue
int front(queue<int> &s)
{
    return s.front();
}
 // Function to find the element in queue. Return "Yes" or "No".
string find(queue<int> s, int val)
{
    vector<int>copy;
    bool exists = false;
    while(s.size())
    {
        if(s.front() == val)
            exists = true;
         copy.push_back(s.front());
         s.pop();
    }
    
    // INsert again vales in queue
    for(int i = 0; i < copy.size(); i++)
    {
        s.push(copy[i]);
    }
    if(exists)
        return "Yes";
    return "No";
    
}