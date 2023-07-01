class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads)
    {
        int mod = 1000000007;
        vector<long long>dist(n, LONG_MAX), ways(n, 0);
        vector<pair<long long, long long>>adj[n];
        for(auto x:roads)
        {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>>pq;
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});
        while(!pq.empty())
        {
            long long int u = pq.top().second, d = pq.top().first;
            pq.pop();
            for(auto x:adj[u])
            {
                long long v = x.first, w = x.second;
                if(dist[v] > d+w)
                {
                    ways[v] = ways[u];
                    dist[v] = d+w;
                    pq.push({dist[v], v});
                }
                else if(dist[v] == d+w) ways[v]=((ways[v]%mod + ways[u])%mod)%mod;
            }
        }
        return ways[n-1]%mod;
    }
};