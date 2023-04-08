class Solution {
    bool check(string &s, string t)
    {
        int i=0, j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j]) j++;
            i++;
        }
        return j==t.size();
    }
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt = 0;
        map<string, int>mp;
        for(auto x:words) mp[x]++;
        for(auto x:mp)
            if(check(s, x.first)) cnt+=x.second;
        return cnt;
    }
};