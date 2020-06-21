// https://practice.geeksforgeeks.org/problems/sum-the-nodes-of-linked-list/1/?track=DSA-Foundation-Final-Linked-List&batchId=193
int sumOfElements(Node *head)
{
   int sum = 0; 
   while(head != NULL)
   {
       sum += head->data;
       head = head->next;
   }
   return sum; 
}