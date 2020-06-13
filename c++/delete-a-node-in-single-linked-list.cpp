//  https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1/?track=sp-linked-list&batchId=152
/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    if(head == NULL)
        return NULL;
    Node *current = head;
    // IF we need to remove the first element
    if(x == 1)
    {
        // Set the point to the second element
        head = current->next;
        // Remove first node
        free(current);
        // Retun reference to new node; 
        return head;
    }
    int counter = 1;
    while(head->next !=NULL && counter != x-1)
    {
        counter++;
        current = current->next;
    }
    
    // If X is bigger than number of elememnts in the linked list
    if(current == NULL || current->next == NULL)
        return head;
    
    // Store reference to next node
    Node *next_node = current->next->next;
    free(current->next);
    current->next = next_node;
    
    current = head;
    return head;
}