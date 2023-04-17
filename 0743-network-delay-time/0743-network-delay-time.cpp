class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>>adj[n+1];
        for(auto x:times)
        {
            auto u = x[0], v = x[1], wt = x[2];
            adj[u].push_back({x[2], x[1]});  // (dist, node)
        }
        vector<int>dist(n+1, INT_MAX);
        dist[k] = 0;
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>> >pq;
        pq.push({0, k});
        while(!pq.empty())
        {
            auto now = pq.top()[1], dis = pq.top()[0];
            pq.pop();
            for(auto x:adj[now])
            {
                if(dist[x[1]] > x[0] + dis)
                {
                    dist[x[1]] = x[0]+dis; 
                    pq.push({dist[x[1]], x[1]});
                }
            }
        }
        int maxx = INT_MIN;
        for(int i=1; i<=n; i++)
        {
            maxx = max(maxx, dist[i]);
        }
        return maxx == INT_MAX ? -1 : maxx;
    }
};