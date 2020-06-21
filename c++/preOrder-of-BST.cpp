// https://practice.geeksforgeeks.org/problems/preorder-in-bst/1/?track=DSA-Foundation-Final-BST&batchId=193
void preOrder(struct Node* node) 
{
    if(node == NULL)
        return; 
        
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}