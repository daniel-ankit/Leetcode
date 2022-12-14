class Solution {
    bool cycle(vector<vector<int>>&grid, int curr, int i, vector<int>&col)
    {
        col[i] = curr;
        for(auto x:grid[i])
        {
            if(col[x]==-1)
            {
                if(cycle(grid, !curr, x, col)) return 1;
            }
            else if(col[x]==col[i]) return 1;
        }
        return 0;
    }
public:
    bool isBipartite(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> col(n, -1);
        for(int i=0; i<n; i++)
        {
            if(col[i] == -1 && !bfs(grid, col, i)) return 0;
        }
        return 1;
        
    }
    bool bfs(vector<vector<int>> &grid, vector<int>&col, int i)
    {
        queue<int> q;
        q.push(i);
        col[i] = 0;
        while(!q.empty())
        {
            int now = q.front();
            q.pop();
            for(auto x:grid[now])
            {
                if(col[x]==col[now]) return 0;
                if(col[x]==-1)
                {
                    col[x] = !col[now];
                    q.push(x);
                }
            }
        }
        return 1;
    }
};