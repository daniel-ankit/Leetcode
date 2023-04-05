class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int>mp;
        string ans;
        for(auto x:s) mp[x]++;
        for(auto x:order)
        {
            while(mp[x]--)
                ans += x;
            mp.erase(x);
        }
        for(auto x:mp)
        {
            while(x.second--)
                ans += x.first;
        }
        return ans;
    }
};