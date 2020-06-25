//https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/?track=DSA-Foundation-Final-Linked-List&batchId=193

// function should insert node at the middle of the linked list

/*
*   Count number of nodes in the linked list
*/
int count(Node *head)
{
    int number_of_nodes = 0;
    while(head!= NULL)
    {
        number_of_nodes++;
        head = head->next;
    }
    return number_of_nodes;
}

/*
*   Insert new node in the middle of the linked list
*/
Node* insertInMiddle(Node* head, int x)
{
    if(head == NULL)
        return head;
    
	Node *current = head;
	int c = count(current);
	
	current = head;
	
	if(c % 2 == 0)
	    c /=2;
	else
	    c = (c/2)+1;
	
	while(c >1)
	{
	    c--;
	    current = current->next;
	}
	    
	
	Node *new_node = new Node(x);
	Node *next = current->next;
	current->next = new_node;
	new_node->next = next;
	
	return head;
}