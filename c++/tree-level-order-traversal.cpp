// https://practice.geeksforgeeks.org/problems/level-order-traversal/1/?track=DSA-Foundation-Final-Tree&batchId=193
vector<int> levelOrder(Node* node)
{
    vector<int>s;
    if(node == NULL)
        return s; 
    
    // Apply Breadth first search algorithm
    // Create queue and push root inside
    queue<Node*> myQueue;
    myQueue.push(node);
    
    Node *current_node; 
    while(!myQueue.empty())
    {
        current_node = myQueue.front(); 
        s.push_back(current_node->data);
        myQueue.pop();
        
        if(current_node->left != NULL)
            myQueue.push(current_node->left);
        
        if(current_node->right != NULL)
            myQueue.push(current_node->right);
    }
}
