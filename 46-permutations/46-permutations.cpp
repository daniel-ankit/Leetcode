class Solution {
    
    /*
    void fn(vector<bool> &aval, vector<vector<int>> &ans, vector<int> &temp, vector<int>&nums)
    {
        if(temp.size()==nums.size())   
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(aval[i])
            {
                temp.push_back(nums[i]);
                aval[i] = 0;
                fn(aval, ans, temp, nums);
                aval[i] = 1;
                temp.pop_back();
            }
        }
    }
    */
    vector<int> num;
    vector<vector<int>> ans;
    void fn(vector<bool> &aval, vector<int> &temp)
    {
        if(temp.size()==num.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0; i<num.size(); i++)
        {
            if(aval[i])
            {
                temp.push_back(num[i]);
                aval[i] = 0;
                fn(aval, temp);
                temp.pop_back();
                aval[i] = 1;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> aval(nums.size(), 1);
        vector<int> temp;
        num = nums;
        fn(aval, temp);
        return ans;
    }
};