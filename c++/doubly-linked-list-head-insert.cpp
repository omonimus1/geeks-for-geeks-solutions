// https://practice.geeksforgeeks.org/problems/doubly-linked-list-head-insert/1/?track=DSA-Foundation-Final-DLL&batchId=193
Node *insertInHead(Node * head, int data)
{
    Node *new_head = new Node(data);
    if(head == NULL)
        return new_head;
    else
    {
        new_head ->next = head;
        head->prev = new_head;
        return new_head;
    }
}