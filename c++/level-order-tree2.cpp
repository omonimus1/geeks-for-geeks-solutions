// https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1/?track=PC-W6-T&batchId=154
void levelOrder(Node* node)
{
      if(node == NULL)
        return; 
        
      queue<Node *>q;
      q.push(node);
      q.push(NULL);
      
      Node *temp;
      while(q.size() >1 )
      {
        temp  = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout << "$ ";
            q.push(NULL);
            continue;
        }
    
        cout << temp->data<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
      }
      cout << "$";
}
