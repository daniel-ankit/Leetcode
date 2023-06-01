class Solution {
    void dfs(int i, vector<int>&vis, vector<int>adj[], int &nodes, int &edges)
    {
        if(vis[i]) return;
        vis[i] = 1;
        nodes++;
        for(auto x:adj[i])
        {
            edges++;
            if(!vis[x]) dfs(x, vis, adj, nodes, edges);
        }
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int>vis(n, 0);
        vector<int>adj[n];
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            int nodes=0, edges=0;
            if(!vis[i])
            {
                dfs(i, vis, adj, nodes, edges);
                if(nodes*(nodes-1) == edges) cnt++;
            }
        }
        return cnt;
    }
};