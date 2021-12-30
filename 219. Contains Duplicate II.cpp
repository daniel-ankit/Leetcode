class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map <int, int> M;
        for(int i=0; i<nums.size(); i++)
        {
            if(M.find(nums[i]) != M.end() && abs(i - M[nums[i]])<=k) return true;
            else M[nums[i]]=i;
        }
        return false;
    }
};