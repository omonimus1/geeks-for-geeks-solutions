// https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes/1
int sumLeaf(Node* root)
{
    if(root == NULL)
        return 0;
    int sum = 0;
    if(root->left == NULL && root->right == NULL)
        sum += root->data;
    return sum+ sumLeaf(root->left)+sumLeaf(root->right);
}