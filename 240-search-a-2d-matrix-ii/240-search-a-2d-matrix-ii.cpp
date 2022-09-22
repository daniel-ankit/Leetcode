class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int i=0, j = m-1;
        while(i<n && j>=0)
        {
            int mid = matrix[i][j];
            if(mid==target) return 1;
            if(mid>target) j--;
            else i++;
        }
        return 0;
    }
};