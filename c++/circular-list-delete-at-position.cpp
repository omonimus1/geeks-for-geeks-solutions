// https://practice.geeksforgeeks.org/problems/circular-linked-list-delete-at-position/1/?track=DSA-Foundation-Final-Circular-Linked-List&batchId=193

Node * deleteAtPosition(Node *head,int position)
{
    if(head == NULL)
        return NULL; 
    // Corner case: the  node to remove is the head 
    if(position == 1)
    {
        return free(head);;
    }
    else
    {
        Node *current = head;
        for(int i = 0; i < position-2; i++)
            current = current ->next;
            
        Node *temp = current->next;
        current->next = current->next->next;
        free(temp);
        return head; 
    }
}