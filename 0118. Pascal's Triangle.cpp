class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> V(numRows);
        for(int i=0; i<numRows; i++)
        {
            V[i].push_back(1);
            if(i==0) continue;
            for(int j=1; j<V[i-1].size(); j++)
                V[i].push_back(V[i-1][j-1]+V[i-1][j]);
            V[i].push_back(1);
        }
        return V;
    }
};