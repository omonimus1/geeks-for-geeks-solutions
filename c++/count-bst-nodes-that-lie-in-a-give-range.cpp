// https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1
int getCountOfNode(Node *root, int l, int h)
{
    int count = 0; 
    if(root == NULL)
        return 0;
    if(root->data >=l &&  root->data <= h)
        count++;
    return count + getCountOfNode(root->left, l, h) + getCountOfNode(root->right, l, h);
}