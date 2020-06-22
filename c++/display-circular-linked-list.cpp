//https://practice.geeksforgeeks.org/problems/display-circular-linked-list/1/?track=DSA-Foundation-Final-Circular-Linked-List&batchId=193
void displayList(Node *head)
{
   Node *current = head;
   while(current->next != head)
   {
       cout << current->data << " ";
       current = current->next;
   }
   // Print tail of circular linked list
   cout << current->data; 
}