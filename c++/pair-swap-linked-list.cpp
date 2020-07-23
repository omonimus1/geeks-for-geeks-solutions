// https://practice.geeksforgeeks.org/problems/pairwise-swap-of-nodes-in-linkelist/1/?track=PC-W5-LL&batchId=154
struct Node* pairwise_swap(struct Node* head)
{
    Node *current = head;
    while(current != NULL && current->next != NULL)
    {
        swap(current->data, current->next->data);
        current = current->next->next;
    }

    return head;
}