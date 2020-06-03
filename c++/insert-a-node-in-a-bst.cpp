// https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1
Node* insert(Node* root, int element)
{
    Node *node = new Node(element);
    
    if(root == NULL)
        return node; 
    else
    {
        if(root->data == element)  
            return root;
        if(element > root->data) 
            root->right = insert(root->right, element); 
        else
            root->left = insert(root->left, element);
    }
    return root;
}