class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<double>dist(n, 0);
        
        vector<pair<int, double>>adj[n];
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        priority_queue<pair<double, int>>pq;
        pq.push({1, start});
        dist[start] = 1;
        while(!pq.empty())
        {
            auto u = pq.top().second;
            auto curr = pq.top().first;
            pq.pop();
            if(u == end) return curr;
            for(auto x:adj[u])
            {
                int v = x.first;
                double w = x.second;
                if(dist[v] < dist[u] * w)
                {
                    dist[v] = dist[u] * w;
                    pq.push({dist[v], v});
                }
            }
        }
        return 0.0;
    }
};

/*

HEARTS ARE PRETTIER
when they're thankful for what they've been giving
instead of wanting for what they have not.
    
*/