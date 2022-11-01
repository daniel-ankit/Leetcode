bool cmp(vector<int>&a, vector<int>&b)
{
    if(a[0]!=b[0]) return a[0]<b[0];
    return a[1]>b[1];
}

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>>vals;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<nums[i].size(); j++)
            {
                vals.push_back({i+j, i, nums[i][j]});
            }
        }
        sort(vals.begin(), vals.end(), cmp);
        vector<int> ans;
        for(auto x:vals) ans.push_back(x[2]);
        return ans;
    }
};