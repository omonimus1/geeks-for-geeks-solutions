//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1/
int detectloop(Node *head) {
     if(head == NULL && head->next == NULL)
        return 0; 
     Node *slow = head;
     Node *fast = head;
     while(slow && fast && fast->next)
     {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return 1;
     }
     return 0;
}