//https://practice.geeksforgeeks.org/problems/join-two-linked-lists/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
Node * joinTheLists(Node * head1, Node * head2)
{
    if(head1 == NULL && head2 == NULL)
        return NULL;
    
    if(head1 == NULL)
        return head2;
    if(head2 == NULL)
        return head1;
        
    Node *temp=head1;
    while(temp->next)
        temp=temp->next;
    
    temp->next=head2;
    return head1;
}
   