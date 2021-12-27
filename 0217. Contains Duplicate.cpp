class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        set <int> S;
        for(auto x:nums)
            S.insert(x);
        if(S.size()==nums.size())
            return false;
        return true;
    }
};