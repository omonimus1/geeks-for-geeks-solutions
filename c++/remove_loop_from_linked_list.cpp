// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1/
void removeTheLoop(Node *head)
{
    // No loop to detect and remove, Linked List is empty
     if (head == NULL && head ->next == NULL)
        return;
    // Check if there is a loop
    Node  *slow = head;
    Node *fast = head;

    while(slow && fast && fast->next)
    {
        slow = slow -> next;
        fast = fast -> next ->next;
        if(slow == fast)
            break;
    }
    // If there is no a loop, stop the function
    if(slow != fast)
        return;
    // There is a loop, let's fix it
    slow = head;
    // Check both pointer until we find the loop node
    while(slow ->next != fast->next)
    {
        slow = slow->next;
        fast = fast -> next;
    }
    // Fix the loop point so to have a node->next =NULL at the end
    fast ->next = NULL;
}