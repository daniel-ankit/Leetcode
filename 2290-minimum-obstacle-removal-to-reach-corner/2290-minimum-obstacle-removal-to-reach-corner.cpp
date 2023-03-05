#define tuple pair<int, pair<int, int>>
class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m, INT_MAX));
        int dx[4] = {0, 0, 1, -1}, dy[4] = {-1, 1, 0, 0};
        priority_queue<tuple, vector<tuple>, greater<tuple>>q;
        q.push({0, {0, 0}});
        vis[0][0] = 0;
        while(!q.empty())
        {
            int x=q.top().second.first, y = q.top().second.second, o = q.top().first;
            q.pop();
            for(int i=0; i<4; i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny] > o+grid[x][y])
                {
                    vis[nx][ny] = o+grid[x][y];
                    q.push({vis[nx][ny], {nx, ny}});
                }
            }
        }
        return vis[n-1][m-1];
    }
};