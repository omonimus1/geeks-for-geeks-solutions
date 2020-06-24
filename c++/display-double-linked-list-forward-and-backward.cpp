// https://practice.geeksforgeeks.org/problems/display-doubly-linked-list/1/?track=DSA-Foundation-Final-DLL&batchId=193
void displayList(Node *head)
{
    //Head to Tail
    
    while(head->next !=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<head->data<<endl;

    // Print from tail to head
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->prev;
    }
}