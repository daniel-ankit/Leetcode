class Solution {
    void dfs(int i, int j, vector<vector<int>>&grid, int &cnt)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || !grid[i][j]) return;
        grid[i][j] = 0;
        cnt++;
        dfs(i+1, j, grid, cnt);
        dfs(i-1, j, grid, cnt);
        dfs(i, j+1, grid, cnt);
        dfs(i, j-1, grid, cnt);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), maxx = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int cnt = 0;
                if(grid[i][j]) dfs(i, j, grid, cnt);
                maxx = max(maxx, cnt);
            }
        }
        return maxx;
    }
};