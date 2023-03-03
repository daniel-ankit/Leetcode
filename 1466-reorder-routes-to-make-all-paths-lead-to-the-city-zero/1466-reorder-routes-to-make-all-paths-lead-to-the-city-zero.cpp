class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        for(auto x:connections)
        {
            adj[x[0]].push_back(-x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int cnt = 0;
        vector<int>vis(n, 0);
        queue<int>q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty())
        {
            auto now = q.front();
            q.pop();
            for(auto x:adj[now])
            {
                if(!vis[abs(x)])
                {
                    vis[abs(x)] = 1;
                    if(x<0) cnt++;
                    q.push(abs(x));
                }
            }
        }
        return cnt;
        /*
        vector<vector<int>>grid(n, vector<int>(n, 0));
        for(auto x:connections) 
        {
            grid[x[0]][x[1]] = -1;
            grid[x[1]][x[0]] = 1;
        }
        queue<int>q;
        q.push(0);
        vector<int>vis(n, 0);
        int cnt = 0;
        while(!q.empty()) 
        {
            int now = q.front();
            q.pop();
            if(!vis[now])
            {
                for(int i=0; i<n; i++)
                {
                    if(grid[now][i]!=0)
                    {
                        if(grid[now][i] == -1) cnt++;
                        grid[now][i] = 0;
                        grid[i][now] = 0;
                        q.push(i);
                    }
                }
                vis[now] = 1;
            }
        }
        return cnt;
        */
    }
};