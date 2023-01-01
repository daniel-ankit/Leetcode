class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char> mp1;
        map<char, string> mp2;
        s+=' ';
        string text;
        int i=0;
        for(auto x:s)
        {
            if(x==' ')
            {
                if(mp1.find(text)==mp1.end() && mp2.find(pattern[i])==mp2.end())
                {
                    mp1[text] = pattern[i];
                    mp2[pattern[i]] = text;
                }
                else if(mp1.find(text) == mp1.end())
                {
                    if(mp2[pattern[i]] != text) return 0;
                    else mp1[text] = pattern[i];
                }
                else if(mp2.find(pattern[i]) == mp2.end())
                {
                    if(mp1[text] != pattern[i]) return 0;
                    else mp1[text] = pattern[i];
                }
                else if(mp1[text] != pattern[i] || mp2[pattern[i]] != text) return 0;
                i++;
                text = "";
            }
            else text += x;
        }
        return i==pattern.size();
    }
};