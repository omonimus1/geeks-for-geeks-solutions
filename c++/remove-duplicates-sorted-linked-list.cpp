//  https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1/?track=DSASP-LinkedList&batchId=154
Node *removeDuplicates(Node *root)
{
    if(root == NULL || root->next == NULL)
        return root; 
    Node *current = root; 
    
    while(current->next != NULL && current != NULL)
    {
        //Check if the next node is equasl;s to the current
        if(current->data == current->next->data)
        {
            Node *next = current->next->next;
            delete(current->next);
            current->next = next;
        }
        else
        {
            // If no delation has been done
            current = current->next; 
        }
    }
    return root; 
}