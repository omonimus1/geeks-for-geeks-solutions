// https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1/?track=DSA-Foundation-Final-Stack&batchId=193
void MyStack ::push(int x) {
    StackNode *new_head = new StackNode(x);
    if( top == NULL)
         top = new_head;
    else
    {
        new_head->next = top;
        top = new_head;
    }
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(top == NULL)
        return -1;
    else
    {
        int head = top->data;
        top = top->next;
        return head;
    }
}
