class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>>dp(n, vector<int>(m, 0));
        if(mat[0][0] || mat[n-1][m-1]) return 0;
        int i=0;
        while(i<n && mat[i][0] != 1)
            dp[i++][0] = 1;
        i=0;
        while(i<m && mat[0][i] != 1)
            dp[0][i++] = 1;
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                if(!mat[i][j]) dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
    }
};