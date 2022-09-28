class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, ones = 0, zeros = 0, maxx = 0;
        while(j<nums.size())
        {
            if(nums[j]==1) ones++;
            else zeros++;
            while(zeros>k)
            {
                if(nums[i]==0) zeros--;
                else ones--;
                i++;
            }
            maxx = max(maxx, ones+zeros);
            j++;
        }
        return maxx;
    }
};