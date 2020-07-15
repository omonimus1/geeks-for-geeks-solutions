// https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1
int count_number_of_nodes(Node *head)
{
    int counter = 0;
    while(head != NULL)
    {
        counter++;
        head = head->next;
    }
    
    return counter; 
}

int fractional_node(struct Node *head, int k)
{
    Node *current =head;
    int number_of_nodes = count_number_of_nodes(current);
    
    current = head;
    int position;
    if((number_of_nodes % k) == 0)
        position = number_of_nodes / k;
    else
        position = (number_of_nodes / k)+1;
    while(head != NULL && position >1)
    {
        position--;
        current = current->next;
    }
    
    if(current == NULL)
        return -1; 
    return current->data; 
}