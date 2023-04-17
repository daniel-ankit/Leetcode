class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dist(n, INT_MAX);
        dist[k-1] = 0;
        while(n--)
        {
            for(auto x:times)
            {
                int u = x[0]-1, v = x[1]-1, wt = x[2];
                if(dist[u] != INT_MAX && dist[v] > dist[u] + wt)
                    dist[v] = dist[u] + wt;
            }
        }
        int maxx = *max_element(dist.begin(), dist.end());
        return maxx==INT_MAX ? -1 : maxx;
    }
};