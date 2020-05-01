//https://practice.geeksforgeeks.org/problems/circular-linked-list/1/
bool isCircular(Node *head)
{
   // Empty Lined List is circular
   if(head == NULL)
        return 1;
    Node *head_copy = head;
    while(head != NULL)
    {
        if(head->next == head_copy)
            return 1;
        head = head->next;
    }
    return 0; 
}