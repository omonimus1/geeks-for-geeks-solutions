//https://practice.geeksforgeeks.org/problems/delete-tail-of-doubly-linked-list/1/?track=DSA-Foundation-Final-DLL&batchId=193
Node *deleteTail(Node * head)
{
    if(head == NULL)
        return NULL; 
    Node *current = head;
    // Reach last element of doubly linked list
    while(current->next != NULL)
    {
        current = current->next;
    }
    // Set next's pointer of the future tail to NULL
    Node *prev= current->prev;
    prev->next =NULL;
    // Remove original tail from linked list
    free(current);
    return head;
}