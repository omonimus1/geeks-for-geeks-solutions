// https://practice.geeksforgeeks.org/problems/delete-tail-of-linked-list/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
Node * deleteTail(Node *head)
{
    if(head->next == NULL)
    {
        free(head);
        return NULL; 
    }
    
    Node *current = head;
    while(current->next->next!= NULL)
        current = current ->next;

    free(current->next);
    current->next= NULL;
    return head; 
}