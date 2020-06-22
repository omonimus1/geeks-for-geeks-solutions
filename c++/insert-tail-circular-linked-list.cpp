// https://practice.geeksforgeeks.org/problems/circular-linked-list-tail-insert/1/?track=DSA-Foundation-Final-Circular-Linked-List&batchId=193
Node *insertInTail(Node * head, int data)
{
    Node *new_node = new Node(data);
    new_node->next = head;
    Node *current = head;
    while(current->next != head)
    {
        current = current->next;
    }
    current->next = new_node;
    
    current = head;
    return current; 
}