class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> ans;
        for(int i=0; i<col; i++)
        {
            int j = 0, k = i;
            while(j<row)
            {
                if((k==0 && grid[j][k]==-1) || (k==col-1 && grid[j][k]==1)) //   \|  |/
                    break;
                if(grid[j][k]==1)
                {
                    if(grid[j][k+1]==1) j++, k++;
                    else break;
                }
                else
                {
                    if(grid[j][k-1]==-1) j++, k--;
                    else break;
                }
            }
            j==row? ans.push_back(k) : ans.push_back(-1);
        }
        return ans;
    }
};