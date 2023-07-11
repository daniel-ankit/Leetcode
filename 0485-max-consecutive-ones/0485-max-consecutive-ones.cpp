class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]) nums[i] += nums[i-1];
            maxx = max(maxx, nums[i]);
        }
        return maxx;
    }
};