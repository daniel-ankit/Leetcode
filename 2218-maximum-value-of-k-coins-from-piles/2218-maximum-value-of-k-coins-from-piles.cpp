class Solution {
    int fn(int i, int k, vector<vector<int>>&piles, vector<vector<int>>&dp)
    {
        if(i>=piles.size() || k==0) return 0;
        if(dp[i][k] != -1) return dp[i][k];
        int curr = fn(i+1, k, piles, dp);
        for(int j=0; j<min(k, (int)piles[i].size()); j++)
            curr = max(curr, piles[i][j] + fn(i+1, k-(j+1), piles, dp));
        return dp[i][k] = curr;
    }
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>>dp(n+1, (vector<int>(k+1, -1)));
        for(int i=0; i<piles.size(); i++)
        {
            for(int j=1; j<piles[i].size(); j++)
                piles[i][j] += piles[i][j-1];
        }
        return fn(0, k, piles, dp);
    }
};