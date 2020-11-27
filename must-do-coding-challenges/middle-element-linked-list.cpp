// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
int countNode(Node* head)
{
    int counter = 0;
    while (head != NULL)
    {
        counter++;
        head = head->next;
    }
    return counter;
}

int getMiddle(Node* head)
{
    if (head == NULL)
        return -1;
    if (head->next == NULL)
        return head->data;
    Node* current = head;
    int nodes = countNode(current);
    current = head;
    nodes /= 2;
    while (current != NULL && nodes--)
    {
        current = current->next;
    }
    return current->data;
}