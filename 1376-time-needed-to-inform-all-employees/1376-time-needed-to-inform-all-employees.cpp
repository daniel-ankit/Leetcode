class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int>adj[n];
        int maxx = 0;
        for(int i=0; i<n; i++)
        {
            if(manager[i] != -1)
                adj[manager[i]].push_back(i);
        }
        queue<pair<int, int>>q;
        q.push({headID, 0});
        while(!q.empty())
        {
            auto node = q.front().first, time = q.front().second;
            q.pop();
            for(auto x:adj[node])
            {
                q.push({x, time+informTime[node]});
                maxx = max(maxx, time+informTime[node]);
            }
        }
        return maxx;
    }
};