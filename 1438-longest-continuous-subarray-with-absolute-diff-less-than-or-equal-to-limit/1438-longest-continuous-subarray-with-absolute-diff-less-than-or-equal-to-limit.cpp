class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int j=0, maxx = 0;
        multiset<int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp.insert(nums[i]);
            while(!mp.empty() && *mp.rbegin()-*mp.begin()>limit)
                mp.erase(mp.find(nums[j++]));
            maxx = max(maxx, i-j+1);
        }
        return maxx;
    }
};