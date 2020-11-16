//  https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/?track=DSASP-LinkedList&batchId=154
int GetNumberOfnodes(Node *head)
{
    int counter = 0;
    Node *current = head; 
    while(current != NULL)
    {
        counter++;
        current = current ->next; 
    }
    return counter; 
}

int GetIntersectionPoint(Node * head1, Node * head2, int offset_longest)
{
    // Skik first n position from longest list , where N = offset_longest
    while(head1 != NULL && offset_longest >0)
    {
        offset_longest--; 
        head1 = head1->next; 
    }
    
    // Compare nodes of both linked list; 
    while(head1!= NULL && head2!= NULL)
    {
        if(head1 == head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    
    // No intersecion point found; 
    return -1; 
}

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Count number of elements of each linked list
    int len_head1 =  GetNumberOfnodes(head1);
    int len_head2 =  GetNumberOfnodes(head2);
    
    int difference = abs(len_head1 - len_head2);
    if(len_head1 > len_head2)
    {
        return GetIntersectionPoint(head1, head2, difference);
    }
    else
    {
        return GetIntersectionPoint(head2, head1, difference);
    }
}