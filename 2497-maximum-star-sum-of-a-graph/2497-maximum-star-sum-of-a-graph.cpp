class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        if(edges.size()==0) return *max_element(vals.begin(), vals.end());
        int n = vals.size();
        vector<int>adj[n];
        for(auto x:edges)
        {
            adj[x[0]].push_back(vals[x[1]]);
            adj[x[1]].push_back(vals[x[0]]);
        }
        int maxx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            int size = adj[i].size(), curr = vals[i];
            sort(adj[i].begin(), adj[i].end(), greater<int>());
            for(int j=0; j<min(k, size); j++)
            {
                if(adj[i][j] > 0) curr += adj[i][j];
                else break;
            }
            maxx = max(maxx, curr);
        }
        return maxx;
    }
};