class Solution {
    vector<int>dx = {0, 0, 1, -1}, dy = {1, -1, 0, 0};
    void dfs(int i, int j, vector<vector<int>>&grid, queue<vector<int>>&q)
    {
        q.push({i, j});
        grid[i][j] = 2;
        for(int k=0; k<4; k++)
        {
            int nx = i+dx[k], ny = j+dy[k];
            if(nx >= 0 && ny >= 0 && nx < grid.size() && ny < grid[0].size() && grid[nx][ny]==1)
                dfs(nx, ny, grid, q);
        }
    }
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), minn = INT_MAX;
        queue<vector<int>>q;
        bool found = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i, j, grid, q);
                    found = 1;
                    break;
                }
            }
            if(found) break;
        }
        
        int dist = 0;
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int x = q.front()[0], y = q.front()[1];
                q.pop();
                for(int i=0; i<4; i++)
                {
                    int xn = x+dx[i], yn = y+dy[i];
                    if(xn>=0 && xn<n && yn>=0 && yn<m)
                    {
                        if(grid[xn][yn]==1) return dist;
                        if(grid[xn][yn]==0) grid[xn][yn] = 2, q.push({xn, yn});
                    }
                }
            }
            dist++;
        }
        return -1;
    }
};