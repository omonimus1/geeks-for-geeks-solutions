// https://practice.geeksforgeeks.org/problems/implement-queue-using-linked-list/1/?track=DSA-Foundation-Final-Stack&batchId=193
/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
    QueueNode *new_node = new QueueNode(x);
    new_node->data=x;
    new_node->next=NULL;
    if(front == NULL)
        front = new_node;
    else
    {
        QueueNode *current = front; 
        while(current->next != NULL)
            current = current->next;
            
        current->next = new_node;
    }
}


/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    // If the ll is empty, return -1;
    if(front == NULL)
        return -1;
    else
    {
        int pop_value = front->data;
        front = front->next;
        return pop_value; 
    }
}