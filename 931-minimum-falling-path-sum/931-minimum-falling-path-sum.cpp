class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int right = INT_MAX, left = INT_MAX, down = down = matrix[i-1][j];;
                if(j>0) left = matrix[i-1][j-1];
                if(j<n-1) right = matrix[i-1][j+1];
                matrix[i][j] += min({left, right, down});
            }
        }
        int minn = matrix[n-1][0];
        for(int i=1; i<n; i++)
            minn = min(minn, matrix[n-1][i]);
        return minn;
    }
};