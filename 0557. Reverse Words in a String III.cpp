class Solution {
public:
    string reverseWords(string s)
    {
        string sub="", ans="";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ') sub += s[i];
            else
            {
                reverse(sub.begin(), sub.end());
                ans+=sub;
                ans+=' ';
                sub.clear();
            }
        }
        reverse(sub.begin(), sub.end());
        ans+=sub;
        return ans;
    }
};