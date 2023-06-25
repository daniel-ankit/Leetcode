class Solution {
public:
    int countTriplets(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto x:nums)
        {
            for(auto y:nums)
                mp[x&y]++;
        }
        int cnt = 0;
        for(auto x:nums)
        {
            for(auto y:mp)
            {
                if((x&y.first) == 0) cnt += y.second;
            }
        }
        return cnt;
    }
};