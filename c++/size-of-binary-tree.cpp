/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
   // Your code here
   if(node == NULL)
        return 0; 
    return getSize(node->left)+1+getSize(node->right);
}