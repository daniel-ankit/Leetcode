class Solution {
    void dfs(int i, vector<int>adj[], vector<int>&vis)
    {
        if(vis[i]) return;
        vis[i] = 1;
        for(auto x:adj[i])
            dfs(x, adj, vis);
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>adj[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(isConnected[i][j]) adj[i].push_back(j);
            }
        }
        int cnt = 0;
        vector<int>vis(n, 0);
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                dfs(i, adj, vis);
                cnt++;
            }
        }
        return cnt;
    }
};