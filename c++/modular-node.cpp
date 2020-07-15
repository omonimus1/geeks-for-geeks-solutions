// https://practice.geeksforgeeks.org/problems/modular-node/1
int modularNode(Node* head, int k)
{
    if(head == NULL)
        return -1;
	vector<int>s;
	
	int i=1;
	while(head != NULL)
	{
	    if( (i%k) == 0 )
	        s.push_back(head->data);
	   head = head->next;
	   i++;
	}
	
	int len = s.size();
	if(len == 0)
	    return -1;
	 return s[len-1];
}