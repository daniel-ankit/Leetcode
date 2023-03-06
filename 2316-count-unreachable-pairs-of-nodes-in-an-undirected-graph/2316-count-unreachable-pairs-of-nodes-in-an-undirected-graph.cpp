class Solution {
    void dfs(int node, vector<int>m[], long long &cnt, vector<int>& vis){
        vis[node] = 1;
        cnt++;
        for(auto& i: m[node]){
            if(vis[i]==0) dfs(i,m,cnt,vis);   
        }
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long ans = ((long long)n*(n-1))/2;
        vector<long long>nums;
        vector<int>adj[n];
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int>vis(n, 0);
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                long long cnt = 0;
                dfs(i, adj, cnt, vis);
                nums.push_back(cnt);
                ans -= (cnt*(cnt-1))/2;
            }
        }
        return ans;
    }
};