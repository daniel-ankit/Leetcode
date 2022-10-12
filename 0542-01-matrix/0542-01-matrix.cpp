class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dis(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        while(!q.empty())
        {
            int x = q.front().first.first, y = q.front().first.second, d = q.front().second;
            q.pop();
            dis[x][y] = d;
            if(x-1 >= 0 && !vis[x-1][y]) q.push({{x-1, y}, d+1}), vis[x-1][y] = 1;
            if(x+1 < n && !vis[x+1][y]) q.push({{x+1, y}, d+1}), vis[x+1][y] = 1;
            if(y-1 >= 0 && !vis[x][y-1]) q.push({{x, y-1}, d+1}), vis[x][y-1] = 1;
            if(y+1 < m && !vis[x][y+1]) q.push({{x, y+1}, d+1}), vis[x][y+1] = 1;
        }
        return dis;
    }
};