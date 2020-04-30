// https://practice.geeksforgeeks.org/problems/preorder-traversal/1/
void preorder(Node* root)
{
  if(root == NULL)
    return; 
  else
  {
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
  }
}