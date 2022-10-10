class Solution {
    int a, b, c, d;
    void dfs(vector<vector<int>>& land, int r, int c, vector<int>&temp)
    {
        if(r<0 || r>=land.size() || c<0 || c>=land[0].size() || land[r][c]==0) return;
        if(r>temp[2]) temp[2] = r;
        if(c>temp[3]) temp[3] = c;
        land[r][c] = 0;
        dfs(land, r, c-1, temp);
        dfs(land, r, c+1, temp);
        dfs(land, r+1, c, temp);
        dfs(land, r-1, c, temp);
    }
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size(), m= land[0].size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(land[i][j])
                {
                    vector<int> temp = {i, j, i, j};
                    dfs(land, i, j, temp);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};