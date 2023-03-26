class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int, int>>adj[n];
        for(auto x:flights)
            adj[x[0]].push_back({x[1], x[2]});
        vector<int>dist(n, INT_MAX);
        queue<vector<int>>q;
        dist[src] = 0;
        q.push({0, 0, src}); // cnt, cost, node 
        while(!q.empty())
        {
            auto node = q.front()[2], cost = q.front()[1], cnt = q.front()[0];
            q.pop();
            if(cnt>k) continue;
            for(auto x:adj[node])
            {
                if(dist[x.first] > x.second+cost && cnt<=k)
                {
                    dist[x.first] = x.second+cost;
                    q.push({cnt+1, dist[x.first], x.first});
                }
            }
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};