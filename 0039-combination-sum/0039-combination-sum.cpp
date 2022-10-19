class Solution {
    vector<vector<int>> ans;
    void fn(vector<int> temp, int i, vector<int>& nums, int target)
    {
        if(i>=nums.size() || target<0) return;
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        fn(temp, i, nums, target-nums[i]);
        temp.pop_back();
        fn(temp, i+1, nums, target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        fn({}, 0, candidates, target);
        return ans;
    }
};