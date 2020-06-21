// https://practice.geeksforgeeks.org/problems/postorder-in-bst/1/?track=DSA-Foundation-Final-BST&batchId=193
void postOrder(struct Node* node) 
{
    if(node == NULL)
        return;
    
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
    
}