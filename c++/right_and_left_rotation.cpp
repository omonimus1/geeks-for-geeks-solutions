// https://practice.geeksforgeeks.org/problems/rotate-deque-by-k/1/?track=DSA-Foundation-Final-Dequeue&batchId=193
void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    // Left: extract from front and pus in tail
    int value; 
    for(int i =0; i < k; i++)
    {
        value = deq.front();
        deq.pop_front();
        deq.push_back(value);
    }
}

void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    // pop from tail and push in front;
    int value; 
    for(int i =0; i < k; i++)
    {
        value = deq.back();
        deq.pop_back();
        deq.push_front(value);
    }
}