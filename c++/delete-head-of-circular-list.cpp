/*
    Delete head of a circular linked List
    This implementation is in O(N) time; 

    We can  actually delete the head in O(1) time.
    To do this operation in O(1) time, we have to:
    - Store second nodes value to in the head
    - Delete second node of the linked list

*/
// O(N) time
Node * deleteHead(Node *head)
{
   if (head == NULL)
        return NULL;
   if(head ->next == NULL)
   {
       free(head);
       return NULL;
   }
   else
   {
       Node *current = head;
       while(current -> next != head)
            current = current->next;
            
        // Set next pointer of the tail to the second node of the linked list
        current->next = head->next;
        // Remove original head of the Circular Linked list
        head->next = NULL;
        free(head);
        // Return pointer to the second node of the original linked list(new head);
        return current->next;
   }
}


// O(1) Time
Node * deleteHead(Node *head)
{
   if (head == NULL)
        return NULL;
   if(head ->next == NULL)
   {
       free(head);
       return NULL;
   }
    // Store second nodes value in the head
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;

    // Remove secon node from linked list
    free(temp);
    return head; 
}
