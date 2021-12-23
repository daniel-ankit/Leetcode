class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            int m = (i+j)/2;
            if(target == nums[m]) return m;
            if(target>nums[m]) i = m+1;
            else j = m-1;
        }
        if(nums[i]<target) return i+1;
        return i;
    }
};