class Solution {
    int fn(int i, int prev_ind, vector<vector<int>>& pairs, vector<vector<int>>&dp)
    {
        if(i>=pairs.size()) return 0;
        if(dp[i][prev_ind+1] != -1) return dp[i][prev_ind+1];
        if(prev_ind == -1 || pairs[prev_ind][1] < pairs[i][0])
            return dp[i][prev_ind+1] = max(1+fn(i+1, i, pairs, dp), fn(i+1, prev_ind, pairs, dp));
        return dp[i][prev_ind+1] = fn(i+1, prev_ind, pairs, dp);
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        vector<vector<int>>dp(n, vector<int>(n+1, -1));
        sort(pairs.begin(), pairs.end());
        return fn(0, -1, pairs, dp);
    }
};