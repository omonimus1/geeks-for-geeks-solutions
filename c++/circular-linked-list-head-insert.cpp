// https://practice.geeksforgeeks.org/problems/circular-linked-list-head-insert/1/?track=DSA-Foundation-Final-Circular-Linked-List&batchId=193
Node *insertInHead(Node * head, int data)
{
    Node *new_node = new Node(data);
    if(head == NULL)
        new_node ->next = new_node;
    else
    {
        Node *current = head;
        while(current->next != head)
        {
            current = current->next;
        }
        current->next = new_node;
        new_node ->next = head;
    }
    return new_node;
}