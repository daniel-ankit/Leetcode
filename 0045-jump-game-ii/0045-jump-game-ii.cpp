class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),i=0,ans=0;
        for(int i=1;i<n;i++)nums[i]=max(nums[i]+i,nums[i-1]);
        while(i<n-1){
            ans++;
            i=nums[i];
        }
        return ans;
    }
};