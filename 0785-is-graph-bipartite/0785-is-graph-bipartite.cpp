class Solution {
    // bool cycle(vector<vector<int>>&grid, int color, int i, vector<int> &col)
    // {
    //     col[i] = color;
    //     for(auto x:grid[i])
    //     {
    //         if(col[x] == -1 && cycle(grid, !color, x, col)) return 1;
    //         else if(col[x]==col[i]) return 1;
    //     }
    //     return 0;
    // }
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
            if(col[i] == -1 && cycle(grid, 0, i, col)) return 0;
        }
        return 1;
    }
};