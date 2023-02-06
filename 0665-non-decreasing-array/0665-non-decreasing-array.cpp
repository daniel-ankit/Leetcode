class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size()<=1) return 1;
        bool found = 0;
        int n= nums.size();
        for(int i=0; i<n-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                if(i!=0 && nums[i-1] > nums[i+1])
                    nums[i+1] = nums[i];
                else nums[i] = nums[i+1];
                if(!found) found = 1;
                else return 0;
            }
        }
        return 1;
    }
};