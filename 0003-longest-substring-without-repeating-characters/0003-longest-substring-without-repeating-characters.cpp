class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0, maxx=0;
        map<char, int>mp;
        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp[s[j]]>1)
            {
                while(i<j && s[i]!=s[j])
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
                mp[s[i++]]--;
            }
            maxx = max(maxx, j-i+1);
            j++;
        }
        return maxx;
    }
};