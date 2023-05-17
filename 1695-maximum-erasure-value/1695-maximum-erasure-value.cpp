class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0, j=0, maxx=0, sum=0;
        set<int>mp;
        while(j<nums.size())
        {
            while(i<j && mp.find(nums[j])!=mp.end())
            {
                mp.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            mp.insert(nums[j]);
            sum += nums[j];
            maxx = max(maxx, sum);
            j++;
        }
        return maxx;
    }
};