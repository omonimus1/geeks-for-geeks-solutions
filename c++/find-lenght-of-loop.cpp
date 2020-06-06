// https://practice.geeksforgeeks.org/problems/find-length-of-loop/1/?track=amazon-linkedlists&batchId=192
int countNodes(struct Node *n)  
{  
    int res = 1;  
    struct Node *temp = n;  
    while (temp->next != n)  
    {  
        res++;  
        temp = temp->next;  
    }  
    return res;  
} 

int countNodesinLoop(struct Node *head)
{
    if(head == NULL)
        return 0 ;
    Node *slow = head;
    Node *fast = head;
    while(slow &&  fast && fast->next)
    {
        fast = fast->next ->next; 
        slow = slow->next;
        if(slow == fast)
            return countNodes(slow);
    }        
    return 0;
}