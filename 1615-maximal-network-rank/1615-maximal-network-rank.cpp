class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int maxx = 0;
        vector<int>adj[n];
        for(auto x:roads)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(i!=j)
                {
                    int cnt = adj[i].size() + adj[j].size();
                    for(auto x:adj[i])
                    {
                        if(x==j)
                        {
                            cnt--;
                            break;
                        }
                    }
                    maxx = max(maxx, cnt);
                }
            }
        }
        return maxx;
    }
};