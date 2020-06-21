// https://practice.geeksforgeeks.org/problems/maximum-and-minimum-in-linked-list/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
int maximum(Node *head)
{
    int max = -1;
    while(head != NULL)
    {
        if(max < head->data)
            max  =head->data;
        head = head->next;
    }
    return max;
}

int minimum(Node *head)
{
    // Max head->data i 10^3
    int min = 10000;
    while(head != NULL)
    {
        if(head->data < min)
            min = head->data;
        head = head->next;
    }
    return min; 
}