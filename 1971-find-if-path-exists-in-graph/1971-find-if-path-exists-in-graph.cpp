class Solution {
    void dfs(vector<int>adj[], vector<int>&vis, int i)
    {
        if(vis[i]) return;
        vis[i] = 1;
        for(auto x:adj[i])
            dfs(adj, vis, x);
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>vis(n, 0), adj[n];
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        dfs(adj, vis, source);
        return vis[destination];
    }
};