//  https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1/?company[]=Amazon&company[]=Microsoft&company[]=Samsung&difficulty[]=-1&difficulty[]=0&page=1&query=company[]Amazoncompany[]Microsoftcompany[]Samsungdifficulty[]-1difficulty[]0page1
/* A leaf node is a nod that has booth left and right child pointer = NULL;
This is a recursive solution, but this problem can be solved ALSO with a level order traversal

unsigned int getLeafCount(struct Node* node) 
{ 
    // If tree is empty 
    if (!node) 
        return 0; 
  
    // Initialize empty queue. 
    queue<Node *> q; 
  
    // Do level order traversal starting from root 
    int count = 0; // Initialize count of leaves 
    q.push(node); 
    while (!q.empty()) 
    { 
        struct Node *temp = q.front(); 
        q.pop(); 
  
        if (temp->left != NULL) 
            q.push(temp->left); 
        if (temp->right != NULL) 
            q.push(temp->right); 
        if (temp->left == NULL && temp->right == NULL) 
            count++; 
    } 
    return count; 
} 

*/

int countLeaves(Node* root)
{   
    if(root == NULL)
        return 0; 
    if(root ->left == NULL && root->right == NULL)
        return 1; 
    else
    {
        return countLeaves(root->left) + countLeaves(root->right);
    }
}