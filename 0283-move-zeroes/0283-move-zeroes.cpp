class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero= 0, n = nums.size();
        for(auto x :nums)
            if(x==0) zero++;
        int it=0, curr=0;
        while(it<n)
        {
            if(nums[it]!=0) nums[curr++]=nums[it];
            it++;
        }
        while(zero--)
            nums[curr++]=0;
    }
};