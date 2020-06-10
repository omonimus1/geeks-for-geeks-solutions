// https://practice.geeksforgeeks.org/problems/compare-two-linked-lists/1/?track=sp-linked-list&batchId=152
// Compare two strings represented as linked lists
int compare(Node *list1, Node *list2) 
{
    if(list1 == NULL && list2 == NULL)
        return 0;
     string s1 = "";
     string s2 = "";
     while(list1 != NULL)
     {
         s1.push_back(list1->c);
         list1 = list1->next;
     }
     while( list2 != NULL)
     {
         s2.push_back(list2->c);
         list2 = list2->next;
     }
     if(s1 == s2) 
        return 0; 
    if (s1 > s2)
        return 1;
    return -1; 
}