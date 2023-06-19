class Solution {
    vector<int>dx = {0, 0, 1, -1}, dy = {1, -1, 0, 0};
    int dfs(vector<vector<int>>& grid, vector<vector<int>>&dp, int x, int y)
    {
        if(dp[x][y] != -1) return dp[x][y];
        long long cnt = 1;
        for(int i=0; i<4; i++)
        {
            int nx = x+dx[i], ny = y+dy[i];
            if(nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size() && grid[nx][ny] > grid[x][y])
                cnt += dfs(grid, dp, nx, ny);
        }
        return dp[x][y] = cnt%1000000007;
    }
public:
    int countPaths(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), mod = 1000000007;
        vector<vector<int>>dp(n, vector<int>(m, -1));
        long long ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                ans += dfs(grid, dp, i, j);
        }
        return ans%mod;
    }
};