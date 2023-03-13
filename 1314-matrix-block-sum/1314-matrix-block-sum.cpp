class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int a) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>>ans(n, vector<int>(m, 0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                for(int k=max(0, i-a); k<=min(n-1, i+a); k++)
                {
                    for(int l = max(0, j-a); l<=min(m-1, j+a); l++)
                        ans[i][j] += mat[k][l];
                }
            }
        }
        return ans;
    }
};