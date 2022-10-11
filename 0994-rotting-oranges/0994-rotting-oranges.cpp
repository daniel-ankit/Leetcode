class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time = 0, zero=0;
        queue<pair<int, int>> q;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==2) q.push({i, j});
                if(grid[i][j]==0) zero++;
            }
        }
        while(!q.empty())
        {
            int size = q.size();
            for(int x=0; x<size; x++)
            {
                int i = q.front().first, j = q.front().second;
                q.pop();
                if(i-1 >= 0 && grid[i-1][j]==1) q.push({i-1, j}), grid[i-1][j]=2;
                if(j-1 >= 0 && grid[i][j-1]==1) q.push({i, j-1}), grid[i][j-1]=2;
                if(i+1 < grid.size() && grid[i+1][j]==1) q.push({i+1, j}), grid[i+1][j]=2;
                if(j+1 < grid[0].size() && grid[i][j+1]==1) q.push({i, j+1}), grid[i][j+1]=2;
            }
            time++;
        }
        if(zero == grid.size()*grid[0].size()) return 0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1) return -1;
            }
        }
        return time-1;
    }
};