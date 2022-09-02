class Solution {
    set<vector<int>> S;
    void fn(vector<int>&aval, vector<int>&nums, vector<int> &temp)
    {
        if(temp.size()==nums.size())
        {
            S.insert(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(aval[i])
            {
                temp.push_back(nums[i]);
                aval[i] = 0;
                fn(aval, nums, temp);
                temp.pop_back();
                aval[i] = 1;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> aval(nums.size(), 1), temp;
        fn(aval, nums, temp);
        vector<vector<int>> ans;
        for(auto x:S)
            ans.push_back(x);
        return ans;
    }
};