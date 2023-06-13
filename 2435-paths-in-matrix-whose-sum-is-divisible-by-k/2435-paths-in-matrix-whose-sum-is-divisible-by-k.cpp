class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(m, vector<int>(k, 0)));
        int mod = (int)1e9+7;
        dp[0][0][grid[0][0]%k] = 1;
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<k; j++)
                dp[i][0][(j + grid[i][0])%k] = dp[i-1][0][j]%mod;
        }
        for(int i=1; i<m; i++)
        {
            for(int j=0; j<k; j++)
                dp[0][i][(j + grid[0][i])%k] = dp[0][i-1][j]%mod;
        }
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                for(int x=0; x<k; x++)
                {
                    dp[i][j][(x + grid[i][j])%k] = (dp[i-1][j][x] + dp[i][j-1][x])%mod;
                }
            }
        }
        return dp[n-1][m-1][0]%mod;
    }
};