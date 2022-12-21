class Solution {
    bool bfs(vector<int> grid[], vector<int>&col, int i)
    {
        queue<int> q;
        q.push(i);
        col[i] = 0;
        while(!q.empty())
        {
            int now = q.front();
            q.pop();
            for(auto x:grid[now])
            {
                if(col[x]==col[now]) return 0;
                if(col[x]==-1)
                {
                    col[x] = !col[now];
                    q.push(x);
                }
            }
        }
        return 1;
    }
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> col(n+1, -1);
        vector<int>grid[n+1];
        for(auto x:dislikes)
        {
            grid[x[0]].push_back(x[1]);
            grid[x[1]].push_back(x[0]);
        }
        for(int i=1; i<=n; i++)
        {
            if(col[i] == -1 && !bfs(grid, col, i)) return 0;
        }
        return 1;
    }
};