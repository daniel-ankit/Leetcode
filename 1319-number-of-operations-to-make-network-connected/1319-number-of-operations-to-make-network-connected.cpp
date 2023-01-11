class Solution {
    void dfs(int i, vector<bool>&vis, vector<int>adj[])
    {
        if(vis[i]) return;
        vis[i] = 1;
        for(auto x:adj[i])
            dfs(x, vis, adj);
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;
        vector<bool> vis(n, 0);
        int cnt = 0;
        vector<int>adj[n];
        for(auto x:connections)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                dfs(i, vis, adj);
                cnt++;
            }
        }
        return cnt-1;
    }
};