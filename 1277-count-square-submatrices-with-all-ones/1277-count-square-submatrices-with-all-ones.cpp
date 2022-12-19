class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
                if(mat[i][j]) mat[i][j] += min({mat[i-1][j], mat[i-1][j-1], mat[i][j-1]});
        }
        int res = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                res += mat[i][j];
        return res;
    }
};