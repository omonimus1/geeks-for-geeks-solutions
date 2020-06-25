// https://practice.geeksforgeeks.org/problems/display-circular-doubly-linked-list/1/?track=DSA-Foundation-Final-DLL&batchId=193

void displayList(Node *head)
{
    //Head to Tail
   Node *current = head;
   while(current->next != head)
   {
       cout << current->data << " ";
       current = current->next;
   }
    cout<<current->data<<endl;
    //Tail to Head
    while(current != head)
    {
        cout << current->data << " ";
        current = current->prev;
    }
    cout <<current->data; 
    
}