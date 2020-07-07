// https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/?track=PC-W5-LL&batchId=154/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   Node *new_node = new Node(newData);
   if(head == NULL)
        return new_node;
    else
    {
        new_node ->next = head;
        return new_node;
    }
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
    Node *new_node = new Node(newData);
    if(head == NULL)
      return new_node;
      
    Node *current = head;
    while(current->next != NULL)
        current = current->next;
        
    current->next = new_node;
    return head;
}