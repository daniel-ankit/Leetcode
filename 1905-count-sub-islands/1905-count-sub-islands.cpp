class Solution {
    void dfs(vector<vector<int>>& grid1, vector<vector<int>> &grid2, int r, int c, bool &yes)
    {
        if(r<0 || r>=grid1.size() || c<0 || c>=grid1[0].size() || grid2[r][c]==0) return;
        if(grid1[r][c]==0) yes = 0;
        grid2[r][c]=0;
        dfs(grid1, grid2, r+1, c, yes);
        dfs(grid1, grid2, r-1, c, yes);
        dfs(grid1, grid2, r, c+1, yes);
        dfs(grid1, grid2, r, c-1, yes);
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count = 0;
        for(int i=0; i<grid2.size(); i++)
        {
            for(int j=0; j<grid2[0].size(); j++)
            {
                if(grid2[i][j]==1)
                {
                    bool yes = 1;
                    dfs(grid1, grid2, i, j, yes);
                    if(yes) count++;
                }
            }
        }
        return count;
    }
};