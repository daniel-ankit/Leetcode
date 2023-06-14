class Solution {
    int go(int row, int y1, int y2, vector<vector<int>>&g, vector<vector<vector<int>>>&dp)
    {
        if(y1<0 || y1>=g[0].size() || y2<0 || y2>=g[0].size()) return 0;
        if(row == g.size()-1)
        {
            if(y1 == y2) return dp[row][y1][y2] = g[row][y1];
            return dp[row][y1][y2] = g[row][y1] + g[row][y2];
        }
        if(dp[row][y1][y2] != -1) return dp[row][y1][y2];
        int maxx = 0;
        for(int i=-1; i<=1; i++)
        {
            for(int j=-1; j<=1; j++)
            {
                int value;
                if(y1 == y2) value = g[row][y1];
                else value = g[row][y1]+g[row][y2];
                value += go(row+1, y1+i, y2+j, g, dp);
                maxx = max(maxx, value);
            }
        }
        return dp[row][y1][y2] = maxx;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        vector<vector<vector<int>>>dp(100, vector<vector<int>>(100, vector<int>(100, -1)));
        return go(0, 0, grid[0].size()-1, grid, dp);
    }
};