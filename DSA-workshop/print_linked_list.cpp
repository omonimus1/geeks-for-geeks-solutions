// https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1/?track=dsa-workshop-1-linkedlist&batchId=308
void display(Node *head)
{
  while(head != NULL)
  {
      cout << head->data << " ";
      head = head->next;
  }
}