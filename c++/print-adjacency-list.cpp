// https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1/?track=DSA-Foundation-Final-Graph&batchId=193
// adj: array of vectors to represent graph
// V: number of vertices
void printGraph(vector<int> adj[], int V)
{
    for(int i =0; i < V; i++)
    {
        cout << i;
        for(int j =0; j < adj[i].size(); j++)
            cout << "-> "<<adj[i][j]; 
        
        cout <<endl;
    }
}