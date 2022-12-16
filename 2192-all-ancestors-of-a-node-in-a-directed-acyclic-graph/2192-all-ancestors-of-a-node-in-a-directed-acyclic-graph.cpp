class Solution {
    void dfs(vector<int>adj[], vector<int>&vis, int i, vector<int>&vec, int &start)
    {
        if(vis[i]) return;
        if(start!=i) vec.push_back(i);
        vis[i] = 1;
        for(auto x:adj[i])
            dfs(adj, vis, x, vec, start);
    }
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans;
        vector<int> adj[n];
        for(auto x:edges)
        {
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0; i<n; i++)
        {
            vector<int> vis(n, 0), vec;
            dfs(adj, vis, i, vec, i);
            sort(vec.begin(), vec.end());
            ans.push_back(vec);
        }
        return ans;
    }
};