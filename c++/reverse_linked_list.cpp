// Should reverse list and return new head.
Node* reverseList(Node *head)
{
    if(head == NULL)
        return head; 
    else
    {
        Node *next, *prev, *current;
        current = head;
        prev = NULL;
        next = NULL;
        while(current != NULL)
        {
            // Store the next
            next = current->next;
            // Reverse current node's pointer
            // Here the reversion happens.
            current ->next = prev;
            // Move to the following node
            prev = current;
            current = next;
        }
        head = prev; 
    }
}