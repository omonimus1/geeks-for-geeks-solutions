// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
Node* segregate(Node *head) {
     // Create couters of 0, 1 and 2
    if(head == NULL)
        return head;
    int count[] = {0, 0, 0};
    Node *current = head;
    while(current != NULL)
    {
        count[current->data] += 1;
        current  = current->next;
    }
    int index = 0;
    // GO to head of the linked list
    current = head;
    while(current != NULL)
    {
        while(count[index] > 0)
        {
            count[index] -=1;
            current->data = index;
            current = current->next;
        }
        index++;
    }
    return head; 
}