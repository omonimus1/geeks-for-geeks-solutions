// https://practice.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1/?track=ppc-linkedlist&batchId=221
Node *sortedInsert(Node* head, int x)
{
    Node *new_node = new Node(x);
    
    // Case 1: ll is empty
    if(head == NULL)
    {
        new_node ->next = new_node; 
        return new_node; 
    }
        
    
    
    // Case 2: x is smaller than head->val and it becames the new 
    Node *current = head;

    if(x < head->data)
    {
        new_node->next = head;
        // Set tail->next to the new head
        while(current->next != head)
            current = current->next;
        current->next = new_node; 
        return new_node; 
    }
    

   // Case 3: if head ->next == head : new element will be the last elemet of the ll an
   // its ->next will be the original head
   while(current->next != head && current->next->data < x)
        current = current->next;
        
    // If current->next == head: set new element as tail of ll
    if(current->next == head)
    {
        current->next = new_node; 
        new_node ->next = head;
        return head;
    }
    
    // Insert new_node withhing the ll 
    Node *next = current->next;
    current->next = new_node;
    new_node->next = next;
    return head; 
}