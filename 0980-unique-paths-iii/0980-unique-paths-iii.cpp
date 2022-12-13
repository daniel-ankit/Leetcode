class Solution {
    vector<vector<int>> grid;
    int fn(int i, int j, int curr, int &total)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==-1) return 0;
        if(grid[i][j]==2) return curr == total;
        grid[i][j] = -1;
        int ans = fn(i+1, j, curr+1, total) + fn(i-1, j, curr+1, total) + fn(i, j+1, curr+1, total) + fn(i, j-1, curr+1, total);
        grid[i][j] = 0;
        return ans;
    }
public:
    int uniquePathsIII(vector<vector<int>>& Grid) {
        int xi, yi, total = 0;
        grid = Grid;
        for(int i=0; i<Grid.size(); i++)
        {
            for(int j=0; j<Grid[0].size(); j++)
            {
                if(Grid[i][j]==1) xi = i, yi = j;
                if(Grid[i][j]!=-1) total++;
            }
        }
        return fn(xi, yi, 1, total);
    }
};