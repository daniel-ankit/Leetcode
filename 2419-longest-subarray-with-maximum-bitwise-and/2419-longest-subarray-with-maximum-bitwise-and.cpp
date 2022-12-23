class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxx = *max_element(nums.begin(), nums.end());
        int end = -1, start = -1, i=0, ans = 0;
        while(i<nums.size())
        {
            if(nums[i]==maxx)
            {
                if(start==-1) start = end = i;
                else end = i;
                ans = max(ans, end-start+1);
            }
            else start = end = -1;
            i++;
        }
        ans = max(ans, end-start+1);
        return ans;
    }
};