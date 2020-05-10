// https://practice.geeksforgeeks.org/problems/k-distance-from-root/1/
void printKdistance(struct Node *root, int k)
{
    if(root == NULL)
        return;
    if(k == 0)
    {
        cout << root ->data << " ";
        return;
    }
    printKdistance(root->left, k-1);
    printKdistance(root->right, k-1);
}