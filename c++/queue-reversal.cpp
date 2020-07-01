// https://practice.geeksforgeeks.org/problems/queue-reversal/1/?track=pcc-queue&batchId=221
queue<long long int> rev(queue<long long int> q)
{
    vector<long long int>s;
    while(q.size() !=0)
    {
        s.push_back(q.front());
        q.pop();
    }
    
    reverse(s.begin(), s.end());
    
    for(int i =0; i < s.size(); i++)
    {
        q.push(s[i]);
    }
    
    return q; 
}