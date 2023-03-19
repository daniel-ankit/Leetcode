class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<pair<int, int>>adj[n+1];
        for(auto x:roads)
        {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        int ans = INT_MAX;
        vector<int>vis(n+1, 0);
        queue<int>q;
        q.push(1);
        vis[1] = 1;
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                int now = q.front();
                q.pop();
                for(auto x:adj[now])
                {
                    ans = min(ans, x.second);
                    if(!vis[x.first])
                    {
                        vis[x.first] = 1;
                        q.push(x.first);
                    }
                }
            }
        }
        return ans;
    }
};