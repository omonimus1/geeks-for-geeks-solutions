// https://practice.geeksforgeeks.org/problems/search-in-linked-list/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
bool searchLinkedList(Node *head, int x)
{
    while(head != NULL)
    {
        if(head->data == x)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}