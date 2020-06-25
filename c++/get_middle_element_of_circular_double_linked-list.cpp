// https://practice.geeksforgeeks.org/problems/find-middle-of-circular-doubly-linked-list/1/?track=DSA-Foundation-Final-DLL&batchId=193

// Count number of nodes present in the circular double linked list
int count_number_of_nodes(Node *head)
{
    Node *current_node = head;
    int counter = 0;
    while(current_node->next != head)
    {
        counter++;
        current_node = current_node ->next;
    }
    return counter;
}

int findMiddle(Node * head)
{
    Node *current = head;
   int number_nodes = count_number_of_nodes(current);
   // Get position of the middle element of the linked list
   int position = (number_nodes/2)+1;
   
   current = head;
   // Iterate until we reach the middle element
   while(position > 1)
   {
       position--;
       current = current->next;
   }
   // Return value of the middle element
   return current->data;
}