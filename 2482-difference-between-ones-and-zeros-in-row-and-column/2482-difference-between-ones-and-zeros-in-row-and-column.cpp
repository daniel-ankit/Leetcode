class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int>onesRow(n, 0), onesCol(m, 0);
        for(int i=0; i<n; i++)
        {
            int sum = accumulate(grid[i].begin(), grid[i].end(), 0);
            onesRow[i] = sum;
        }
        for(int i=0; i<m; i++)
        {
            int sum = 0;
            for(int j=0; j<n; j++) sum += grid[j][i];
            onesCol[i] = sum;
        }
        vector<vector<int>>ans(n, vector<int>(m, 0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                ans[i][j] = 2*onesRow[i] + 2*onesCol[j] - (n + m);
        }
        return ans;
    }
};