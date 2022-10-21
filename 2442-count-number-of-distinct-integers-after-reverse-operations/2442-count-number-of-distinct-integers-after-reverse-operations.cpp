class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for(auto x:nums)
        {
            s.insert(x);
            string rev = to_string(x);
            reverse(rev.begin(), rev.end());
            s.insert(stoi(rev));
        }
        return s.size();
    }
};