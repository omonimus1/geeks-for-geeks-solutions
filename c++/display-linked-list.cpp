// https://practice.geeksforgeeks.org/problems/display-linked-list/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
void displayList(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}