//  https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/?track=md-graph&batchId=144
vector <int> bfs(vector<int> g[], int N) {
    queue<int> qu;
    vector<int> res;
    // Create vector of N and set all of the them as false
    vector<bool> vis(N, false);
    // N is the root: starting point
    qu.push(0);
    // Set first root as visited
    vis[0]=true;
    // While queue q is not empty:
    while(!qu.empty())
    {
        // Deque vertex from queue
        int num=qu.front();
        qu.pop();
        // Enque all not yet visited adjancent
        res.push_back(num);
        for(auto it=g[num].begin(); it!=g[num].end();it++)
        {
            if(vis[*it]==false)
            {
                vis[*it]=true;
                qu.push(*it);
            }
        }
    }
    return res;
}