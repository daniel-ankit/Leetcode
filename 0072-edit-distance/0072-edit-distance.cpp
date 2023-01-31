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
        // vector<vector<int>>dp(s1.size()+1, vector<int>(s2.size()+1, -1));
        // return fn(s1.size()-1, s2.size()-1, s1, s2, dp);
        
        vector<vector<int>>dp(s1.size()+1, vector<int>(s2.size()+1, 0));
        for(int i=0; i<=s1.size(); i++) dp[i][0] = i;
        for(int i=0; i<=s2.size(); i++) dp[0][i] = i;
        
        for(int i=1; i<=s1.size(); i++)
        {
            for(int j=1; j<=s2.size(); j++)
            {
                if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = min({dp[i-1][j], dp[i-1][j-1], dp[i][j-1]})+1;
            }
        }
        return dp[s1.size()][s2.size()];
    }
};