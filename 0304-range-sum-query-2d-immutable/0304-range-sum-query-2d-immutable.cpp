class NumMatrix {
    vector<vector<int>>grid;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>>mat(n+1, vector<int>(m+1, 0));
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
                mat[i][j] = matrix[i-1][j-1] - mat[i-1][j-1] + mat[i-1][j] + mat[i][j-1];
        }
        grid = mat;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return grid[row2+1][col2+1]-grid[row1][col2+1]-grid[row2+1][col1]+grid[row1][col1];
    }
};