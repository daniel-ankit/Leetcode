class Solution {
    vector<vector<int>> ans;
    void pacific(int i, int j, vector<vector<int>>&heights, vector<vector<int>>&vis, int parent)
    {
        if(i<0 || i>=heights.size() || j<0 || j>=heights[0].size() || vis[i][j] || heights[i][j]<parent) return;
        vis[i][j] = 1;
        pacific(i-1, j, heights, vis, heights[i][j]);
        pacific(i+1, j, heights, vis, heights[i][j]);
        pacific(i, j-1, heights, vis, heights[i][j]);
        pacific(i, j+1, heights, vis, heights[i][j]);
    }
    void atlantic(int i, int j, vector<vector<int>>&heights, vector<vector<int>>&vis, int parent)
    {
        if(i<0 || i>=heights.size() || j<0 || j>=heights[0].size() || vis[i][j] == 2 || heights[i][j]<parent) return;
        if(vis[i][j]==1) ans.push_back({i,j});
        vis[i][j] = 2;
        atlantic(i-1, j, heights, vis, heights[i][j]);
        atlantic(i+1, j, heights, vis, heights[i][j]);
        atlantic(i, j-1, heights, vis, heights[i][j]);
        atlantic(i, j+1, heights, vis, heights[i][j]);
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==0 || j==0)
                {
                    int parent = -1;
                    pacific(i, j, heights, vis, parent);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==n-1 || j==m-1)
                {
                    int parent = -1;
                    atlantic(i, j, heights, vis, parent);
                }
            }
        }
        return ans;
    }
};