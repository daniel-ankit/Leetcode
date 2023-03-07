class Solution {
    vector<vector<int>>ans;
    void fn(vector<int>&nums, vector<int>&aval, vector<int>&temp)
    {
        if(temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int k=0; k<nums.size(); k++)
        {
            if(aval[k])
            {
                temp.push_back(nums[k]);
                aval[k] = 0;
                fn(nums, aval, temp);
                temp.pop_back();
                aval[k] = 1;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>aval(nums.size(), 1), temp;
        fn(nums, aval, temp);
        return ans;
    }
};