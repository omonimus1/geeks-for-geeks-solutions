// https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes-in-bst/1/
int sumOfLeafNodes(Node *r ){
     if(r == NULL)
        return 0;
    int sum = 0;
    if(r->left == NULL && r->right == NULL)
        sum += r->data;
    return sum + sumOfLeafNodes(r->left) + sumOfLeafNodes(r->right);
}