// https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/
void deleteNode(Node *node)
{
    // Linked List is empty
    if (node == NULL) 
        return; 
    else {  
        if (node->next == NULL)  
            return; 
        // Store the next node
        Node* temp = node->next; 
  
        // Copy data of the next node to current node 
        node->data = node->next->data; 
  
        // Set next to the node positionated after the node that will be removes 
        node->next = node->next->next; 
        // Remove node
        free(temp); 
    } 
}