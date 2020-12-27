// https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1/?track=dsa-workshop-1-linkedlist&batchId=308
Node* pairWiseSwap(struct Node* head) {
    if(head == NULL  || head->next == NULL)
        return head;
    Node *current = head;
    while(current != NULL  && current->next != NULL)
    {
        swap(current->data, current->next->data);
        current = current->next->next;
    }
    return head;
}