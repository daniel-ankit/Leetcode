class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin(), nums.end(),0);
        int find = total-x, sum = 0, maxx = -1;
        if(find < 0) return maxx;
        for(int i=0, j=0; j<nums.size(); ++j)
        {
			sum += nums[j];
			while(sum > find) sum -= nums[i++];
			if(sum == find) maxx = max(maxx, j-i+1);
		}
        return maxx == -1 ? maxx : nums.size()-maxx;
    }
};