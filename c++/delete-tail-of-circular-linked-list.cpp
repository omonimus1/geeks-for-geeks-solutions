// https://practice.geeksforgeeks.org/problems/delete-tail-of-circular-linked-list/1/?track=DSA-Foundation-Final-Circular-Linked-List&batchId=193
/*
* Removes tail of the Circurlar linked list
*/
Node * deleteTail(Node * head)
{
    // Circular ll is empty
    if(head == NULL)
        return NULL;
    // There is just one node
    if(head->next == head)
    {
        free(head);
        return NULL;
    }
    
    Node *current = head;
    while(current->next->next != head)
    {
        current = current->next;
    }
    
    Node *to_remove = current->next;
    current->next = head;
    // Remove tail from ll
    free(to_remove);
    return head; 
}