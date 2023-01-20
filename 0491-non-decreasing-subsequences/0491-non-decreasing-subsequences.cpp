class Solution {
    void fn(set<vector<int>>&ans, vector<int>&temp, int i, vector<int>&nums)
    {
        if(i>=nums.size()) return;
        if(temp[temp.size()-1] <= nums[i])
        {
            temp.push_back(nums[i]);
            ans.insert(temp);
            fn(ans, temp, i+1, nums);
            temp.pop_back();
        }
        fn(ans, temp, i+1, nums);
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        for(int i=0; i<nums.size()-1; i++)
        {
            vector<int>temp(1, nums[i]);
            fn(ans, temp, i+1, nums);
        }
        return vector(ans.begin(), ans.end());
    }
};