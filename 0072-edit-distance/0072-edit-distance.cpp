class Solution {
    int fn(int i, int j, string s1, string s2, vector<vector<int>>&dp)
    {
        if(i<0 || j<0) return abs(i-j);
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j] = fn(i-1, j-1, s1, s2, dp);
        return dp[i][j] = 1+min({fn(i-1, j-1, s1, s2, dp), fn(i, j-1, s1, s2, dp), fn(i-1, j, s1, s2, dp)});
    }
public:
    int minDistance(string s1, string s2) {
        vector<vector<int>>dp(s1.size(), vector<int>(s2.size(), -1));
        return fn(s1.size()-1, s2.size()-1, s1, s2, dp);
    }
};