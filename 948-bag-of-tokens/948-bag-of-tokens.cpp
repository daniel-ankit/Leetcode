class Solution {
public:
    int bagOfTokensScore(vector<int>& nums, int power) {
        sort(nums.begin(), nums.end());
        int i=0, j = nums.size()-1;
        int count = 0;
        while(i<=j)
        {
            if(nums[i]<=power)
            {
                power-=nums[i];
                i++;
                count++;
            }
            else if(i!=j && count!=0)
            {
                count--;
                power += nums[j];
                j--;
            }
            else break;
        }
        return count;
        
        
        
        
        
        /*
        int count = 0, j = nums.size()-1;
        while(j && nums[j]>power)
        {
            power+=nums[j];
            j--;
        }
        for(int i=0; i<=j; i++)
        {
            if(nums[i]<power)
            {
                power-=nums[i];
                count++;
            }
        }
        return count;
        */
    }
};