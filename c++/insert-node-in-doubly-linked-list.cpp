// https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1/?track=DSA-Foundation-Final-DLL&batchId=193
void addNode(Node *head, int pos, int data)
{
   if(head == NULL)
    return;
   Node *new_node = new Node(data);
   Node *current = head;
   while(pos > 0 && current != NULL)
   {
       pos--;
       current = current->next;
   }
   
   // Get reference to the next node
   Node *next = current->next;
   Node *prev = current; 
   
   current->next = new_node;
   new_node->next = next;
   new_node->prev =prev;
}