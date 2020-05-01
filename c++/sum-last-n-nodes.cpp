// https://practice.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1
int get_number_of_nodes(struct Node *head)
{
    unsigned long int counter =0;
    while(head != NULL)
    {
        counter++;
        head = head->next;
    }
    return counter; 
}
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
    // Could not find sum of last N nodes 
    if(head == NULL)
        return -1;
    else
    {
        int number_of_nodes = get_number_of_nodes(head);
        int sum =0, current_node =0; 
        
        while(head != NULL)
        {
            current_node++;
            if(current_node > (number_of_nodes -n))
            {
                sum += head->data;
            }
            head = head ->next;
        }
        return sum;
    }
}