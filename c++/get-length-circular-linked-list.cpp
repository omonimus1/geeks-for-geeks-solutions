// https://practice.geeksforgeeks.org/problems/length-of-circular-linked-list/1/?track=DSA-Foundation-Final-Circular-Linked-List&batchId=193
int getLength(Node * head)
{
    Node *current = head;
    int counter = 0;
    while(current->next != head )
    {
        counter++;
        current = current->next;
    }
    return counter+1; 
}