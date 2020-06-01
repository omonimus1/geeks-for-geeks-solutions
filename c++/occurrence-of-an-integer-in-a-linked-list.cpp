// https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1
int count(struct node* head, int search_for)
{
    node *node = head;
    if(node == NULL)
        return 0;
    int counter = 0;
    while(node != NULL)
    {
        if(node->data == search_for)
            counter++;
        node = node->next;
    }
    return counter; 
}