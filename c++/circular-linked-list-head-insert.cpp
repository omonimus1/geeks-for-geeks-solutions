// https://practice.geeksforgeeks.org/problems/circular-linked-list-head-insert/1/?track=DSA-Foundation-Final-Circular-Linked-List&batchId=193
// Time complexity: O(N)
// Space complexity: O(1)
/*
    If we need to optimize this code and do it in
    O(1) time, we can simply keep stored the updated value of pointer 
    to the tail node, so that we do not need to iterate every time the 
    Circular Linked List N times. 

*/
Node *insertInHead(Node * head, int data)
{
    Node *new_node = new Node(data);
    // Corner case: Linked list is empty
    if(head == NULL)
        new_node ->next = new_node;
    else
    {
        Node *current = head;
        while(current->next != head)
            current = current->next;
        // Set last node's next pointing to the new head
        current->next = new_node;
        new_node ->next = head;
    }
    return new_node;
}