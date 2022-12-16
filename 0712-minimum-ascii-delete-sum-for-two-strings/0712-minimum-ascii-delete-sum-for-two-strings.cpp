class Solution {
    int lcs(string s1, string s2)
    {
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1] + s1[i-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
    int ascii(string s)
    {
        int ans = 0;
        for(auto x:s) ans+=x;
        return ans;
    }
public:
    int minimumDeleteSum(string s1, string s2) {
        return ascii(s1)+ascii(s2)-2*lcs(s1, s2);
    }
};