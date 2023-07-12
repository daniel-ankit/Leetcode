class Solution {
    vector<int>dx = {0, 0, 1, -1}, dy = {1, -1, 0, 0};
    int cnt = 0;
    void dfs(int i, int j, vector<vector<char>>& grid)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0') return;
        grid[i][j] = '0';
        for(int k=0; k<4; k++)
        {
            int nx = i+dx[k], ny = j+dy[k];
            dfs(nx, ny, grid);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        for(int i=0 ;i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i, j, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};