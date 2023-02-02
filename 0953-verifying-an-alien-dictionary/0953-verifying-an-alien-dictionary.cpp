map<char, int>mp;
bool cmp(string &a, string &b)
{
    for(int i=0; i<min(a.size(), b.size()); i++)
    {
        if(a[i]!=b[i]) return mp[a[i]] < mp[b[i]];
    }
    return (a.size() <= b.size());
}
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0; i<26; i++) mp[order[i]] = i;
        vector<string> wd = words;
        sort(wd.begin(), wd.end(), cmp);
        return wd==words;
    }
};