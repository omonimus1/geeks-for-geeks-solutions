// https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1/
int countLeaves(Node* root)
{
    Node *node = root;
    if(node == NULL)
        return 0;
    else if(node ->left == NULL && node ->right == NULL)
        return 1; 
    else
        return countLeaves(node->left) + countLeaves(node->right);
}