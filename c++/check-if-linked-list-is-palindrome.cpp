// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1/

bool isStringPalindrome(string list_content)
{
    if(list_content.size() <= 1)
        return true; 
    int end_point = list_content.size()-1;
    for(int i =0; i< list_content.size()/2; i++)
    {
        if(list_content[i] != list_content[end_point])
            return false;
        end_point--;
    }
    return true; 
}

bool isPalindrome(Node *head)
{
    if(head == NULL)
        return true;
    string solution = "";
    Node * current = head;
    while(current != NULL)
    {
        solution.append(to_string(current->data));
        current = current -> next; 
    }
    return isStringPalindrome(solution);
}