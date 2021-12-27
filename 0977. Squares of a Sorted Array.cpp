class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> V;
        for(int i=0; i<nums.size(); i++) V.push_back(nums[i]*nums[i]);
        sort(V.begin(), V.end());
        return V;
    }
};