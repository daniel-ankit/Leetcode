class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        vector<int>dp(nums.size(), 0);
        dp[1] = nums[1];
        dp[2] = max(nums[1], nums[2]);
        for(int i=3; i<n; i++)
        {
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }
        int maxx = max(dp[n-1], dp[n-2]);
        dp[0] = nums[0];
        dp[1] = max(nums[1], nums[0]);
        for(int i=2; i<n-1; i++)
        {
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }
        maxx = max({maxx, dp[n-2], dp[n-3]});
        return maxx;
    }
};