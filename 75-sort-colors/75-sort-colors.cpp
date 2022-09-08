class Solution {
public:
    void sortColors(vector<int>& nums) {
     // sort(nums.begin(),nums.end()); 
        int count1=0,cnt2=0,cnt3=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) count1++;
            if(nums[i]==1) cnt2++;
            if(nums[i]==2) cnt3++;
        }
        int i=0;
        while(count1--)
        {
            nums[i]=0;
            i++;
        }
        while(cnt2--)
        {
            nums[i] =1;
            i++;
        }
        while(cnt3--)
        {
            nums[i]=2;
            i++;
        }
    }
};