// https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1
long int sumBT(Node* root)
{
    // Code here
    if (root == NULL)
        return 0; 
    else
        return root->key + sumBT(root->left) + sumBT(root->right);
}