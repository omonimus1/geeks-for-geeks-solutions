// https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1/?track=amazon-linkedlists&batchId=192
Node* deleteMid(Node* head) {
    if(head ==NULL) return NULL;

    // Get number of nodes in the LL
    Node *current = head;
    int c = count_number_of_nodes(current);
    
    int position = (c/2);    
    current = head;

    
    while(current != NULL && position > 1)
    {
        position--;
        current = current ->next;
    }
    
    //if(current == NULL || current->next == NULL) return NULL; 
    
    Node *next = current->next->next;
    free(current->next);
    current->next = next; 
  
    return head; 
}