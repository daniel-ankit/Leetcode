class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxx = 0, sum = 0;
        int j=0;
        map<int, int>mp;
        for(j=0; j<k; j++)
        {
            mp[nums[j]]++;
            sum += nums[j];
        }
        if(mp.size() == k) maxx = max(maxx, sum);
        while(j<nums.size())
        {
            mp[nums[j]]++;
            sum += nums[j];
            mp[nums[j-k]]--;
            sum -= nums[j-k];
            if(mp[nums[j-k]] == 0)  mp.erase(nums[j-k]);
            if(mp.size()==k) maxx = max(maxx, sum);
            j++;
        }
        return maxx;
      
    }
};