class Solution {
    vector<int>dx = {0, 0, 1, -1}, dy = {1, -1, 0, 0};
    bool possible(int mid, vector<vector<int>>& cells, int n, int m)
    {
        vector<vector<int>>grid(n, vector<int>(m, 0));
        
        for(int i=0; i<mid; i++)
            grid[cells[i][0]-1][cells[i][1]-1] = 1;
        
        queue<pair<int,int>>q;
        for(int i=0; i<m; i++)
        {
            if(!grid[0][i]) q.push({0, i});
            grid[0][i] = 1;
        }
        while(!q.empty())
        {
            auto x = q.front().first, y = q.front().second;
            q.pop();
            if(x == n-1) return 1;
            for(int i=0; i<4; i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && !grid[nx][ny])
                {
                    grid[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
        return 0;
    }
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int i=1, j=cells.size();
        while(i<=j)
        {
            int mid = i + (j-i)/2;
            if(possible(mid, cells, row, col)) i = mid+1;
            else j = mid-1;
        }
        return j;
    }
};