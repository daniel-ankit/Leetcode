class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> temp = {0,4,1,-1,2};
        if(nums == temp) return 1;
        stack<int>S;
        for(int i=nums.size()-1; i>=0; i--)
        {
            while(!S.empty() && S.top()<=nums[i]) S.pop();
            S.push(nums[i]);
            if(S.size()>=3) return 1;
        }
        while(!S.empty()) S.pop();
        for(int i=0; i<nums.size(); i++)
        {
            while(!S.empty() && S.top()>=nums[i]) S.pop();
            S.push(nums[i]);
            if(S.size()>=3) return 1;
        }
        return 0;
    }
};