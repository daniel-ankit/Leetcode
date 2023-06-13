class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        int res = 0;
        int dx = homePos[0] > startPos[0] ? 1 : -1;
        int dy = homePos[1] > startPos[1] ? 1 : -1;
        for(int i=startPos[0]; i!=homePos[0]; i+=dx) res += rowCosts[i+dx];
        for(int i=startPos[1]; i!=homePos[1]; i+=dy) res += colCosts[i+dy];
        return res;

//         int n = rowCosts.size(), m = colCosts.size();
//         vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        
//         int xi = startPos[0], yi = startPos[1], xf = homePos[0], yf = homePos[1];
        
//         queue<pair<int, int>>q;
//         dp[xi][yi] = 0;
//         q.push({xi, yi});
        
//         while(!q.empty())
//         {
//             auto x = q.front().first, y = q.front().second;
//             q.pop();
//             if(x==xf && y==yf) return dp[x][y];
//             if(x>0 && dp[x-1][y]==INT_MAX) dp[x-1][y] = dp[x][y] + rowCosts[x-1], q.push({x-1, y});
//             if(y>0 && dp[x][y-1]==INT_MAX) dp[x][y-1] = dp[x][y] + colCosts[y-1], q.push({x, y-1});
//             if(x<n-1 && dp[x+1][y]==INT_MAX) dp[x+1][y] = dp[x][y] + rowCosts[x+1], q.push({x+1, y});
//             if(y<m-1 && dp[x][y+1]==INT_MAX) dp[x][y+1] = dp[x][y] + colCosts[y+1], q.push({x, y+1});
//         }
//         return dp[xf][yf];
    }
};