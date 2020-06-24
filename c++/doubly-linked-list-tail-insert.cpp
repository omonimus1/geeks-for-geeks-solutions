// https://practice.geeksforgeeks.org/problems/doubly-linked-list-tail-insert/1/?track=DSA-Foundation-Final-DLL&batchId=193
Node *insertInTail(Node * head, int data)
{
    Node *new_node = new Node(data);
    if(head == NULL)
        return new_node;
    
    Node *current = head;
    while(current->next != NULL)
        current = current->next;
    
    current->next = new_node;
    new_node->prev = current;
    
    return head;
}
