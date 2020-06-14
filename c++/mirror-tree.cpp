//  https://practice.geeksforgeeks.org/problems/mirror-tree/1/?track=md-tree&batchId=144
void mirror(Node* node) 
{
     if(node == NULL)
        return;
    Node *temp;
    mirror(node->left);
    mirror(node->right);
    
    // Swap pointer of the current node
    temp = node->left;
    node->left = node->right;
    node->right = temp;
}