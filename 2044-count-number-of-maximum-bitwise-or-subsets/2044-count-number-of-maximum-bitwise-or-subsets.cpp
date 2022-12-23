class Solution {
    void fn(vector<int>&nums, int i, int curr, int &count, int OR)
    {
        if(i>=nums.size())
        {
            if(OR==curr) count++;
            return;
        }
        fn(nums, i+1, curr, count, OR);
        fn(nums, i+1, curr|nums[i], count, OR);
    }
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int OR = 0, count = 0;
        for(auto x:nums) OR|=x;
        fn(nums, 0, 0, count, OR);
        return count;
    }
};