// https://practice.geeksforgeeks.org/problems/inorder-in-bst/1/?track=DSA-Foundation-Final-BST&batchId=193
//User function Template for C++
void inOrder(struct Node* node) 
{
   if(node == NULL)
     return;
     
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}