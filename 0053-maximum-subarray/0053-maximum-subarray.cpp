class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = nums[0], curr = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(curr < 0) curr = 0;
            curr += nums[i];
            maxx = max(maxx, curr);
        }
        return maxx;
    }
};