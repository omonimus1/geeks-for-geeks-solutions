//https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1/?track=pcc-queue&batchId=221
queue<ll> modifyQueue(queue<ll> q, int k)
{
    vector<ll> s;
    while(k!=0)
    {
        // Get front element and push it inside vector
        s.push_back(q.front());
        // Remove front element from queue
        q.pop();
        // decrease k;
        k--;
    }

    // Check if the queeu is not empty
    vector<ll>last_elements_of_queue;
    while(q.size() != 0)
    {
        last_elements_of_queue.push_back(q.front());
        q.pop();
    }

    // Reverse array
    reverse(s.begin(), s.end());


    // Insert back in queue
    for(int i =0; i < s.size(); i++)
        q.push(s[i]);
        
    for(int i =0; i <last_elements_of_queue.size(); i++)
        q.push(last_elements_of_queue[i]);

    return q;
}