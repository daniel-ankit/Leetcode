class Solution {
    int mod = (int)1e9+7;
    int fn(int n, int abs, int late, vector<vector<vector<int>>>&dp)
    {
        if(abs==0 || late==0) return 0;
        if(n==0) return 1;
        if(dp[n][abs][late] != -1) return dp[n][abs][late];
        return dp[n][abs][late] = ((fn(n-1, abs-1, 3, dp) + fn(n-1, abs, 3, dp))%mod + fn(n-1, abs, late-1, dp))%mod;
    }
public:
    int checkRecord(int n) {
        vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(3, vector<int>(4, -1)));
        return fn(n, 2, 3, dp);
    }
};