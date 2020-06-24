// https://practice.geeksforgeeks.org/problems/linked-list-delete-at-position/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
Node * deleteAtPosition(Node *head,int pos)
{
    if(head == NULL)
        return NULL;
    if(pos == 1)
    {
        Node * new_node = head->next;
        free(head);
        return new_node;
    }
    else
    {
        Node *current = head;
        // If node one is counted 1, we have to iterate until pos > 2
        // Otherwise, if the first is counter from 0, we need to iterate until pos >1 
        while(current != NULL && pos > 2)
        {
            current = current ->next;
            pos--;
        }
        // Check if pos is out of the of the LL
        if(current == NULL || current->next == NULL)
            return head; 
        
        // We are actually in the prev node of the node that must be removed
        Node *next_node = current ->next->next;
        free(current->next);
        current->next = next_node;
        return head;
        
    }
}