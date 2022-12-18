class Solution {
    int dfs(vector<vector<int>>&mat, vector<vector<int>>&dp, int i, int j, int parent)
    {
        if(i<0 || i>=mat.size() || j<0 || j>=mat[0].size() || mat[i][j] <= parent) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int up = dfs(mat, dp, i+1, j, mat[i][j]);
        int down = dfs(mat, dp, i-1, j, mat[i][j]);
        int right = dfs(mat, dp, i, j+1, mat[i][j]);
        int left = dfs(mat, dp, i, j-1, mat[i][j]);
        return dp[i][j] = max({up, down, left, right})+1;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        int maxx = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                maxx = max(maxx, dfs(matrix, dp, i, j, INT_MIN));
            }
        }
        return maxx;
    }
};