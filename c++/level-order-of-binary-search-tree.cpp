// https://practice.geeksforgeeks.org/problems/levelorder-in-bst/1/?track=DSA-Foundation-Final-BST&batchId=193
vector<int> levelOrder(Node *root) 
{ 
    // Level order is made applying the Breath First search
    vector<int>s;
    if(root == NULL)
        s;
    
    // Create a queue
    queue<Node *>myQueue;
    // Insert the root in the queue
    myQueue.push(root);
    
    Node *node;
    // While queue is not empty: pop fron node and hten push left and right child
    while(!myQueue.empty())
    {
        // Print node from queue
        node = myQueue.front();
        s.push_back(node->data);
        myQueue.pop();
        
        // Enqeue left child
        if(node->left != NULL)
            myQueue.push(node->left);
            
        // Enque right child
        if(node->right != NULL)
            myQueue.push(node->right);
    }
    return s; 
}