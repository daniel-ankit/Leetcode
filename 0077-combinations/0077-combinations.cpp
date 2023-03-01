class Solution {
    vector<vector<int>> ans;
    void fn(int i, vector<int>&nums, int n, int k)
    {
        if(nums.size()==k)
        {
            ans.push_back(nums);
            return;
        }
        if(i>n) return;
        nums.push_back(i);
        fn(i+1, nums, n, k);
        nums.pop_back();
        fn(i+1, nums, n, k);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        fn(1, nums, n, k);
        return ans;
    }
};