class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target)
    {
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<nums[0].size(); j++)
                if(nums[i][j]==target) return 1;
        }
        return 0;
    }
};