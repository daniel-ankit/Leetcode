class Solution {
    int dfs(int i, int j, vector<int>&vis, vector<int>adj[])
    {
        vis[i] = 1;
        if(i==j) return 1;
        for(auto x:adj[i])
        {
            if(!vis[x] && dfs(x, j, vis, adj))
                return 1;
        }
        return 0;
    }
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& pre, vector<vector<int>>& que) {
        vector<int>adj[n];
        map<int, vector<int>>mp;
        for(auto x:pre) adj[x[0]].push_back(x[1]);
        vector<bool>res;
        for(auto x:que)
        {
            vector<int>vis(n, 0);
            res.push_back(dfs(x[0], x[1], vis, adj));
        }
        return res;
    }
};