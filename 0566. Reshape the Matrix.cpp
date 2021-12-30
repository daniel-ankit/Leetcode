class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c)
    {
        if(mat.size()*mat[0].size()!=r*c) return mat;
        vector<int> A;
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[i]. size(); j++)
                A.push_back(mat[i][j]);
        }
        reverse(A.begin(), A.end());
        mat.clear();
        for(int i=0; i<r; i++)
        {
            vector<int> temp;
            for(int j=0; j<c; j++)
            {
                temp.push_back(A.back());
                A.pop_back();
            }
            mat.push_back(temp);
        }
        return mat;
    }
};