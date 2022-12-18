class Solution {
    vector<vector<int>> ans;
    void fn(vector<int>&nums, int i, vector<int> &curr, int target)
    {
        if(i >= nums.size() || target < 0) return;
        if(target==0)
        {
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        fn(nums, i, curr, target-nums[i]);
        curr.pop_back();
        fn(nums, i+1, curr, target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        fn(candidates, 0, curr, target);
        return ans;
    }
};