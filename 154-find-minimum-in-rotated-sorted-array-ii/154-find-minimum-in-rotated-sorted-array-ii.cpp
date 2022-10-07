class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), i=0, j=n-1;
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(nums[j] < nums[mid])
                i = mid+1;
            else if(nums[mid]<nums[i])
            {
                j = mid;
                i++;
            }
            else j--;
        }
        return nums[i];
    }
};