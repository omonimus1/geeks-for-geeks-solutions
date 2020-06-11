// https://practice.geeksforgeeks.org/problems/insert-in-sorted-linked-list/1/?track=sp-linked-list&batchId=152
Node * insertInSorted(Node * head, int data)
{
    Node *new_node = new Node(data); 
    // Case 1: LL is empty OR first element is greater the new_node->value
    if(head==NULL || head->data >= data)
    {
        new_node->next=head;
        head= new_node;
        return head;
    }
    // Case 2: new node is between or at the end of the LL
    Node *current = head;
    while(current->next != NULL && current->next->data <= data)
    {
        current = current->next;
    }
    new_node ->next = current->next;
    current->next = new_node;
    current = head;
    return current; 
}