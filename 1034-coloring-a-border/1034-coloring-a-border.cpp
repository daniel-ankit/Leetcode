class Solution {
    int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        int init = grid[row][col];
        vis[row][col] = 1;
        q.push({row, col});
        while(!q.empty())
        {
            auto x = q.front().first, y = q.front().second, cnt = 0;
            vis[x][y] = 1;
            q.pop();
            grid[x][y] = color;
            for(int i=0; i<4; i++)
            {
                int xn = x+dx[i], yn = y+dy[i];
                if(xn>=0 && xn<n && yn>=0 && yn<m)
                {
                    if(grid[xn][yn]==init && !vis[xn][yn])
                        q.push({xn, yn}), vis[xn][yn] = 1;
                    if(vis[xn][yn]) cnt++;
                }
            }
            if(cnt == 4) grid[x][y] = init;
        }
        return grid;
    }
};