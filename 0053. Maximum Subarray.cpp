class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int max = INT_MIN, current=0;
        for(int i=0; i<nums.size(); i++)
        {
            current+=nums[i];
            if(max<current) max=current;
            if(current<0) current=0;
        }
        return max;
    }
};
