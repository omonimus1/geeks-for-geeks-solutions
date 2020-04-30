//  https://practice.geeksforgeeks.org/problems/inorder-traversal/1/

void inorder(Node* root)
{
  // Your code here
  if(root == NULL)
      return; 
  else
  {
      inorder(root->left);
      cout<< root->data<<" ";
      inorder(root->right);
  }
}