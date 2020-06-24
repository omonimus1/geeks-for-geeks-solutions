// https://practice.geeksforgeeks.org/problems/delete-head-of-linked-list/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
Node * deleteHead(Node *head)
{
    if(head == NULL)
        return NULL;
    else if(head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        Node *new_head = head->next;
        free(head);
        return new_head; 
    }
}