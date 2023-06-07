class Solution {
    int fn(int i, int j, string &s, string &t, vector<vector<int>>&dp)
    {
        if(j==t.size()) return 1;
        if(i==s.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j] = fn(i+1, j, s, t, dp) + fn(i+1, j+1, s, t, dp);
        return dp[i][j] = fn(i+1, j, s, t, dp);
    }
public:
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return fn(0, 0, s, t, dp);
    }
};