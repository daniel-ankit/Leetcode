class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n ==1) return 1;
        int front = 0, back = 0, both = 0;
        int maxx = INT_MIN, minn = INT_MAX, maxi=0, mini=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>maxx) maxi = i;
            if(nums[i]<minn) mini = i;
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }
        front = max(maxi, mini) + 1;
        back = n - min(maxi, mini);
        both = min(maxi, mini)+1 + n-max(maxi, mini);
        return min({front, back, both});
    }
};