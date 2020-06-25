// https://practice.geeksforgeeks.org/problems/compare-circular-doubly-linked-lists/1/?track=DSA-Foundation-Final-DLL&batchId=193
/*
* Compares two Circular Double Linked List, returns true if equals, false otherwise
*/
bool compareCLL(Node * head1, Node * head2)
{
    if(head1 == NULL && head2 == NULL)
        return true; 
    
    Node *current1 = head1;
    Node *current2 = head2;
    
    
    while(current1->next != head1 || current2->next != head2)
    {
        if(current1->data != current2->data)
            return false;
        current1 = current1->next;
        current2 = current2->next;
    }
    return true; 
}
