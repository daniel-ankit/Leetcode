class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<int>adj[n];
        vector<int>res(n, 0), vis(n, 0);
        vis[0] = 1;
        for(auto x:restricted) res[x] = 1;
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        int count = 1;
        for(auto x:adj[0])
        {
            if(!res[x]) q.push(x);
        }
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            if(!vis[x] && !res[x])
            {
                vis[x] = 1;
                count++;
                for(auto y:adj[x]) q.push(y);
            }
        }
        return count;

    }
};