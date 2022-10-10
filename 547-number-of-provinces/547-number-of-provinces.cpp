class Solution {
    void dfs(vector<int>adj[], vector<int> &vis, int ind)
    {
        vis[ind] = 1;
        for(auto x:adj[ind])
            if(!vis[x]) dfs(adj, vis, x);
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>adj[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j && isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n, 0);
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                dfs(adj, vis, i);
                count++;
            }
        }
        return count;
    }
};