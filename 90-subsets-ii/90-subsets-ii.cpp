class Solution {
    void fn(vector<int> temp, set<vector<int>> &S, int index, vector<int>&nums)
    {
        if(index==nums.size())
        {
            sort(temp.begin(), temp.end());
            S.insert(temp);
            return;
        }
        temp.push_back(nums[index]);
        fn(temp, S, index+1, nums);
        temp.pop_back();
        fn(temp, S, index+1, nums);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     vector<vector<int>>v;
        set<vector<int>>s;
        fn({},s,0,nums);
        for(auto i:s)
            v.push_back(i);
        return v;
    }
};