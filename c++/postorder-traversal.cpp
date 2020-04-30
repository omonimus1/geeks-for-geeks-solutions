// https://practice.geeksforgeeks.org/problems/postorder-traversal/1/
void postOrder(Node* root)
{
    if(root == NULL)
        return; 
    else
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<< " ";
    }
}