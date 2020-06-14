// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/?track=md-tree&batchId=144

void leftViewHelper(Node *root,int level, int *max_level)
{
    if(root == NULL)
        return;
        
    // Check if it is the left node of its level
    if(*max_level < level)
    {
        cout << root->data << " ";
        *max_level = level;
    } 
    
    // Recursively iterate the tree
    leftViewHelper(root->left, level+1, max_level);
    leftViewHelper(root->right, level+1, max_level);
}
// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   int max_level = 0;
    leftViewHelper(root, 1, &max_level);  
}