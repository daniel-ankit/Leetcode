class Solution {
    int fn(int i, int j, vector<int>&piles, bool turn, vector<vector<int>>&dp) {
        if(i>j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(turn == 0)
            return dp[i][j] = max(piles[i]+fn(i+1, j, piles, 1, dp), piles[j]+fn(i, j-1, piles, 1, dp));
        return dp[i][j] = min(piles[i]+fn(i+1, j, piles, 0, dp), piles[j]+fn(i, j-1, piles, 0, dp));
    }
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        return fn(0, piles.size()-1, piles, 0, dp);
    }
};