class Solution {
public:
    int minimumVisitedCells(vector<vector<int>>& grid) {
        if(grid.size()==0 || grid.size() == 0 || grid[0].size() == 0)
            return 0;
        int n = grid.size(), m = grid[0].size();
        if(m == 1 && n == 1) return 1;
        
        vector<vector<int>>vis(n, vector<int>(m, 0));
        queue<pair<int, int>>q;
        q.push({0, 0});
        int cnt = 1;
        
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                auto x = q.front().first, y = q.front().second;
                q.pop();
                for(int dx=1; dx<=grid[x][y]; dx++)
                {
                    if(x+dx >= n) break;
                    if(x+dx==n-1 && y==m-1) return cnt+1;
                    if(grid[x+dx][y] && !vis[x+dx][y])
                    {
                        q.push({x+dx, y});
                        vis[x+dx][y] = 1;
                    }
                }
                for(int dy=1; dy<=grid[x][y]; dy++)
                {
                    if(y+dy >= m) break;
                    if(y+dy==m-1 && x==n-1) return cnt+1;
                    if(grid[x][y+dy] && !vis[x][y+dy])
                    {
                        q.push({x, y+dy});
                        vis[x][y+dy] = 1;
                    }
                }   
            }
            cnt++;
        }
        return -1;
    }
};