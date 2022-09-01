class Solution {
    void fn(vector<vector<int>> &ans, vector<int> &temp, vector<int> &nums, int k, int i)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        if(i>=nums.size()) return;
        temp.push_back(nums[i]);
        fn(ans, temp, nums, k, i+1);
        temp.pop_back();
        fn(ans, temp, nums, k, i+1);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp, nums;
        for(int i=1; i<=n; i++) nums.push_back(i);
        fn(ans, temp, nums, k, 0);
        return ans;
    }
};