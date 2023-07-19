class Solution {
    bool fn(vector<int>& nums, int target, int i, int a, int b, int c, int d)
    {
        if(i>nums.size() || a>target || b>target || c>target || d>target) return 0;
        if(i==nums.size())
        {
            if(a==target && b==target && c==target && d==target) return 1;
            return 0;
        }
        bool ans = 0;
        ans |= fn(nums, target, i+1, a+nums[i], b, c, d);
        ans |= fn(nums, target, i+1, a, b+nums[i], c, d);
        ans |= fn(nums, target, i+1, a, b, c+nums[i], d);
        ans |= fn(nums, target, i+1, a, b, c, d+nums[i]);
        return ans;
    }
public:
    bool makesquare(vector<int>& matchsticks) {
        int total = 0;
        for(auto x:matchsticks) total += x;
        if(total%4) return 0;
        sort(matchsticks.begin(), matchsticks.end(), greater());
        return fn(matchsticks, total/4, 0, 0, 0, 0, 0);
    }
};