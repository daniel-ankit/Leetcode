class Solution {
    bool fn(int i, int j, string &s, string &p, vector<vector<int>>&dp)
    {
        if(i<0 && j<0) return 1;
        if(i>=0 && j<0) return 0;
        if(i<0 && j>=0)
        {
            for(int k=0; k<=j; k++)
                if(p[k]!='*') return 0;
            return 1;
        }
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i]==p[j] || p[j]=='?')
            return dp[i][j] = fn(i-1, j-1, s, p, dp);
        
        if(p[j]=='*')
            return dp[i][j] =  fn(i-1, j, s, p, dp) || fn(i, j-1, s, p, dp);
        
        return dp[i][j] = 0;
    }
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<int>>dp(n, (vector<int>(m, -1)));
        return fn(n-1, m-1, s, p, dp);
    }
};