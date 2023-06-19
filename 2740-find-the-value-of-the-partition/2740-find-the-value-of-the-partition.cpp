class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int minn = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
            minn = min(nums[i]-nums[i-1], minn);
        return minn;
    }
};