// https://practice.geeksforgeeks.org/problems/is-the-doubly-linked-list-circular/1/?track=DSA-Foundation-Final-DLL&batchId=193
bool isCircular(Node * head)
{
    // Doubly linked list is empty
   if(head == NULL)
        return false;
    // DLL has just one element and it is not circular
    if(head->next ==NULL)
        return false;
    // DDL has just one node and it is circular
    if(head->next == head)
        return true;
        
    Node *current = head->next;
    
    while(current != head && current->next != NULL)
         current = current->next;
    if(current == head)
        return true;
    return false;
}