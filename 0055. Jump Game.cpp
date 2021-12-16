class Solution {
public:
    bool canJump(vector<int>& nums)
    {;
        int d = nums.size();
        int left = 0;
        for(int i=0; i<d; i++)
        {
            left--;
            left = max(left, nums[i]);
            if(!left) return (i==d-1);
        }
        return true;
    }
};