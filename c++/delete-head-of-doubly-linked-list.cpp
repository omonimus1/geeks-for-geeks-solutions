// https://practice.geeksforgeeks.org/problems/delete-head-of-doubly-linked-list/1/?track=DSA-Foundation-Final-DLL&batchId=193
Node *deleteHead(Node * head)
{
   if(head == NULL)
        return NULL;
    
    Node *new_head = head->next;
    new_head->prev = NULL;
    free(head);
    return new_head;
}